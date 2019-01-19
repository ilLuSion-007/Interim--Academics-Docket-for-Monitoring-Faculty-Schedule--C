#include <stdio.h>
#include <string.h>

#define BUF 228 
#define TOT 128

int main ()
{
	char faculty[20],saveData[20];
    printf("Pick up the faculty's relevant timetable with .txt format \n");
	scanf("\n%s",&faculty);
	//printf("%s",faculty);
	printf("Enter the file in which you want to save the data in .txt\n");
	scanf("\n%s",&saveData);
    char line[TOT][BUF];
    char buf[300];
    FILE *plist = NULL;
    int f = 0;
 
   

    plist = fopen(faculty, "r");
    while(fgets(buf, 300, plist))
    {
        strcpy(line[f],buf);
        line[f][strlen(line[f]) - 1] = '\0';
        f++;
    }

//printf("%s",line[0]);
//printf("\n%s",line[15]);
 
slots(line[15],saveData);
slots(line[19],saveData);
slots(line[23],saveData);
slots(line[27],saveData);
slots(line[31],saveData);


	
	return 0;
}


void slots(char line[],char saveData[])

{
	
freopen(saveData, "a", stdout);
int i = 0;
    char *p = strtok (line, "= ,.-");
     char *a[30];
char *f="=";
  
    while (p != NULL)
    {
        a[i++] =p;
	
        p = strtok (NULL, "= ,.-");
    }
	while(p==NULL&&i<30)
{
	a[i++]=f;
}

    for (i = 0; i < 30; ++i) 
	//printf("%d",sizeof(array)/sizeof(array[0]));
	if(strncmp(a[i],"=",1)!=0)
	{
       // printf("%s\n", a[i]);
	}

int  check[16]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
 for(int i=0;i<30;++i)
	{
	if(strncmp(a[i],"9:30",4)==0)
		{
		if(strncmp(a[i+1],"10:30",4)==0)
			{
			check[0]=1;
			check[1]=1;
			}
		else if(strncmp(a[i+1],"11:30",4)==0)
			{
			check[0]=1;
			check[1]=1;
			check[2]=1;
			check[3]=1;
			}
		}



	else if(strncmp(a[i],"10:00",4)==0)
		{
		if(strncmp(a[i+1],"11:00",4)==0)
			{
			check[1]=1;
			check[2]=1;
			}
		else if(strncmp(a[i+1],"12:00",4)==0)
			{
			check[1]=1;
			check[2]=1;
			check[3]=1;
			check[4]=1;
			}
		}

	else if(strncmp(a[i],"10:30",4)==0)
		{
		if(strncmp(a[i+1],"11:30",4)==0)
			{
			check[2]=1;
			check[3]=1;
			}
		else if(strncmp(a[i+1],"12:30",4)==0)
			{
			check[2]=1;
			check[3]=1;
			check[4]=1;
			check[5]=1;
			}
		}

	else if(strncmp(a[i],"11:00",4)==0)
		{
		if(strncmp(a[i+1],"12:00",4)==0)
			{
			check[3]=1;
			check[4]=1;
			}
		else if(strncmp(a[i+1],"13:00",4)==0)
			{
			check[3]=1;
			check[4]=1;
			check[5]=1;
			check[6]=1;
			}
		}


	else if(strncmp(a[i],"11:30",4)==0)
		{
		if(strncmp(a[i+1],"12:30",4)==0)
			{
			check[4]=1;
			check[5]=1;
			}
		else if(strncmp(a[i+1],"13:30",4)==0)
			{
			check[4]=1;
			check[5]=1;
			check[6]=1;
			check[7]=1;
			}
		}


	else if(strncmp(a[i],"12:00",4)==0)
		{
		if(strncmp(a[i+1],"13:00",4)==0)
			{
			check[5]=1;
			check[6]=1;
			}
		else if(strncmp(a[i+1],"14:00",4)==0)
			{
			check[5]=1;
			check[6]=1;
			check[7]=1;
			check[8]=1;
			}
		}
		
	
	else if(strncmp(a[i],"12:30",4)==0)
		{
		if(strncmp(a[i+1],"13:30",4)==0)
			{
			check[6]=1;
			check[7]=1;
			}
		else if(strncmp(a[i+1],"14:30",4)==0)
			{
			check[6]=1;
			check[7]=1;
			check[8]=1;
			check[9]=1;
			}
		}


	else if(strncmp(a[i],"13:00",4)==0)
		{
		if(strncmp(a[i+1],"14:00",4)==0)
			{
			check[7]=1;
			check[8]=1;
			}
		else if(strncmp(a[i+1],"15:00",4)==0)
			{
			check[7]=1;
			check[8]=1;
			check[9]=1;
			check[10]=1;
			}
		}


	else if(strncmp(a[i],"13:30",4)==0)
		{
		if(strncmp(a[i+1],"14:30",4)==0)
			{
			check[8]=1;
			check[9]=1;
			}
		else if(strncmp(a[i+1],"15:30",4)==0)
			{
			check[8]=1;
			check[9]=1;
			check[10]=1;
			check[11]=1;
			}
		}

	else if(strncmp(a[i],"14:00",4)==0)
		{
		if(strncmp(a[i+1],"15:00",4)==0)
			{
			check[9]=1;
			check[10]=1;
			}
		else if(strncmp(a[i+1],"16:00",4)==0)
			{
			check[9]=1;
			check[10]=1;
			check[11]=1;
			check[12]=1;
			}
		}

	else if(strncmp(a[i],"14:30",4)==0)
		{
		if(strncmp(a[i+1],"15:30",4)==0)
			{
			check[10]=1;
			check[11]=1;
			}
		else if(strncmp(a[i+1],"16:30",4)==0)
			{
			check[10]=1;
			check[11]=1;
			check[12]=1;
			check[13]=1;
			}
		}


	else if(strncmp(a[i],"15:00",4)==0)
		{
		if(strncmp(a[i+1],"16:00",4)==0)
			{
			check[11]=1;
			check[12]=1;
			}
		else if(strncmp(a[i+1],"17:00",4)==0)
			{
			check[11]=1;
			check[12]=1;
			check[13]=1;
			check[14]=1;
			}
		}


	else if(strncmp(a[i],"15:30",4)==0)
		{
		if(strncmp(a[i+1],"16:30",4)==0)
			{
			check[12]=1;
			check[13]=1;
			}
		else if(strncmp(a[i+1],"17:30",4)==0)
			{
			check[12]=1;
			check[13]=1;
			check[14]=1;
			check[15]=1;
			}
		}


	else if(strncmp(a[i],"16:00",4)==0)
		{
		if(strncmp(a[i+1],"17:00",4)==0)
			{
			check[13]=1;
			check[14]=1;
			}
		
		}

	else if(strncmp(a[i],"16:30",4)==0)
		{
		if(strncmp(a[i+1],"17:30",4)==0)
			{
			check[14]=1;
			check[15]=1;
			}
		}
	}
	for(int i=0;i<(sizeof(check)/sizeof(check[0]));i++)
	{
	printf("%d",check[i]);
	}	 	
	printf("\n");

	//check diyan 16 values ne for each day


    
}

