#include <stdio.h>
#include <string.h>
#include<stdlib.h>

#define BUF 228 
#define TOT 128

int main (int argc, char **argv)
{


    char line[TOT][BUF]; //opening a file and storing the time table of teachers in 0 1 format. first line contains the 16 slots of :30hr each of monday. Consecutively next line contains 16 slots of tuesday.
//The 
    char buf[300];
    FILE *plist = NULL;
    int f = 0;
 
   int day;

    plist = fopen(argv[1], "r");
    while(fgets(buf, 300, plist))
    {
        strcpy(line[f],buf);
        line[f][strlen(line[f]) - 1] = '\0';
        f++;
    }

printf("Enter the day to find free slots \n0 for Monday\n1 for Tuesday\n2 for Wednesday\n3 for Thursday\n4 for Friday\n");
scanf("%d",&day);


//printf("%s",line[0]);
//printf("\n%s",line[1]);
 
 check(line[day]);


	
	return 0;
}

int check(char line[])
{

	int fslots[16];
	printf("Free Slots are:");
	//for(int j=0;j<16;j++)
	{
	//gets(line[j]);
  	//fslots[j] = atoi (line[j]);
	//printf("%d",atoi(line[j]));
	}
		
		if(line[0]=='0')
		
		{
				printf("\n09:30");
			
		}
		if(line[1]=='0')
		{
				printf("\n10:00");
			
		}
		if(line[2]=='0')
		
		{
				printf("\n10:30");
			
		}
		if(line[3]=='0')
		{
				printf("\n11:00");
			
		}
		if(line[4]=='0')
		
		{
				printf("\n11:30");
			
		}
		if(line[5]=='0')
		{
				printf("\n12:00");
			
		}

		if(line[6]=='0')
		
		{
				printf("\n12:30");
			
		}
		if(line[7]=='0')
		{
				printf("\n13:00");
			
		}
		if(line[8]=='0')
		
		{
				printf("\n13:30");
			
		}
		if(line[9]=='0')
		{
				printf("\n14:00");
			
		}
		if(line[10]=='0')
		
		{
				printf("\n14:30");
			
		}
		if(line[11]=='0')
		{
				printf("\n15:00");
			
		}
		if(line[12]=='0')
		
		{
				printf("\n15:30");
			
		}
		if(line[13]=='0')
		{
				printf("\n16:00");
			
		}
if(line[14]=='0')
		
		{
				printf("\n16:30");
			
		}
		if(line[15]=='0')
		{
				printf("\n17:00");
			
		}
		if(line[16]=='0')
		
		{
				printf("\n17:30");
			
		}

return 0;
}
