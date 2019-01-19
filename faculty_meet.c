#include <stdio.h>
#include <string.h>
#include<stdlib.h>

#define BUF 228 
#define TOT 128


int main (int argc, char **argv)
{

    	char line[TOT][BUF]; 
	char line2[TOT][BUF];
	char line3[TOT][BUF]; 
	char line4[TOT][BUF];
	char line5[TOT][BUF]; 
	char line6[TOT][BUF];
	char line7[TOT][BUF]; 
	char line8[TOT][BUF];
	char line9[TOT][BUF]; 
	char line10[TOT][BUF];
	
	
	
    		char buf[300],buf2[300],buf3[300],buf4[300],buf5[300],buf6[300],buf7[300],buf8[300],buf9[300],buf10[300];
    		FILE *plist = NULL;FILE *plist2=NULL;FILE *plist3=NULL;FILE *plist4=NULL;FILE *plist5=NULL;FILE *plist6=NULL;FILE *plist7=NULL;FILE *plist8=NULL;FILE *plist9=NULL;FILE *plist10=NULL;
   		int f,f2,f3,f4,f5,f6,f7,f8,f9,f10;//to count lines from the text files
		f=f2=f3=f4=f5=f6=f7=f8=f9=f10=0;
		
		
 		const char *faculty[2]={argv[1],argv[2],argv[3],argv[4],argv[5],argv[6]};
   int day,time,i;

	int i1,i2,i3,i4,i5,i6,i7,i8,i9,i10;//for getting faculty number for intervening time

   


	printf("Schedule Faculty meetup\n");
	

	

	switch(2)
	{
	


	case 2:
				
		printf("\nEnter the Number of Faculties for the meetup(At max 10)\n");
		scanf("%d",&i);
		printf("\nSelect the faculty Name:\n0. Alind \n1.Vishal Kaushik");
		

		


	switch(i)
	{
	case 2:
		

		 

		
		
		//scanf("\n%d",&fname);
		
		
		scanf("%d",&i1);
		scanf("%d",&i2);

		printf("Enter the day to find free slots \n0 for Monday\n1 for Tuesday\n2 for Wednesday\n3 for Thursday\n4 for Friday\n");
		scanf("%d",&day);

		
 
   		
/////////////////////////////////////////////////////////
    		plist = fopen(faculty[i1], "r");
   		while(fgets(buf, 300, plist))
    		{
        		strcpy(line[f],buf);
        		line[f][strlen(line[f]) - 1] = '\0';
       			f++;
    		}
		plist2=fopen(faculty[i2],"r");
		while(fgets(buf2, 300, plist2))
    		{
        		strcpy(line2[f2],buf2);
        		line2[f2][strlen(line2[f2]) - 1] = '\0';
       			f2++;
    		}

 	
		check2(line[day],line2[day]);

	break;//end of comparison between two faculty

///////////////////////////////////////////////////////////////////
///////////////////////////
//////////////////////
////////////////
	case 3:
		scanf("%d",&i1);
		scanf("%d",&i2);
		scanf("%d",&i3);

		printf("Enter the day to find free slots \n0 for Monday\n1 for Tuesday\n2 for Wednesday\n3 for Thursday\n4 for Friday\n");
		scanf("%d",&day);

		
 
   		
/////////////////////////////////////////////////////////
    		plist = fopen(faculty[i1], "r");
   		while(fgets(buf, 300, plist))
    		{
        		strcpy(line[f],buf);
        		line[f][strlen(line[f]) - 1] = '\0';
       			f++;
    		}

f=0;
		plist2=fopen(faculty[i2],"r");
		while(fgets(buf2, 300, plist2))
    		{
        		strcpy(line2[f],buf2);
        		line2[f2][strlen(line2[f]) - 1] = '\0';
       			f++;
    		}
		f=0;
		//printf("\n%ddskljfsdlkfj",f);
		plist3=fopen("p.txt","r");
		while(fgets(buf3, 300, plist3))
    		{
        		strcpy(line3[f2],buf3);
        		line3[f2][strlen(line3[f2]) - 1] = '\0';
       			f2++;
    		}

 	
		check3(line[day],line2[day],line3[day]);
		
	break;//Comparison 3 Faculty

	case 4:scanf("%d",&i1);
		scanf("%d",&i2);
		scanf("%d",&i3);
		scanf("%d",&i4);

		printf("Enter the day to find free slots \n0 for Monday\n1 for Tuesday\n2 for Wednesday\n3 for Thursday\n4 for Friday\n");
		scanf("%d",&day);

		
 
   		
/////////////////////////////////////////////////////////
    		plist = fopen(faculty[i1], "r");
   		while(fgets(buf, 300, plist))
    		{
        		strcpy(line[f],buf);
        		line[f][strlen(line[f]) - 1] = '\0';
       			f++;
    		}

f=0;

		plist2=fopen(faculty[i2],"r");
		while(fgets(buf2, 300, plist2))
    		{
        		strcpy(line2[f],buf2);
        		line2[f2][strlen(line2[f]) - 1] = '\0';
       			f++;
    		}
		
		f=0;
		
		
		plist3=fopen("p.txt","r");
		while(fgets(buf3, 300, plist3))
    		{
        		strcpy(line3[f2],buf3);
        		line3[f2][strlen(line3[f2]) - 1] = '\0';
       			f2++;
    		}
		f2=0;
	

		plist4=fopen("p.txt","r");
		while(fgets(buf4, 300, plist4))
    		{
        		strcpy(line4[f2],buf4);
        		line4[f2][strlen(line4[f2]) - 1] = '\0';
       			f2++;
    		}
		f2=0;



 	
		check4(line[day],line2[day],line3[day],line4[day]);
		
	break;//Comparison 4 Faculty

	case 5:scanf("%d",&i1);
		scanf("%d",&i2);
		scanf("%d",&i3);
		scanf("%d",&i4);
		scanf("%d",&i5);

		printf("Enter the day to find free slots \n0 for Monday\n1 for Tuesday\n2 for Wednesday\n3 for Thursday\n4 for Friday\n");
		scanf("%d",&day);

		
 
   		
/////////////////////////////////////////////////////////
    		plist = fopen(faculty[i1], "r");
   		while(fgets(buf, 300, plist))
    		{
        		strcpy(line[f],buf);
        		line[f][strlen(line[f]) - 1] = '\0';
       			f++;
    		}

f=0;

		plist2=fopen(faculty[i2],"r");
		while(fgets(buf2, 300, plist2))
    		{
        		strcpy(line2[f],buf2);
        		line2[f2][strlen(line2[f]) - 1] = '\0';
       			f++;
    		}
		
		f=0;
		
		
		plist3=fopen("p.txt","r");
		while(fgets(buf3, 300, plist3))
    		{
        		strcpy(line3[f2],buf3);
        		line3[f2][strlen(line3[f2]) - 1] = '\0';
       			f2++;
    		}
		f2=0;
	

		plist4=fopen("p.txt","r");
		while(fgets(buf4, 300, plist4))
    		{
        		strcpy(line4[f2],buf4);
        		line4[f2][strlen(line4[f2]) - 1] = '\0';
       			f2++;
    		}
		f2=0;
	

		plist5=fopen("p.txt","r");
		while(fgets(buf5, 300, plist5))
    		{
        		strcpy(line5[f2],buf5);
        		line5[f2][strlen(line5[f2]) - 1] = '\0';
       			f2++;
    		}
		f2=0;
		



 	
		check5(line[day],line2[day],line3[day],line4[day],line5[day]);
		
	break;//Comparison 5 Faculty

	

	case 6:scanf("%d",&i1);
		scanf("%d",&i2);
		scanf("%d",&i3);
		scanf("%d",&i4);
		scanf("%d",&i5);
		scanf("%d",&i6);

		printf("Enter the day to find free slots \n0 for Monday\n1 for Tuesday\n2 for Wednesday\n3 for Thursday\n4 for Friday\n");
		scanf("%d",&day);

		
 
   		
/////////////////////////////////////////////////////////
    		plist = fopen(faculty[i1], "r");
   		while(fgets(buf, 300, plist))
    		{
        		strcpy(line[f],buf);
        		line[f][strlen(line[f]) - 1] = '\0';
       			f++;
    		}

f=0;

		plist2=fopen(faculty[i2],"r");
		while(fgets(buf2, 300, plist2))
    		{
        		strcpy(line2[f],buf2);
        		line2[f2][strlen(line2[f]) - 1] = '\0';
       			f++;
    		}
		
		f=0;
		
		
		plist3=fopen(faculty[i3],"r");
		while(fgets(buf3, 300, plist3))
    		{
        		strcpy(line3[f2],buf3);
        		line3[f2][strlen(line3[f2]) - 1] = '\0';
       			f2++;
    		}
		f2=0;
	

		plist4=fopen(faculty[i4],"r");
		while(fgets(buf4, 300, plist4))
    		{
        		strcpy(line4[f2],buf4);
        		line4[f2][strlen(line4[f2]) - 1] = '\0';
       			f2++;
    		}
		f2=0;
	

		plist5=fopen(faculty[i5],"r");
		while(fgets(buf5, 300, plist5))
    		{
        		strcpy(line5[f2],buf5);
        		line5[f2][strlen(line5[f2]) - 1] = '\0';
       			f2++;
    		}
		f2=0;
		

		plist6=fopen(faculty[i6],"r");
		while(fgets(buf6, 300, plist6))
    		{
        		strcpy(line6[f2],buf6);
        		line6[f2][strlen(line6[f2]) - 1] = '\0';
       			f2++;
    		}
		f2=0;
		



 	
		check6(line[day],line2[day],line3[day],line4[day],line5[day],line6[day]);
		
	break;//Comparison 6 Faculty


	case 7:scanf("%d",&i1);
		scanf("%d",&i2);
		scanf("%d",&i3);
		scanf("%d",&i4);
		scanf("%d",&i5);
		scanf("%d",&i6);
		scanf("%d",&i7);

		printf("Enter the day to find free slots \n0 for Monday\n1 for Tuesday\n2 for Wednesday\n3 for Thursday\n4 for Friday\n");
		scanf("%d",&day);

		
 
   		
/////////////////////////////////////////////////////////
    		plist = fopen(faculty[i1], "r");
   		while(fgets(buf, 300, plist))
    		{
        		strcpy(line[f],buf);
        		line[f][strlen(line[f]) - 1] = '\0';
       			f++;
    		}

f=0;

		plist2=fopen(faculty[i2],"r");
		while(fgets(buf2, 300, plist2))
    		{
        		strcpy(line2[f],buf2);
        		line2[f2][strlen(line2[f]) - 1] = '\0';
       			f++;
    		}
		
		f=0;
		
		
		plist3=fopen(faculty[i3],"r");
		while(fgets(buf3, 300, plist3))
    		{
        		strcpy(line3[f2],buf3);
        		line3[f2][strlen(line3[f2]) - 1] = '\0';
       			f2++;
    		}
		f2=0;
	

		plist4=fopen(faculty[i4],"r");
		while(fgets(buf4, 300, plist4))
    		{
        		strcpy(line4[f2],buf4);
        		line4[f2][strlen(line4[f2]) - 1] = '\0';
       			f2++;
    		}
		f2=0;
	

		plist5=fopen(faculty[i5],"r");
		while(fgets(buf5, 300, plist5))
    		{
        		strcpy(line5[f2],buf5);
        		line5[f2][strlen(line5[f2]) - 1] = '\0';
       			f2++;
    		}
		f2=0;
		

		plist6=fopen(faculty[i6],"r");
		while(fgets(buf6, 300, plist6))
    		{
        		strcpy(line6[f2],buf6);
        		line6[f2][strlen(line6[f2]) - 1] = '\0';
       			f2++;
    		}
		f2=0;

		plist7=fopen(faculty[i7],"r");
		while(fgets(buf7, 300, plist7))
    		{
        		strcpy(line7[f2],buf7);
        		line7[f2][strlen(line7[f2]) - 1] = '\0';
       			f2++;
    		}
		f2=0;
		



 	
		check7(line[day],line2[day],line3[day],line4[day],line5[day],line6[day],line7[day]);
		
	break;//Comparison 7 Faculty
	


	case 8:scanf("%d",&i1);
		scanf("%d",&i2);
		scanf("%d",&i3);
		scanf("%d",&i4);
		scanf("%d",&i5);
		scanf("%d",&i6);
		scanf("%d",&i7);
		scanf("%d",&i8);

		printf("Enter the day to find free slots \n0 for Monday\n1 for Tuesday\n2 for Wednesday\n3 for Thursday\n4 for Friday\n");
		scanf("%d",&day);

		
 
   		
/////////////////////////////////////////////////////////
    		plist = fopen(faculty[i1], "r");
   		while(fgets(buf, 300, plist))
    		{
        		strcpy(line[f],buf);
        		line[f][strlen(line[f]) - 1] = '\0';
       			f++;
    		}

f=0;

		plist2=fopen(faculty[i2],"r");
		while(fgets(buf2, 300, plist2))
    		{
        		strcpy(line2[f],buf2);
        		line2[f2][strlen(line2[f]) - 1] = '\0';
       			f++;
    		}
		
		f=0;
		
		
		plist3=fopen(faculty[i3],"r");
		while(fgets(buf3, 300, plist3))
    		{
        		strcpy(line3[f2],buf3);
        		line3[f2][strlen(line3[f2]) - 1] = '\0';
       			f2++;
    		}
		f2=0;
	

		plist4=fopen(faculty[i4],"r");
		while(fgets(buf4, 300, plist4))
    		{
        		strcpy(line4[f2],buf4);
        		line4[f2][strlen(line4[f2]) - 1] = '\0';
       			f2++;
    		}
		f2=0;
	

		plist5=fopen(faculty[i5],"r");
		while(fgets(buf5, 300, plist5))
    		{
        		strcpy(line5[f2],buf5);
        		line5[f2][strlen(line5[f2]) - 1] = '\0';
       			f2++;
    		}
		f2=0;
		

		plist6=fopen(faculty[i6],"r");
		while(fgets(buf6, 300, plist6))
    		{
        		strcpy(line6[f2],buf6);
        		line6[f2][strlen(line6[f2]) - 1] = '\0';
       			f2++;
    		}
		f2=0;

		plist7=fopen(faculty[i7],"r");
		while(fgets(buf7, 300, plist7))
    		{
        		strcpy(line7[f2],buf7);
        		line7[f2][strlen(line7[f2]) - 1] = '\0';
       			f2++;
    		}
		f2=0;

		plist8=fopen(faculty[i8],"r");
		while(fgets(buf8, 300, plist8))
    		{
        		strcpy(line8[f2],buf8);
        		line8[f2][strlen(line8[f2]) - 1] = '\0';
       			f2++;
    		}
		f2=0;
		



 	
		check8(line[day],line2[day],line3[day],line4[day],line5[day],line6[day],line7[day],line8[day]);
		
	break;//Comparison 8 Faculty

	case 9:scanf("%d",&i1);
		scanf("%d",&i2);
		scanf("%d",&i3);
		scanf("%d",&i4);
		scanf("%d",&i5);
		scanf("%d",&i6);
		scanf("%d",&i7);
		scanf("%d",&i8);
		scanf("%d",&i9);

		printf("Enter the day to find free slots \n0 for Monday\n1 for Tuesday\n2 for Wednesday\n3 for Thursday\n4 for Friday\n");
		scanf("%d",&day);

		
 
   		
/////////////////////////////////////////////////////////
    		plist = fopen(faculty[i1], "r");
   		while(fgets(buf, 300, plist))
    		{
        		strcpy(line[f],buf);
        		line[f][strlen(line[f]) - 1] = '\0';
       			f++;
    		}

f=0;

		plist2=fopen(faculty[i2],"r");
		while(fgets(buf2, 300, plist2))
    		{
        		strcpy(line2[f],buf2);
        		line2[f2][strlen(line2[f]) - 1] = '\0';
       			f++;
    		}
		
		f=0;
		
		
		plist3=fopen(faculty[i3],"r");
		while(fgets(buf3, 300, plist3))
    		{
        		strcpy(line3[f2],buf3);
        		line3[f2][strlen(line3[f2]) - 1] = '\0';
       			f2++;
    		}
		f2=0;
	

		plist4=fopen(faculty[i4],"r");
		while(fgets(buf4, 300, plist4))
    		{
        		strcpy(line4[f2],buf4);
        		line4[f2][strlen(line4[f2]) - 1] = '\0';
       			f2++;
    		}
		f2=0;
	

		plist5=fopen(faculty[i5],"r");
		while(fgets(buf5, 300, plist5))
    		{
        		strcpy(line5[f2],buf5);
        		line5[f2][strlen(line5[f2]) - 1] = '\0';
       			f2++;
    		}
		f2=0;
		

		plist6=fopen(faculty[i6],"r");
		while(fgets(buf6, 300, plist6))
    		{
        		strcpy(line6[f2],buf6);
        		line6[f2][strlen(line6[f2]) - 1] = '\0';
       			f2++;
    		}
		f2=0;

		plist7=fopen(faculty[i7],"r");
		while(fgets(buf7, 300, plist7))
    		{
        		strcpy(line7[f2],buf7);
        		line7[f2][strlen(line7[f2]) - 1] = '\0';
       			f2++;
    		}
		f2=0;

		plist8=fopen(faculty[i8],"r");
		while(fgets(buf8, 300, plist8))
    		{
        		strcpy(line8[f2],buf8);
        		line8[f2][strlen(line8[f2]) - 1] = '\0';
       			f2++;
    		}
		f2=0;

		plist9=fopen(faculty[i9],"r");
		while(fgets(buf9, 300, plist9))
    		{
        		strcpy(line9[f2],buf9);
        		line9[f2][strlen(line9[f2]) - 1] = '\0';
       			f2++;
    		}
		f2=0;
		



 	
		check9(line[day],line2[day],line3[day],line4[day],line5[day],line6[day],line7[day],line8[day],line9[day]);
		
	break;//Comparison 9 Faculty

	case 10://printf("\nSelect the faculty Name:\n0. Alind \n1.Vishal Kaushik");
		scanf("%d",&i1);
		scanf("%d",&i2);
		scanf("%d",&i3);
		scanf("%d",&i4);
		scanf("%d",&i5);
		scanf("%d",&i6);
		scanf("%d",&i7);
		scanf("%d",&i8);
		scanf("%d",&i9);
		scanf("%d",&i9);

		printf("Enter the day to find free slots \n0 for Monday\n1 for Tuesday\n2 for Wednesday\n3 for Thursday\n4 for Friday\n");
		scanf("%d",&day);

		
 
   		
/////////////////////////////////////////////////////////
    		plist = fopen(faculty[i1], "r");
   		while(fgets(buf, 300, plist))
    		{
        		strcpy(line[f],buf);
        		line[f][strlen(line[f]) - 1] = '\0';
       			f++;
    		}

f=0;

		plist2=fopen(faculty[i2],"r");
		while(fgets(buf2, 300, plist2))
    		{
        		strcpy(line2[f],buf2);
        		line2[f2][strlen(line2[f]) - 1] = '\0';
       			f++;
    		}
		
		f=0;
		
		
		plist3=fopen(faculty[i3],"r");
		while(fgets(buf3, 300, plist3))
    		{
        		strcpy(line3[f2],buf3);
        		line3[f2][strlen(line3[f2]) - 1] = '\0';
       			f2++;
    		}
		f2=0;
	

		plist4=fopen(faculty[i4],"r");
		while(fgets(buf4, 300, plist4))
    		{
        		strcpy(line4[f2],buf4);
        		line4[f2][strlen(line4[f2]) - 1] = '\0';
       			f2++;
    		}
		f2=0;
	

		plist5=fopen(faculty[i5],"r");
		while(fgets(buf5, 300, plist5))
    		{
        		strcpy(line5[f2],buf5);
        		line5[f2][strlen(line5[f2]) - 1] = '\0';
       			f2++;
    		}
		f2=0;
		

		plist6=fopen(faculty[i6],"r");
		while(fgets(buf6, 300, plist6))
    		{
        		strcpy(line6[f2],buf6);
        		line6[f2][strlen(line6[f2]) - 1] = '\0';
       			f2++;
    		}
		f2=0;

		plist7=fopen(faculty[i7],"r");
		while(fgets(buf7, 300, plist7))
    		{
        		strcpy(line7[f2],buf7);
        		line7[f2][strlen(line7[f2]) - 1] = '\0';
       			f2++;
    		}
		f2=0;

		plist8=fopen(faculty[i8],"r");
		while(fgets(buf8, 300, plist8))
    		{
        		strcpy(line8[f2],buf8);
        		line8[f2][strlen(line8[f2]) - 1] = '\0';
       			f2++;
    		}
		f2=0;

		plist9=fopen(faculty[i9],"r");
		while(fgets(buf9, 300, plist9))
    		{
        		strcpy(line9[f2],buf9);
        		line9[f2][strlen(line9[f2]) - 1] = '\0';
       			f2++;
    		}
		f2=0;

		plist10=fopen(faculty[i10],"r");
		while(fgets(buf10, 300, plist10))
    		{
        		strcpy(line10[f2],buf10);
        		line10[f2][strlen(line10[f2]) - 1] = '\0';
       			f2++;
    		}
		f2=0;
		



 	
		check9(line[day],line2[day],line3[day],line4[day],line5[day],line6[day],line7[day],line8[day],line9[day]);
		
	break;//Comparison 10 Faculty
	
}

	break;

}	return 0;
}

