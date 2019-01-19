/* preprocessor directives */
#include <stdio.h> // linked first header file for standard input/output 
#include <stdlib.h> // linked second header file for standard library

/* Functions */
void check_line (char) ;  // checks for both types of lines, then passes on control to below handling methods of lines
void block_line () ;   //  handles block of lines or multilines
void single_line () ;   // handles single lines

/* 2 file pointers - 1st is for the file in which we check for raw html lines,
and 2nd is the file in which we copy the code after removing raw html lines while taking only relevant data  */

FILE *fp , *fp2;

int main (int argc, char **argv)
{
    char c;
    fp = fopen (argv[1], "r");   // open the first raw html file in read mode
    fp2 = fopen (argv[2], "w") ;   // open the second stripped html file in write mode after removed raw html data 

    while((c=fgetc(fp))!=EOF)    // read the html file character by character
        check_line(c);    // check for each character if it seems like the beginning of a line
    fclose(fp);  /* close both the files at the end of the program */
    fclose(fp2);

    return 0;
}


/* handles both types of lines */
void check_line(char c)
{
    char d;

    if( c == '<')    // if the character starts with '<', it 'could' be a start of html file
    {
        if((d=fgetc(fp))=='!')    // if the next character we read is '!', it is the beginning of !DOCTYPE of html file i.e start of html file decalaration
         block_line();  // pass control to function that handles multiblock lines


        else if( d == '!')    // else if the next character we read is again '!', it is the beginning of single line
        {
          single_line(); // pass control to function that handles single lines

        }
        else
        {
            
            fputc(c,fp2); /* if both the cases fail, it is not a raw html line, so we add the character as it is in the new file */
            fputc(d,fp2);
        }
    }

   /* again, if all above fails, we add the character as it is in the new file. */
    else
        fputc(c,fp2);
}


/* function that handles block of lines */
void block_line()
{

 char d,e;

    while((d=fgetc(fp))!=EOF)  // the block of line has started, read the character by character
    {
 /* keep reading the characters and do nothing,
    as they do not have to be copied into the new file (we are removing the raw html multiple lines)
    */
    
    
        if(d=='&')      // if the line 'seems' like it ending i.e before relevant data it will be removed all block of lines
        {
            e=fgetc(fp);  // check if it actually ends (block of lines end with '&#')


            if(e=='#')  // if the comment 'has' ended, return from the function
                return;
        }
   }

}

/* function that handles single lines */
void single_line()
{
 char d,e;

    while((d=fgetc(fp))!=EOF) /* the single line has started, read the character by character */
    {
  /* keep reading the characters and do nothing,c
    as they do not have to be copied into the new file (we are removing the single raw html lines)
    */
        if(d=='\n')   // check if the line ends (single lines end with '\n', or newline)
            return;  // if the line 'has' ended, return from the function


    }

}
