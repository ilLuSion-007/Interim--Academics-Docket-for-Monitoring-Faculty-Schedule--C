/* preprocessor directives */
#include <stdio.h> // linked first header file for standard input/output facilities
#include <string.h>  // linked second header file for string library

/* indicate the current state of the program where count lines, words, and characters in input*/
#define IN 0 // IN literally means "inside a word"
#define OUT 1 // OUT literally means "outside a word"

/* We are tracking where a word starts and begins to count the number of words. 
If we don't use it, then we will count things that are not words such as multiple spaces, tabs, or newlines. We keeps setting the state to OUT until we doesn't see those characters anymore, then we knows that it must be the start of a word then we set it's state IN
Once we reaches a space, newline, or tab then we knows we are "out of a word". Notice that we only counts it once */

int main (int argc, char **argv) {
freopen(argv[1],"r",stdin); // open the stripped raw html file in read mode
freopen(argv[2],"w",stdout);   // open the plain text file in write mode after conversion of html file to plain text
 int c = 0; //  store the characters in a variable c
 int state = OUT; // STATE is set to out, no word encountered
 int tstate = OUT; // STATE set to out for style,javascript tags, no word encountered
 char tagbuff[2048]; // defining the char array size value
 char *ptr1 = NULL; // defining the pointer value null

 ptr1 = tagbuff;
 
/* Get character from the input and exit the while loop if we receive EOF ("end of file") so applied not equal to infront of it */
while((c = getchar()) != EOF) {
 /* copy tag into tagbuff */
  if(c == '<' || c == '&' || c == '#' || c == '"' || c == '.' || c == ';' || c == '=') state = IN; // starting of html tags assigned
  if(state == IN) *ptr1++ = c; // increament the pointer value when inside the html tag state set IN
  if(c == '>' || c == '=') {       // ending of html tags assigned
   state = OUT; *ptr1++ = '\0'; // outside the html tag state set OUT

 /* search tagbuff, javascript, style tags */
   if(strstr(tagbuff, "<s") != 0 || strstr(tagbuff, "<S") != 0) // starting of style,javascript tags assigned
    tstate = IN; // starting inside the style, javascript words, tstate set IN
   if(strstr(tagbuff, "</") != 0) //  ending of style,javascript tags assigned
    tstate = OUT; // coming outside of the style, javascript words, tstate set OUT

   /* checking the space tag nbsp in html and striped out */
   if(strstr(tagbuff, "nbsp") != 0 || strstr(tagbuff, "NBSP") != 0)
    printf(" ");

   ptr1 = tagbuff;
  }  /* end if */

  /* not in a tag, print character */
  if(state == OUT && tstate == OUT && c != '>' && c != ';')
   printf("%c", c);
 }

 return 0;
}