/////////////////////////////////////////
////////////////////////////////////////
/*Checks for free slots of the faculty*/
///////////////////////////////////////
///////////////////////////////////////

void check(char line[])
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
		
}

/////////////////////////////////////////
////////////////////////////////////////
/*Checks for common free slots of 2 faculty*/
///////////////////////////////////////
///////////////////////////////////////

void check2(char line[], char line2[])
{
	int fslots[16];
	printf("Common Free Slots are:");
	//for(int j=0;j<16;j++)
	{
	//gets(line[j]);
  	//fslots[j] = atoi (line[j]);
	//printf("%d",atoi(line[j]));
	}
		
		if(line[0]=='0'&&line2[0]=='0')
		
		{
				printf("\n09:30");
			
		}
		if(line[1]=='0'&&line2[1]=='0')
		{
				printf("\n10:00");
			
		}
		if(line[2]=='0'&&line2[2]=='0')
		
		{
				printf("\n10:30");
			
		}
		if(line[3]=='0'&&line2[3]=='0')
		{
				printf("\n11:00");
			
		}
		if(line[4]=='0'&&line2[4]=='0')
		
		{
				printf("\n11:30");
			
		}
		if(line[5]=='0'&&line2[5]=='0')
		{
				printf("\n12:00");
			
		}

		if(line[6]=='0'&&line2[6]=='0')
		
		{
				printf("\n12:30");
			
		}
		if(line[7]=='0'&&line2[7]=='0')
		{
				printf("\n13:00");
			
		}
		if(line[8]=='0'&&line2[8]=='0')
		
		{
				printf("\n13:30");
			
		}
		if(line[9]=='0'&&line2[9]=='0')
		{
				printf("\n14:00");
			
		}
		if(line[10]=='0'&&line2[10]=='0')
		
		{
				printf("\n14:30");
			
		}
		if(line[11]=='0'&&line2[11]=='0')
		{
				printf("\n15:00");
			
		}
		if(line[12]=='0'&&line2[12]=='0')
		
		{
				printf("\n15:30");
			
		}
		if(line[13]=='0'&&line2[13]=='0')
		{
				printf("\n16:00");
			
		}
		if(line[14]=='0'&&line2[14]=='0')
		
		{
				printf("\n16:30");
			
		}
		if(line[15]=='0'&&line2[15]=='0')
		{
				printf("\n17:00");
			
		}
		if(line[16]=='0')
		
		{
				printf("\n17:30");
			
		}
		
}



