/*
	Name: Project on C Programming
	Copyright: NONE
	Author: Sangram Pramanik
	Date: 02-06-21 22:34
	Description: A Simple Project on Digital Watch & Stop Watch in C Programming.
*/

#include<stdio.h>
#include<windows.h>
int main()
{
	int hr=0, min=0, sec=0;
	int delay=1;
	int delay2=0;
	int a=0;
	printf("Enter 1 to start DIGITAL WATCH. \n");
	printf("Enter 2 to start STOPWATCH. \n\n");
	printf("Enter your choice. \n");
	scanf("%d",&a);
	
	switch (a)
	{
		case 1:
			printf("Set Your Time : \n");
			scanf("%d%d%d",&hr,&min,&sec);
			if(hr>12||min>60||sec>60)
			{
				printf("ERROR !! \n");
				exit(0);
			}
			while(1)
			{
				sec++;
				if(sec>59)
				{
					min++;
					sec=0;
				}
				if(min>59)
				{
				hr++;
				min=0;
				}
				if(hr>12)
				{
					hr=1;
				}
				printf("\t\t\t\t\t\t~: DIGITAL WATCH :~\n");
				printf("\t\t\t\t\t\t-------------------\n");
				printf("\t\t\t\t\t\t#                 #\n");
				printf("\t\t\t\t\t\t|_________________|\n");	
				printf("\t\t\t\t\t\t|                 |\n");
				printf("\t\t\t\t\t\t|  %02d : %02d : %02d   |\n",hr,min,sec);
				printf("\t\t\t\t\t\t|_________________|\n");
				printf("\t\t\t\t\t\t|                 |\n");
				printf("\t\t\t\t\t\t#                 #\n");
				printf("\t\t\t\t\t\t-------------------\n");
				sleep(delay);
				system("cls");		
			}
			break;
			
		case 2:
			while(1)
			{
				sec++;
				if(sec>59)
				{
					min++;
					sec=0;
				}
				if(min>59)
				{
				hr++;
				min=0;
				}
				if(hr>12)
				{
					hr=1;
				}
				printf("\t\t\t\t\t\t~:   STOPWATCH   :~\n");
				printf("\t\t\t\t\t\t-------------------\n");
				printf("\t\t\t\t\t\t#                 #\n");
				printf("\t\t\t\t\t\t|_________________|\n");	
				printf("\t\t\t\t\t\t|                 |\n");
				printf("\t\t\t\t\t\t|  %02d : %02d : %02d   |\n",hr,min,sec);
				printf("\t\t\t\t\t\t|_________________|\n");
				printf("\t\t\t\t\t\t|                 |\n");
				printf("\t\t\t\t\t\t#                 #\n");
				printf("\t\t\t\t\t\t-------------------\n");
				sleep(delay2);
				system("cls");	
			}
			break;
			
	    default :
        	printf("Invalid Input !!!\n" );
 	}
 	return 0;
	
}
