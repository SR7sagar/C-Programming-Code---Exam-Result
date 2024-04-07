#include <stdio.h>
#include <conio.h>
#include<string.h>
#define MAX 100
void display(int n);
void view(int n);
void search(int);
struct record{
	char name[25],grade[5];
	int classes,roll,marks[5],total;
	float percentage;
}student[MAX];
FILE *a,*b,*c,*d,*e;
void main()
{
	int n,choice,z;
	char s[200][200],pro[30],alu[30];
		
	system("cls");
		int i,j;
	printf("\t\t\t\t\t\t\t**********MENU**********\n");
	a:
		b:
			c:
				d:
	printf("1. Enter the details of student.\n");
	printf("2. Display the recent result.\n");
	printf("3. View all the result.\n");
		printf("4. Search the result.\n");
	printf("5. Exit the program.\n");
	printf("\nEnter your choice(1-4):");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			enter:
			system("cls");
			a=fopen("1.txt","w");
	b=fopen("2.txt","w");
			printf("\nEnter the number of students:");
			scanf("%d",&n);
			if(n<=0)
			goto enter;
			for(i=0;i<n;i++)
			{
				printf("Enter the details of student %d\n",i+1);
				printf("\tEnter the name:-");
				scanf("%s",student[i].name);
				if(i==0)
				{
				fprintf(a,"name=%s\n",student[i].name);
			   }
			   if(i==1)
			   {
			   fprintf(b,"name=%s\n",student[i].name);
		}
		printf("\tEnter the class:-");
				scanf("%d",&student[i].classes);
				if(i==0)
				{
				fprintf(a,"class=%d\n",student[i].classes);
			   }
			   if(i==1)
			   {
			   fprintf(b,"class=%d\n",student[i].classes);
		}
				printf("\tEnter the roll no:-");
				scanf("%d",&student[i].roll);
				if(i==0)
				{
				fprintf(a,"roll=%d\n",student[i].roll);
			   }
			   if(i==1)
			   {
			   fprintf(b,"roll=%d\n",student[i].roll);
		}
				student[i].total=0;
				printf("\tEnter the marks of the student\n");
				for(j=0;j<5;j++)
				{
					reenter:
					printf("\t\tThe marks of ");
					if(j==0)
					printf("Business Mathematics:-");
					if(j==1)
					printf("Computer Science:-");
					if(j==2)
					printf("English:-");
					if(j==3)
					printf("Account:-");
					if(j==4)
					printf("Economics:-");
					scanf("%d",&student[i].marks[j]);
					if(student[i].marks[j]>100||student[i].marks[j]<0||student[i].marks[1]>100)
					goto reenter;
					if(j==0)
					{
						if(i==0)
						{
					fprintf(a,"Business maths=%d\n",student[i].marks[j]);
				}
					if(i==1)
						{
					fprintf(b,"Business maths=%d\n",student[i].marks[j]);
				}
			}
			if(j==1)
					{
						if(i==0)
						{
					fprintf(a,"Computer science=%d\n",student[i].marks[j]);
				}
					if(i==1)
						{
					fprintf(b,"Computer Science=%d\n",student[i].marks[j]);
				}
			}
			if(j==2)
					{
						if(i==0)
						{
					fprintf(a,"English=%d\n",student[i].marks[j]);
				}
					if(i==1)
						{
					fprintf(b,"English=%d\n",student[i].marks[j]);
				}
			}
			if(j==3)
					{
						if(i==0)
						{
					fprintf(a,"Account=%d\n",student[i].marks[j]);
				}
					if(i==1)
						{
					fprintf(b,"Account=%d\n",student[i].marks[j]);
				}
			}
			if(j==4)
					{
						if(i==0)
						{
					fprintf(a,"Economics=%d\n",student[i].marks[j]);
				}
					if(i==1)
						{
					fprintf(b,"Economics=%d\n",student[i].marks[j]);
				}
			}
			
					
					student[i].total=student[i].total+student[i].marks[j];
					
				}
				if(i==0)
				{
					fprintf(a,"Total=%d\n",student[i].total);
				}
				if(i==1)
				{
					fprintf(b,"Total=%d\n",student[i].total);
				}
				student[i].percentage=(float)student[i].total/5.0;
					if(student[i].percentage>=90)
					strcpy(student[i].grade,"A+");
					else if (student[i].percentage>=80)
					strcpy(student[i].grade,"A");
					else if (student[i].percentage>=70)
					strcpy(student[i].grade,"B+");
					else if (student[i].percentage>=60)
					strcpy(student[i].grade,"B");
					else if (student[i].percentage>=50)
					strcpy(student[i].grade,"C+");
					else if (student[i].percentage>=40)
					strcpy(student[i].grade,"C");
					else if (student[i].percentage>=30)
					strcpy(student[i].grade,"D+");
					else if (student[i].percentage>=20)
					strcpy(student[i].grade,"D");
					else if (student[i].percentage>=10)
					strcpy(student[i].grade,"E");
					printf("Total=%d\nPercentage=%.2f%%\nGrade=%s\n",student[i].total,student[i].percentage,student[i].grade);
					if(i==0)
				{
					fprintf(a,"Percentage=%.2f%%\n",student[i].percentage);
				}
				if(i==1)
				{
					fprintf(b,"Percentage=%.2f%%\n",student[i].percentage);
				}
				if(i==0)
				{
					fprintf(a,"Grade=%s\n",student[i].grade);
				}
				if(i==1)
				{
					fprintf(b,"Grade=%s\n",student[i].grade);
				}
			}
			fclose(a);
			fclose(b);

			goto a;
		case 2:
			display(n);
			goto b;
		case 3:
			view(n);
			goto c;
		case 4:
				a=fopen("1.txt","r");
				b=fopen("2.txt","r");
				fscanf(a,"%s",pro);
				fscanf(b,"%s",alu);
			printf("Press 1 for (%s) %s's result\n",pro,student[0].name);
			printf("Press 2 for (%s) %s's result\n",alu,student[1].name);
			scanf("%d",&z);
			switch(z)
			{
				case 1:
				
					do
					{
						fscanf(a,"%s",&s[i]);
						printf("%s\n",s[i]);
						i++;
					}while(!feof(a));
					break;
					
					case 2:
							
					do
					{
						fscanf(b,"%s",&s[i]);
						printf("%s\n",s[i]);
						i++;
					}while(!feof(b));
					break;
					
					fclose(a);
			fclose(b);	
			}
			
			goto d;
			case 5:
			break;
}
	getch();
}
void display(int n)
{
strupr(student[n-1].name);	
	printf("*******************************************************************************************************************\n");
    printf("*\t \t \t \t \t \t MARKSHEET OF %s                                                  *\n",student[n-1].name);
    printf("*******************************************************************************************************************\n");
	printf("*Name\t\t   Roll no.   English   Account   Computer   Economics   Business Maths.   Total   Percent   Grade*\n");
	printf("*******************************************************************************************************************\n");

	
		printf("%s\t\t   %d\t\t  %d       %d\t     %d\t\t%d\t\t %d\t    %d\t  %.2f%%\t %s\n",student[n-1].name,student[n-1].roll,student[n-1].marks[0],student[n-1].marks[1],student[n-1].marks[2],student[n-1].marks[3],student[n-1].marks[4],student[n-1].total,student[n-1].percentage,student[n-1].grade);
	
	
}
void view(int n)
{
	int i,j;
	printf("\n All the result of the students:-\n");
	for(i=0;i<n;i++)
	{

			student[i].total=0;		
			strupr(student[i].name);		
    	
			printf("\t*******************************************************************************\n");
			printf("\t\t \t \t \t MARKSHEET OF %s\n",student[i].name);
  		    printf("\t*******************************************************************************\n");
			printf("\tSubjects \t \t Total marks \tPassing marks\t\tObtained marks \n");
			printf("\t*******************************************************************************\n");
			printf("\tBusiness Math \t \t 100 \t \t 40 \t \t \t %d \n",student[i].marks[0]);	
			printf("\tComputer Science \t  100 \t \t 40 \t \t \t %d \n",student[i].marks[1]);
			printf("\tEnglish \t \t 100 \t \t 40 \t \t \t %d \n",student[i].marks[2]);
			printf("\tAccount \t \t 100 \t \t 40 \t \t \t %d \n",student[i].marks[3]);
			printf("\tBasic Math \t \t 100 \t \t 40 \t \t\t %d \n",student[i].marks[4]);		
			printf("\t*******************************************************************************\n");
    		for(j=0;j<5;j++)
   			 {
				student[i].total=student[i].total+student[i].marks[j];
   			 }
    			 student[i].percentage=(float)student[i].total/5.0;
				printf("\tTotal \t : %d \n",student[i].total);
				printf("\t*******************************************************************************\n");
				printf("\tPercentage : %.2f \n",student[i].percentage);
				printf("\t*******************************************************************************");
				if(student[i].percentage>=90)
				printf("\n\t Grade:\t A+");
				else if (student[i].percentage>=80)
				printf("\n\t Grade:\t A");
				else if (student[i].percentage>=70)
				printf("\n\t Grade:\t B+");
				else if (student[i].percentage>=60)
				printf("\n\t Grade:\t B");
				else if (student[i].percentage>=50)
				printf("\n\t Grade: \t C+");
				else if (student[i].percentage>=40)
				printf("\n\t Grade:\t C");
				else if (student[i].percentage>=30)
				printf("\n\t Grade:\t D+");
				else if (student[i].percentage>=20)
				printf("\n\t Grade:\t D");
				else 
				printf("\n\t Grade:\t E");
				printf("\n\t*******************************************************************************\n");
				printf("\n\n");
		}
	}