/////////////////////////////////////////
////////////////////////////////////////
/*Checks for common free slots of 3 faculty*/
///////////////////////////////////////
///////////////////////////////////////

void check3(char line[], char line2[],char line3[])
{
	int fslots[16];
	printf("Free Slots are:");
	
		
		if(line[0]=='0'&&line2[0]=='0'&&line3[0]=='0')
		
		{
				printf("\n09:30");
			
		}
		if(line[1]=='0'&&line2[1]=='0'&&line3[1]=='0')
		{
				printf("\n10:00");
			
		}
		if(line[2]=='0'&&line2[2]=='0'&&line3[2]=='0')
		
		{
				printf("\n10:30");
			
		}
		if(line[3]=='0'&&line2[3]=='0'&&line3[3]=='0')
		{
				printf("\n11:00");
			
		}
		if(line[4]=='0'&&line2[4]=='0'&&line3[4]=='0')
		
		{
				printf("\n11:30");
			
		}
		if(line[5]=='0'&&line2[5]=='0'&&line3[5]=='0')
		{
				printf("\n12:00");
			
		}

		if(line[6]=='0'&&line2[6]=='0'&&line3[6]=='0')
		
		{
				printf("\n12:30");
			
		}
		if(line[7]=='0'&&line2[7]=='0'&&line3[7]=='0')
		{
				printf("\n13:00");
			
		}
		if(line[8]=='0'&&line2[8]=='0'&&line3[8]=='0')
		
		{
				printf("\n13:30");
			
		}
		if(line[9]=='0'&&line2[9]=='0'&&line3[8]=='0')
		{
				printf("\n14:00");
			
		}
		if(line[10]=='0'&&line2[8]=='0'&&line3[5]=='0')
		
		{
				printf("\n14:30");
			
		}
		if(line[11]=='0'&&line2[11]=='0'&&line3[11]=='0')
		{
				printf("\n15:00");
			
		}
		if(line[12]=='0'&&line2[12]=='0'&&line3[12]=='0')
		
		{
				printf("\n15:30");
			
		}
		if(line[13]=='0'&&line2[13]=='0'&&line3[13]=='0')
		{
				printf("\n16:00");
			
		}
		if(line[14]=='0'&&line2[14]=='0'&&line3[14]=='0')
		
		{
				printf("\n16:30");
			
		}
		if(line[15]=='0'&&line2[15]=='0'&&line3[15]=='0')
		{
				printf("\n17:00");
			
		}
		if(line[16]=='0'&&line2[16]=='0'&&line3[16]=='0')
		
		{
				printf("\n17:30");
			
		}
		
}



void check4(char line[], char line2[],char line3[],char line4[])
{
	int fslots[16];
	printf("Free Slots are:");


		if(line[0]=='0'&&line2[0]=='0'&&line3[0]=='0'&&line4[0]=='0')

		{
				printf("\n09:30");

		}
		if(line[1]=='0'&&line2[1]=='0'&&line3[1]=='0'&&line4[1]=='0')
		{
				printf("\n10:00");

		}
		if(line[2]=='0'&&line2[2]=='0'&&line3[2]=='0' &&line4[2]=='0')

		{
				printf("\n10:30");

		}
		if(line[3]=='0'&&line2[3]=='0'&&line3[3]=='0' &&line4[3]=='0')
		{
				printf("\n11:00");

		}
		if(line[4]=='0'&&line2[4]=='0'&&line3[4]=='0' &&line4[4]=='0')

		{
				printf("\n11:30");

		}
		if(line[5]=='0'&&line2[5]=='0'&&line3[5]=='0' &&line4[5]=='0')
		{
				printf("\n12:00");

		}

		if(line[6]=='0'&&line2[6]=='0'&&line3[6]=='0' &&line4[6]=='0')

		{
				printf("\n12:30");

		}
		if(line[7]=='0'&&line2[7]=='0'&&line3[7]=='0' &&line4[7]=='0')
		{
				printf("\n13:00");

		}
		if(line[8]=='0'&&line2[8]=='0'&&line3[8]=='0' &&line4[8]=='0')

		{
				printf("\n13:30");

		}
		if(line[9]=='0'&&line2[9]=='0'&&line3[8]=='0' &&line4[8]=='0')
		{
				printf("\n14:00");

		}
		if(line[10]=='0'&&line2[8]=='0'&&line3[5]=='0' &&line4[5]=='0')

		{
				printf("\n14:30");

		}
		if(line[11]=='0'&&line2[11]=='0'&&line3[11]=='0' &&line4[11]=='0')
		{
				printf("\n15:00");

		}
		if(line[12]=='0'&&line2[12]=='0'&&line3[12]=='0' &&line4[12]=='0')

		{
				printf("\n15:30");

		}
		if(line[13]=='0'&&line2[13]=='0'&&line3[13]=='0' &&line4[13]=='0')
		{
				printf("\n16:00");

		}
		if(line[14]=='0'&&line2[14]=='0'&&line3[14]=='0' &&line4[14]=='0')

		{
				printf("\n16:30");

		}
		if(line[15]=='0'&&line2[15]=='0'&&line3[15]=='0' &&line4[15]=='0')
		{
				printf("\n17:00");

		}
		if(line[16]=='0'&&line2[16]=='0'&&line3[16]=='0' &&line4[16]=='0')

		{
				printf("\n17:30");

		}

}


void check5(char line[], char line2[],char line3[],char line4[],char line5[])
{
	int fslots[16];
	printf("Free Slots are:");


		if(line[0]=='0'&&line2[0]=='0'&&line3[0]=='0'&&line4[0]=='0'&&line5[0]=='0')

		{
				printf("\n09:30");

		}
		if(line[1]=='0'&&line2[1]=='0'&&line3[1]=='0'&&line4[1]=='0'&&line5[1]=='0')
		{
				printf("\n10:00");

		}
		if(line[2]=='0'&&line2[2]=='0'&&line3[2]=='0'&&line4[2]=='0' &&line5[2]=='0')

		{
				printf("\n10:30");

		}
		if(line[3]=='0'&&line2[3]=='0'&&line3[3]=='0' &&line4[3]=='0' &&line5[3]=='0')
		{
				printf("\n11:00");

		}
		if(line[4]=='0'&&line2[4]=='0'&&line3[4]=='0' &&line4[4]=='0' &&line5[4]=='0')

		{
				printf("\n11:30");

		}
		if(line[5]=='0'&&line2[5]=='0'&&line3[5]=='0' &&line4[5]=='0' &&line5[5]=='0')
		{
				printf("\n12:00");

		}

		if(line[6]=='0'&&line2[6]=='0'&&line3[6]=='0' &&line4[6]=='0' &&line5[6]=='0')

		{
				printf("\n12:30");

		}
		if(line[7]=='0'&&line2[7]=='0'&&line3[7]=='0' &&line4[7]=='0' &&line5[7]=='0')
		{
				printf("\n13:00");

		}
		if(line[8]=='0'&&line2[8]=='0'&&line3[8]=='0' &&line4[8]=='0' &&line5[8]=='0')

		{
				printf("\n13:30");

		}
		if(line[9]=='0'&&line2[9]=='0'&&line3[8]=='0' &&line4[8]=='0' &&line5[8]=='0')
		{
				printf("\n14:00");

		}
		if(line[10]=='0'&&line2[8]=='0'&&line3[5]=='0' &&line4[5]=='0' &&line5[5]=='0')

		{
				printf("\n14:30");

		}
		if(line[11]=='0'&&line2[11]=='0'&&line3[11]=='0' &&line4[11]=='0' &&line5[11]=='0')
		{
				printf("\n15:00");

		}
		if(line[12]=='0'&&line2[12]=='0'&&line3[12]=='0' &&line4[12]=='0' &&line5[12]=='0')

		{
				printf("\n15:30");

		}
		if(line[13]=='0'&&line2[13]=='0'&&line3[13]=='0' &&line4[13]=='0' &&line5[13]=='0')
		{
				printf("\n16:00");

		}
		if(line[14]=='0'&&line2[14]=='0'&&line3[14]=='0' &&line4[14]=='0' &&line5[14]=='0')

		{
				printf("\n16:30");

		}
		if(line[15]=='0'&&line2[15]=='0'&&line3[15]=='0' &&line4[15]=='0' &&line5[15]=='0')
		{
				printf("\n17:00");

		}
		if(line[16]=='0'&&line2[16]=='0'&&line3[16]=='0' &&line4[16]=='0' &&line5[16]=='0')

		{
				printf("\n17:30");

		}

}

void check6(char line[], char line2[],char line3[],char line4[],char line5[],char line6[])
{
	int fslots[16];
	printf("Free Slots are:");


		if(line[0]=='0'&&line2[0]=='0'&&line3[0]=='0'&&line4[0]=='0' &&line5[0]=='0' &&line6[0]=='0')

		{
				printf("\n09:30");

		}
		if(line[1]=='0'&&line2[1]=='0'&&line3[1]=='0'&&line4[1]=='0' &&line5[1]=='0' &&line6[1]=='0')
		{
				printf("\n10:00");

		}
		if(line[2]=='0'&&line2[2]=='0'&&line3[2]=='0' &&line4[2]=='0' &&line5[2]=='0' &&line6[2]=='0')

		{
				printf("\n10:30");

		}
		if(line[3]=='0'&&line2[3]=='0'&&line3[3]=='0' &&line4[3]=='0' &&line5[3]=='0' &&line6[3]=='0')
		{
				printf("\n11:00");

		}
		if(line[4]=='0'&&line2[4]=='0'&&line3[4]=='0' &&line4[4]=='0' &&line5[4]=='0' &&line6[4]=='0' )

		{
				printf("\n11:30");

		}
		if(line[5]=='0'&&line2[5]=='0'&&line3[5]=='0' &&line4[5]=='0' &&line5[5]=='0' &&line6[5]=='0' )
		{
				printf("\n12:00");

		}

		if(line[6]=='0'&&line2[6]=='0'&&line3[6]=='0' &&line4[6]=='0' &&line5[6]=='0' &&line6[6]=='0' )

		{
				printf("\n12:30");

		}
		if(line[7]=='0'&&line2[7]=='0'&&line3[7]=='0' &&line4[7]=='0' &&line5[7]=='0' &&line6[7]=='0' )
		{
				printf("\n13:00");

		}
		if(line[8]=='0'&&line2[8]=='0'&&line3[8]=='0' &&line4[8]=='0' &&line5[8]=='0' &&line6[8]=='0' )

		{
				printf("\n13:30");

		}
		if(line[9]=='0'&&line2[9]=='0'&&line3[8]=='0' &&line4[8]=='0' &&line5[8]=='0' &&line6[8]=='0' )
		{
				printf("\n14:00");

		}
		if(line[10]=='0'&&line2[8]=='0'&&line3[5]=='0' &&line4[5]=='0' &&line5[5]=='0' &&line6[5]=='0' )

		{
				printf("\n14:30");

		}
		if(line[11]=='0'&&line2[11]=='0'&&line3[11]=='0' &&line4[11]=='0' &&line5[11]=='0' &&line6[11]=='0' )
		{
				printf("\n15:00");

		}
		if(line[12]=='0'&&line2[12]=='0'&&line3[12]=='0' &&line4[12]=='0' &&line5[12]=='0' &&line6[12]=='0' )

		{
				printf("\n15:30");

		}
		if(line[13]=='0'&&line2[13]=='0'&&line3[13]=='0' &&line4[13]=='0' &&line5[13]=='0' &&line6[13]=='0' )
		{
				printf("\n16:00");

		}
		if(line[14]=='0'&&line2[14]=='0'&&line3[14]=='0' &&line4[14]=='0' &&line5[14]=='0' &&line6[14]=='0' )

		{
				printf("\n16:30");

		}
		if(line[15]=='0'&&line2[15]=='0'&&line3[15]=='0' &&line4[15]=='0' &&line5[15]=='0' &&line6[15]=='0' )
		{
				printf("\n17:00");

		}
		if(line[16]=='0'&&line2[16]=='0'&&line3[16]=='0' &&line4[16]=='0' &&line5[16]=='0' &&line6[16]=='0' )

		{
				printf("\n17:30");

		}

}

void check7(char line[], char line2[],char line3[],char line4[],char line5[],char line6[],char line7[])
{
	int fslots[16];
	printf("Free Slots are:");


		if(line[0]=='0'&&line2[0]=='0'&&line3[0]=='0'&&line4[0]=='0' &&line5[0]=='0' &&line6[0]=='0' &&line7[0]=='0')

		{
				printf("\n09:30");

		}
		if(line[1]=='0'&&line2[1]=='0'&&line3[1]=='0'&&line4[1]=='0' &&line5[1]=='0' &&line6[1]=='0' &&line7[1]=='0' )
		{
				printf("\n10:00");

		}
		if(line[2]=='0'&&line2[2]=='0'&&line3[2]=='0' &&line4[2]=='0' &&line5[2]=='0' &&line6[2]=='0' &&line7[2]=='0' )

		{
				printf("\n10:30");

		}
		if(line[3]=='0'&&line2[3]=='0'&&line3[3]=='0' &&line4[3]=='0' &&line5[3]=='0' &&line6[3]=='0' &&line7[3]=='0' )
		{
				printf("\n11:00");

		}
		if(line[4]=='0'&&line2[4]=='0'&&line3[4]=='0' &&line4[4]=='0' &&line5[4]=='0' &&line6[4]=='0' &&line7[4]=='0' )

		{
				printf("\n11:30");

		}
		if(line[5]=='0'&&line2[5]=='0'&&line3[5]=='0' &&line4[5]=='0' &&line5[5]=='0' &&line6[5]=='0' &&line7[5]=='0' )
		{
				printf("\n12:00");

		}

		if(line[6]=='0'&&line2[6]=='0'&&line3[6]=='0' &&line4[6]=='0' &&line5[6]=='0' &&line6[6]=='0' &&line7[6]=='0' )

		{
				printf("\n12:30");

		}
		if(line[7]=='0'&&line2[7]=='0'&&line3[7]=='0' &&line4[7]=='0' &&line5[7]=='0' &&line6[7]=='0' &&line7[7]=='0' )
		{
				printf("\n13:00");

		}
		if(line[8]=='0'&&line2[8]=='0'&&line3[8]=='0' &&line4[8]=='0' &&line5[8]=='0' &&line6[8]=='0' &&line7[8]=='0' )

		{
				printf("\n13:30");

		}
		if(line[9]=='0'&&line2[9]=='0'&&line3[8]=='0' &&line4[8]=='0' &&line5[8]=='0' &&line6[8]=='0' &&line7[8]=='0' )
		{
				printf("\n14:00");

		}
		if(line[10]=='0'&&line2[8]=='0'&&line3[5]=='0' &&line4[5]=='0' &&line5[5]=='0' &&line6[5]=='0' &&line7[5]=='0' )

		{
				printf("\n14:30");

		}
		if(line[11]=='0'&&line2[11]=='0'&&line3[11]=='0' &&line4[11]=='0' &&line5[11]=='0' &&line6[11]=='0' &&line7[11]=='0' )
		{
				printf("\n15:00");

		}
		if(line[12]=='0'&&line2[12]=='0'&&line3[12]=='0' &&line4[12]=='0' &&line5[12]=='0' &&line6[12]=='0' &&line7[12]=='0' )

		{
				printf("\n15:30");

		}
		if(line[13]=='0'&&line2[13]=='0'&&line3[13]=='0' &&line4[13]=='0' &&line5[13]=='0' &&line6[13]=='0' &&line7[13]=='0' )
		{
				printf("\n16:00");

		}
		if(line[14]=='0'&&line2[14]=='0'&&line3[14]=='0' &&line4[14]=='0' &&line5[14]=='0' &&line6[14]=='0' &&line7[14]=='0' )

		{
				printf("\n16:30");

		}
		if(line[15]=='0'&&line2[15]=='0'&&line3[15]=='0' &&line4[15]=='0' &&line5[15]=='0' &&line6[15]=='0' &&line7[15]=='0' )
		{
				printf("\n17:00");

		}
		if(line[16]=='0'&&line2[16]=='0'&&line3[16]=='0' &&line4[16]=='0' &&line5[16]=='0' &&line6[16]=='0' &&line7[16]=='0' )

		{
				printf("\n17:30");

		}

}

void check8(char line[], char line2[],char line3[],char line4[],char line5[],char line6[],char line7[],char line8[])
{
	int fslots[16];
	printf("Free Slots are:");


		if(line[0]=='0'&&line2[0]=='0'&&line3[0]=='0'&&line4[0]=='0' &&line5[0]=='0' &&line6[0]=='0' &&line7[0]=='0' &&line8[0]=='0')

		{
				printf("\n09:30");

		}
		if(line[1]=='0'&&line2[1]=='0'&&line3[1]=='0'&&line4[1]=='0' &&line5[1]=='0' &&line6[1]=='0' &&line7[1]=='0' &&line8[1]=='0')
		{
				printf("\n10:00");

		}
		if(line[2]=='0'&&line2[2]=='0'&&line3[2]=='0' &&line4[2]=='0' &&line5[2]=='0' &&line6[2]=='0' &&line7[2]=='0' &&line8[2]=='0' )

		{
				printf("\n10:30");

		}
		if(line[3]=='0'&&line2[3]=='0'&&line3[3]=='0' &&line4[3]=='0' &&line5[3]=='0' &&line6[3]=='0' &&line7[3]=='0' &&line8[3]=='0' )
		{
				printf("\n11:00");

		}
		if(line[4]=='0'&&line2[4]=='0'&&line3[4]=='0' &&line4[4]=='0' &&line5[4]=='0' &&line6[4]=='0' &&line7[4]=='0' &&line8[4]=='0' )

		{
				printf("\n11:30");

		}
		if(line[5]=='0'&&line2[5]=='0'&&line3[5]=='0' &&line4[5]=='0' &&line5[5]=='0' &&line6[5]=='0' &&line7[5]=='0' &&line8[5]=='0' )
		{
				printf("\n12:00");

		}

		if(line[6]=='0'&&line2[6]=='0'&&line3[6]=='0' &&line4[6]=='0' &&line5[6]=='0' &&line6[6]=='0' &&line7[6]=='0' &&line8[6]=='0' )

		{
				printf("\n12:30");

		}
		if(line[7]=='0'&&line2[7]=='0'&&line3[7]=='0' &&line4[7]=='0' &&line5[7]=='0' &&line6[7]=='0' &&line7[7]=='0' &&line8[7]=='0' )
		{
				printf("\n13:00");

		}
		if(line[8]=='0'&&line2[8]=='0'&&line3[8]=='0' &&line4[8]=='0' &&line5[8]=='0' &&line6[8]=='0' &&line7[8]=='0' &&line8[8]=='0' )

		{
				printf("\n13:30");

		}
		if(line[9]=='0'&&line2[9]=='0'&&line3[8]=='0' &&line4[8]=='0' &&line5[8]=='0' &&line6[8]=='0' &&line7[8]=='0' &&line8[8]=='0' )
		{
				printf("\n14:00");

		}
		if(line[10]=='0'&&line2[8]=='0'&&line3[5]=='0' &&line4[5]=='0' &&line5[5]=='0' &&line6[5]=='0' &&line7[5]=='0' &&line8[5]=='0' )

		{
				printf("\n14:30");

		}
		if(line[11]=='0'&&line2[11]=='0'&&line3[11]=='0' &&line4[11]=='0' &&line5[11]=='0' &&line6[11]=='0' &&line7[11]=='0' &&line8[11]=='0' )
		{
				printf("\n15:00");

		}
		if(line[12]=='0'&&line2[12]=='0'&&line3[12]=='0' &&line4[12]=='0' &&line5[12]=='0' &&line6[12]=='0' &&line7[12]=='0' &&line8[12]=='0' )

		{
				printf("\n15:30");

		}
		if(line[13]=='0'&&line2[13]=='0'&&line3[13]=='0' &&line4[13]=='0' &&line5[13]=='0' &&line6[13]=='0' &&line7[13]=='0' &&line8[13]=='0' )
		{
				printf("\n16:00");

		}
		if(line[14]=='0'&&line2[14]=='0'&&line3[14]=='0' &&line4[14]=='0' &&line5[14]=='0' &&line6[14]=='0' &&line7[14]=='0' &&line8[14]=='0' )

		{
				printf("\n16:30");

		}
		if(line[15]=='0'&&line2[15]=='0'&&line3[15]=='0' &&line4[15]=='0' &&line5[15]=='0' &&line6[15]=='0' &&line7[15]=='0' &&line8[15]=='0' )
		{
				printf("\n17:00");

		}
		if(line[16]=='0'&&line2[16]=='0'&&line3[16]=='0' &&line4[16]=='0' &&line5[16]=='0' &&line6[16]=='0' &&line7[16]=='0' &&line8[16]=='0' )

		{
				printf("\n17:30");

		}

}


void check9(char line[], char line2[],char line3[],char line4[],char line5[],char line6[],char line7[],char line8[] ,char line9[])
{
	int fslots[16];
	printf("Free Slots are:");


		if(line[0]=='0'&&line2[0]=='0'&&line3[0]=='0'&&line4[0]=='0' &&line5[0]=='0' &&line6[0]=='0' &&line7[0]=='0' &&line8[0]=='0' &&line9[0]=='0')

		{
				printf("\n09:30");

		}
		if(line[1]=='0'&&line2[1]=='0'&&line3[1]=='0'&&line4[1]=='0' &&line5[1]=='0' &&line6[1]=='0' &&line7[1]=='0' &&line8[1]=='0' &&line9[1]=='0')
		{
				printf("\n10:00");

		}
		if(line[2]=='0'&&line2[2]=='0'&&line3[2]=='0' &&line4[2]=='0' &&line5[2]=='0' &&line6[2]=='0' &&line7[2]=='0' &&line8[2]=='0' &&line9[2]=='0' )

		{
				printf("\n10:30");

		}
		if(line[3]=='0'&&line2[3]=='0'&&line3[3]=='0' &&line4[3]=='0' &&line5[3]=='0' &&line6[3]=='0' &&line7[3]=='0' &&line8[3]=='0' &&line9[3]=='0' )
		{
				printf("\n11:00");

		}
		if(line[4]=='0'&&line2[4]=='0'&&line3[4]=='0' &&line4[4]=='0' &&line5[4]=='0' &&line6[4]=='0' &&line7[4]=='0' &&line8[4]=='0' &&line9[4]=='0' )

		{
				printf("\n11:30");

		}
		if(line[5]=='0'&&line2[5]=='0'&&line3[5]=='0' &&line4[5]=='0' &&line5[5]=='0' &&line6[5]=='0' &&line7[5]=='0' &&line8[5]=='0' &&line9[5]=='0' )
		{
				printf("\n12:00");

		}

		if(line[6]=='0'&&line2[6]=='0'&&line3[6]=='0' &&line4[6]=='0' &&line5[6]=='0' &&line6[6]=='0' &&line7[6]=='0' &&line8[6]=='0' &&line9[6]=='0' )

		{
				printf("\n12:30");

		}
		if(line[7]=='0'&&line2[7]=='0'&&line3[7]=='0' &&line4[7]=='0' &&line5[7]=='0' &&line6[7]=='0' &&line7[7]=='0' &&line8[7]=='0' &&line9[7]=='0' )
		{
				printf("\n13:00");

		}
		if(line[8]=='0'&&line2[8]=='0'&&line3[8]=='0' &&line4[8]=='0' &&line5[8]=='0' &&line6[8]=='0' &&line7[8]=='0' &&line8[8]=='0' &&line9[8]=='0' )

		{
				printf("\n13:30");

		}
		if(line[9]=='0'&&line2[9]=='0'&&line3[8]=='0' &&line4[8]=='0' &&line5[8]=='0' &&line6[8]=='0' &&line7[8]=='0' &&line8[8]=='0' &&line9[8]=='0' )
		{
				printf("\n14:00");

		}
		if(line[10]=='0'&&line2[8]=='0'&&line3[5]=='0' &&line4[5]=='0' &&line5[5]=='0' &&line6[5]=='0' &&line7[5]=='0' &&line8[5]=='0' &&line9[5]=='0' )

		{
				printf("\n14:30");

		}
		if(line[11]=='0'&&line2[11]=='0'&&line3[11]=='0' &&line4[11]=='0' &&line5[11]=='0' &&line6[11]=='0' &&line7[11]=='0' &&line8[11]=='0' &&line9[11]=='0' )
		{
				printf("\n15:00");

		}
		if(line[12]=='0'&&line2[12]=='0'&&line3[12]=='0' &&line4[12]=='0' &&line5[12]=='0' &&line6[12]=='0' &&line7[12]=='0' &&line8[12]=='0' &&line9[12]=='0' )

		{
				printf("\n15:30");

		}
		if(line[13]=='0'&&line2[13]=='0'&&line3[13]=='0' &&line4[13]=='0' &&line5[13]=='0' &&line6[13]=='0' &&line7[13]=='0' &&line8[13]=='0' &&line9[13]=='0' )
		{
				printf("\n16:00");

		}
		if(line[14]=='0'&&line2[14]=='0'&&line3[14]=='0' &&line4[14]=='0' &&line5[14]=='0' &&line6[14]=='0' &&line7[14]=='0' &&line8[14]=='0' &&line9[14]=='0' )

		{
				printf("\n16:30");

		}
		if(line[15]=='0'&&line2[15]=='0'&&line3[15]=='0' &&line4[15]=='0' &&line5[15]=='0' &&line6[15]=='0' &&line7[15]=='0' &&line8[15]=='0' &&line9[15]=='0' )
		{
				printf("\n17:00");

		}
		if(line[16]=='0'&&line2[16]=='0'&&line3[16]=='0' &&line4[16]=='0' &&line5[16]=='0' &&line6[16]=='0' &&line7[16]=='0' &&line8[16]=='0' &&line9[16]=='0' )

		{
				printf("\n17:30");

		}

}

void check10(char line[], char line2[],char line3[],char line4[],char line5[],char line6[],char line7[],char line8[] ,char line9[] ,char line10[])
{
	int fslots[16];
	printf("Free Slots are:");


		if(line[0]=='0'&&line2[0]=='0'&&line3[0]=='0'&&line4[0]=='0' &&line5[0]=='0' &&line6[0]=='0' &&line7[0]=='0' &&line8[0]=='0' &&line9[0]=='0' &&line10[0]=='0')

		{
				printf("\n09:30");

		}
		if(line[1]=='0'&&line2[1]=='0'&&line3[1]=='0'&&line4[1]=='0' &&line5[1]=='0' &&line6[1]=='0' &&line7[1]=='0' &&line8[1]=='0' &&line9[1]=='0' &&line10[1]=='0' )
		{
				printf("\n10:00");

		}
		if(line[2]=='0'&&line2[2]=='0'&&line3[2]=='0' &&line4[2]=='0' &&line5[2]=='0' &&line6[2]=='0' &&line7[2]=='0' &&line8[2]=='0' &&line9[2]=='0' &&line10[2]=='0' )

		{
				printf("\n10:30");

		}
		if(line[3]=='0'&&line2[3]=='0'&&line3[3]=='0' &&line4[3]=='0' &&line5[3]=='0' &&line6[3]=='0' &&line7[3]=='0' &&line8[3]=='0' &&line9[3]=='0' &&line10[3]=='0' )
		{
				printf("\n11:00");

		}
		if(line[4]=='0'&&line2[4]=='0'&&line3[4]=='0' &&line4[4]=='0' &&line5[4]=='0' &&line6[4]=='0' &&line7[4]=='0' &&line8[4]=='0' &&line9[4]=='0' &&line10[4]=='0' )

		{
				printf("\n11:30");

		}
		if(line[5]=='0'&&line2[5]=='0'&&line3[5]=='0' &&line4[5]=='0' &&line5[5]=='0' &&line6[5]=='0' &&line7[5]=='0' &&line8[5]=='0' &&line9[5]=='0' &&line10[5]=='0' )
		{
				printf("\n12:00");

		}

		if(line[6]=='0'&&line2[6]=='0'&&line3[6]=='0' &&line4[6]=='0' &&line5[6]=='0' &&line6[6]=='0' &&line7[6]=='0' &&line8[6]=='0' &&line9[6]=='0' &&line10[6]=='0' )

		{
				printf("\n12:30");

		}
		if(line[7]=='0'&&line2[7]=='0'&&line3[7]=='0' &&line4[7]=='0' &&line5[7]=='0' &&line6[7]=='0' &&line7[7]=='0' &&line8[7]=='0' &&line9[7]=='0' &&line10[7]=='0' )
		{
				printf("\n13:00");

		}
		if(line[8]=='0'&&line2[8]=='0'&&line3[8]=='0' &&line4[8]=='0' &&line5[8]=='0' &&line6[8]=='0' &&line7[8]=='0' &&line8[8]=='0' &&line9[8]=='0' &&line10[8]=='0' )

		{
				printf("\n13:30");

		}
		if(line[9]=='0'&&line2[9]=='0'&&line3[8]=='0' &&line4[8]=='0' &&line5[8]=='0' &&line6[8]=='0' &&line7[8]=='0' &&line8[8]=='0' &&line9[8]=='0' &&line10[8]=='0' )
		{
				printf("\n14:00");

		}
		if(line[10]=='0'&&line2[8]=='0'&&line3[5]=='0' &&line4[5]=='0' &&line5[5]=='0' &&line6[5]=='0' &&line7[5]=='0' &&line8[5]=='0' &&line9[5]=='0' &&line10[5]=='0' )

		{
				printf("\n14:30");

		}
		if(line[11]=='0'&&line2[11]=='0'&&line3[11]=='0' &&line4[11]=='0' &&line5[11]=='0' &&line6[11]=='0' &&line7[11]=='0' &&line8[11]=='0' &&line9[11]=='0' &&line10[11]=='0' )
		{
				printf("\n15:00");

		}
		if(line[12]=='0'&&line2[12]=='0'&&line3[12]=='0' &&line4[12]=='0' &&line5[12]=='0' &&line6[12]=='0' &&line7[12]=='0' &&line8[12]=='0' &&line9[12]=='0' &&line10[12]=='0' )

		{
				printf("\n15:30");

		}
		if(line[13]=='0'&&line2[13]=='0'&&line3[13]=='0' &&line4[13]=='0' &&line5[13]=='0' &&line6[13]=='0' &&line7[13]=='0' &&line8[13]=='0' &&line9[13]=='0' &&line10[13]=='0' )
		{
				printf("\n16:00");

		}
		if(line[14]=='0'&&line2[14]=='0'&&line3[14]=='0' &&line4[14]=='0' &&line5[14]=='0' &&line6[14]=='0' &&line7[14]=='0' &&line8[14]=='0' &&line9[14]=='0' &&line10[14]=='0' )

		{
				printf("\n16:30");

		}
		if(line[15]=='0'&&line2[15]=='0'&&line3[15]=='0' &&line4[15]=='0' &&line5[15]=='0' &&line6[15]=='0' &&line7[15]=='0' &&line8[15]=='0' &&line9[15]=='0' &&line10[15]=='0' )
		{
				printf("\n17:00");

		}
		if(line[16]=='0'&&line2[16]=='0'&&line3[16]=='0' &&line4[16]=='0' &&line5[16]=='0' &&line6[16]=='0' &&line7[16]=='0' &&line8[16]=='0' &&line9[16]=='0' &&line10[16]=='0' )

		{
				printf("\n17:30");

		}

}




