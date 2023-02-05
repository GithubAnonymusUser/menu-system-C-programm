/*My name is "MEMON FAIZAN".*/
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
//Globle variables diclerations
static char  a1[30]="Nothing",b1[30]="Nothing",c1[30]="Nothing",d1[30]="Nothing",e1[30]="Nothing",f1[30]="Nothing";
	static float ex,g1,h1,i1,j1,k1,l1;
	static int y;
static char  a[30]="Nothing",b[30]="Nothing",c[30]="Nothing",d[30]="Nothing",e[30]="Nothing",f[30]="Nothing";
	static float in,g,h,i,j,k,l;
	static int x;
//this function make for login
int login()
{
		int a,i;
		textbackground(4);
		clrscr();
		printf("------------------\n");
		printf("| Password       |\n");
		printf("------------------\n");
		scanf("%4d",&a);
		printf("------------------\n");
		for(i=0;i<=100;i++)
		{
			if(a==7869)
			{
				return 0;

			}
			else
			{
				printf("Wrong password\n");
				printf("try again");
				exit(0);
			}
		}
}
/*this function make for to take
 source of income and amount from
 the user */
void income()
{
	clrscr();
	printf("You have been succesfully logged in");
	printf("\n=====================================");
	printf("\nhow many your income source:");
	scanf("%d",&x);
	printf("\n\n\t\t   =====================================");
	printf("\n\t\t   Enter the source of income and amount");
	printf("\n\t\t   =====================================");
	printf("\n\t\t   -------------------------------------   ");
	printf("\n\t\t   Source of income    |\tAmount");
	printf("\n\t\t   -------------------------------------   ");
	switch(x)
	{
		case 1: printf("\n\t\t   ");
			scanf("%s",a);
			printf("\t\t                       |\t");
			scanf("%f",&g);
			break;
		case 2: printf("\n\t\t   ");
			scanf("%s",a);
			printf("\t\t                       |\t");
			scanf("%f",&g);
			printf("\n\t\t   ");
			scanf("%s",b);
			printf("\t\t                       |\t");
			scanf("%f",&h);
			break;
		case 3: printf("\n\t\t   ");
			scanf("%s",a);
			printf("\t\t                       |\t");
			scanf("%f",&g);
			printf("\n\t\t   ");
			scanf("%s",b);
			printf("\t\t                       |\t");
			scanf("%f",&h);
			printf("\n\t\t   ");
			scanf("%s",c);
			printf("\t\t                       |\t");
			scanf("%f",&i);
			break;
		case 4: printf("\n\t\t   ");
			scanf("%s",a);
			printf("\t\t                       |\t");
			scanf("%f",&g);
			printf("\n\t\t   ");
			scanf("%s",b);
			printf("\t\t                       |\t");
			scanf("%f",&h);
			printf("\n\t\t   ");
			scanf("%s",c);
			printf("\t\t                       |\t");
			scanf("%f",&i);
			printf("\n\t\t   ");
			scanf("%s",d);
			printf("\t\t                       |\t");
			scanf("%f",&j);
			break;
		case 5: printf("\n\t\t   ");
			scanf("%s",a);
			printf("\t\t                       |\t");
			scanf("%f",&g);
			printf("\n\t\t   ");
			scanf("%s",b);
			printf("\t\t                       |\t");
			scanf("%f",&h);
			printf("\n\t\t   ");
			scanf("%s",c);
			printf("\t\t                       |\t");
			scanf("%f",&i);
			printf("\n\t\t   ");
			scanf("%s",d);
			printf("\t\t                       |\t");
			scanf("%f",&j);
			printf("\n\t\t   ");
			scanf("%s",e);
			printf("\t\t                       |\t");
			scanf("%f",&k);
			break;
		case 6: printf("\n\t\t   ");
			scanf("%s",a);
			printf("\t\t                       |\t");
			scanf("%f",&g);
			printf("\n\t\t   ");
			scanf("%s",b);
			printf("\t\t                       |\t");
			scanf("%f",&h);
			printf("\n\t\t   ");
			scanf("%s",c);
			printf("\t\t                       |\t");
			scanf("%f",&i);
			printf("\n\t\t   ");
			scanf("%s",d);
			printf("\t\t                       |\t");
			scanf("%f",&j);
			printf("\n\t\t   ");
			scanf("%s",e);
			printf("\t\t                       |\t");
			scanf("%f",&k);
			printf("\n\t\t   ");
			scanf("%s",f);
			printf("\t\t                       |\t");
			scanf("%f",&l);
			break;

		default:printf("\n\n\n\t\t   -------------------------------------   ");
			printf("\n\t\t   !!! Only 6 source of income valid !!!");
			printf("\n\t\t   -------------------------------------   ");
	}

	in=g+h+i+j+k+l;
}
//function for  to take way of expenses and amount
void expenses()
{
	clrscr();
	printf("==================================");
	printf("\nhow many your way of expenses:");
	scanf("%d",&y);
	printf("==================================");
	printf("\n\n\t\t   =====================================");
	printf("\n\t\t   Enter the way of expenses and amount");
	printf("\n\t\t   =====================================");
	printf("\n\t\t   -------------------------------------   ");
	printf("\n\t\t   Way of expenses    |\tAmount");
	printf("\n\t\t   -------------------------------------   ");
	switch(y)
	{
		case 1: printf("\n\t\t   ");
			scanf("%s",a1);
			printf("\t\t                       |\t");
			scanf("%f",&g1);
			break;
		case 2: printf("\n\t\t   ");
			scanf("%s",a1);
			printf("\t\t                       |\t");
			scanf("%f",&g1);
			printf("\n\t\t   ");
			scanf("%s",b1);
			printf("\t\t                       |\t");
			scanf("%f",&h1);
			break;
		case 3: printf("\n\t\t   ");
			scanf("%s",a1);
			printf("\t\t                       |\t");
			scanf("%f",&g1);
			printf("\n\t\t   ");
			scanf("%s",b1);
			printf("\t\t                       |\t");
			scanf("%f",&h1);
			printf("\n\t\t   ");
			scanf("%s",c1);
			printf("\t\t                       |\t");
			scanf("%f",&i1);
			break;
		case 4: printf("\n\t\t   ");
			scanf("%s",a1);
			printf("\t\t                       |\t");
			scanf("%f",&g1);
			printf("\n\t\t   ");
			scanf("%s",b1);
			printf("\t\t                       |\t");
			scanf("%f",&h1);
			printf("\n\t\t   ");
			scanf("%s",c1);
			printf("\t\t                       |\t");
			scanf("%f",&i1);
			printf("\n\t\t   ");
			scanf("%s",d1);
			printf("\t\t                       |\t");
			scanf("%f",&j1);
			break;
		case 5: printf("\n\t\t   ");
			scanf("%s",a1);
			printf("\t\t                       |\t");
			scanf("%f",&g1);
			printf("\n\t\t   ");
			scanf("%s",b1);
			printf("\t\t                       |\t");
			scanf("%f",&h1);
			printf("\n\t\t   ");
			scanf("%s",c1);
			printf("\t\t                       |\t");
			scanf("%f",&i1);
			printf("\n\t\t   ");
			scanf("%s",d1);
			printf("\t\t                       |\t");
			scanf("%f",&j1);
			printf("\n\t\t   ");
			scanf("%s",e1);
			printf("\t\t                       |\t");
			scanf("%f",&k1);
			break;
		case 6: printf("\n\t\t   ");
			scanf("%s",a1);
			printf("\t\t                       |\t");
			scanf("%f",&g1);
			printf("\n\t\t   ");
			scanf("%s",b1);
			printf("\t\t                       |\t");
			scanf("%f",&h1);
			printf("\n\t\t   ");
			scanf("%s",c1);
			printf("\t\t                       |\t");
			scanf("%f",&i1);
			printf("\n\t\t   ");
			scanf("%s",d1);
			printf("\t\t                       |\t");
			scanf("%f",&j1);
			printf("\n\t\t   ");
			scanf("%s",e1);
			printf("\t\t                       |\t");
			scanf("%f",&k1);
			printf("\n\t\t   ");
			scanf("%s",f1);
			printf("\t\t                       |\t");
			scanf("%f",&l1);
			break;

		default:printf("\n\n\n\t\t   -------------------------------------   ");
			printf("\n\t\t   !!! Only 6 source of income valid !!!");
			printf("\n\t\t   -------------------------------------   ");
	}

	ex=g1+h1+i1+j1+k1+l1;
}
//this function made for print monthly budget
void printie(float save)
{
	int m,ye,temp;
	clrscr();
	printf("Enter the month:");
	scanf("%d",&m);
	printf("Enter the year:");
	scanf("%d",&ye);
	clrscr();
	printf("\n\n\t   ===============================================================");
	printf("\n\t\t\t\t  MONTHLY BUDGET");
	switch(m)
	{
		case 1: printf("\n\t\t\t\t  JANUARY - %d",ye);
			break;
		case 2: printf("\n\t\t\t\t FEBRUARY - %d",ye);
			break;
		case 3: printf("\n\t\t\t\t   MARCH - %d",ye);
			break;
		case 4: printf("\n\t\t\t\t   APRIL - %d",ye);
			break;
		case 5: printf("\n\t\t\t\t    MAY - %d",ye);
			break;
		case 6: printf("\n\t\t\t\t   JUNE - %d",ye);
			break;
		case 7: printf("\n\t\t\t\t   JULY - %d",ye);
			break;
		case 8: printf("\n\t\t\t\t  AUGUST - %d",ye);
			break;
		case 9:  printf("\n\t\t\t\t SEPTEMBER - %d",ye);
			 break;
		case 10: printf("\n\t\t\t\t  OCTOBER - %d",ye);
			 break;
		case 11: printf("\n\t\t\t\t NOVEMBER - %d",ye);
			 break;
		case 12: printf("\n\t\t\t\t DECEMBER - %d",ye);
			 break;
		default: printf("\n\t\t   Enter the valid month");
	}
	printf("\n\t   ===============================================================");
	printf("\n\t   ---------------------------------------------------------------");
	printf("\n\t    Income\t\t Amount | Expenses\t\t   Amount");
	printf("\n\t   ---------------------------------------------------------------");
	if(x<y)
		temp=y;
	else
		temp=x;
	switch(temp)
	{
		case 1: printf("\n\t    %s\t\t%8.2f| %s\t\t\t  %.2f",a,g,a1,g1);
			break;

		case 2: if(x<y)
			{
				printf("\n\t    %s\t\t%8.2f| %s\t\t\t  %.2f",a,g,a1,g1);
				printf("\n\t    %s\t\t%8.2f| %s\t\t\t  %.2f",b,h,b1,h1);
				break;
			}
			else
			{
				printf("\n\t    %s\t\t%8.2f| %s\t\t\t  %.2f",a,g,a1,g1);
				printf("\n\t    %s\t\t%8.2f| %s\t\t     %.2f",b,h,b1,h1);
				break;
			}

		case 3: if(x<y)
			{
				printf("\n\t    %s\t\t%8.2f| %s\t\t\t  %.2f",a,g,a1,g1);
				printf("\n\t    %s\t\t%8.2f| %s\t\t\t  %.2f",b,h,b1,h1);
				printf("\n\t    %s\t\t%8.2f| %s\t\t\t  %.2f",c,i,c1,i1);
				break;
			}
			else
			{
				printf("\n\t    %s\t\t%8.2f| %s\t\t\t  %.2f",a,g,a1,g1);
				printf("\n\t    %s\t\t%8.2f| %s\t\t\t  %.2f",b,h,b1,h1);
				printf("\n\t    %s\t\t%8.2f| %s\t\t     %2.2f",c,i,c1,i1);
				break;
			}



		case 4: if(x<y)
			{
				printf("\n\t    %s\t\t%8.2f| %s\t\t\t  %.2f",a,g,a1,g1);
				printf("\n\t    %s\t\t%8.2f| %s\t\t\t  %.2f",b,h,b1,h1);
				printf("\n\t    %s\t\t%8.2f| %s\t\t\t  %.2f",c,i,c1,i1);
				printf("\n\t    %s\t\t%8.2f| %s\t\t\t  %.2f",d,j,d1,j1);
				break;
			}
			else
			{
				printf("\n\t    %s\t\t%8.2f| %s\t\t\t  %.2f",a,g,a1,g1);
				printf("\n\t    %s\t\t%8.2f| %s\t\t\t  %.2f",b,h,b1,h1);
				printf("\n\t    %s\t\t%8.2f| %s\t\t\t  %.2f",c,i,c1,i1);
				printf("\n\t    %s\t\t%8.2f| %s\t\t     %.2f",d,j,d1,j1);
				break;
			}

		case 5: if(x<y)
			{
				printf("\n\t    %s\t\t%8.2f| %s\t\t\t  %.2f",a,g,a1,g1);
				printf("\n\t    %s\t\t%8.2f| %s\t\t\t  %.2f",b,h,b1,h1);
				printf("\n\t    %s\t\t%8.2f| %s\t\t\t  %.2f",c,i,c1,i1);
				printf("\n\t    %s\t\t%8.2f| %s\t\t\t  %.2f",d,j,d1,j1);
				printf("\n\t    %s\t\t%8.2f| %s\t\t\t  %.2f",e,k,e1,k1);
				break;
			}
			else
			{
				printf("\n\t    %s\t\t%8.2f| %s\t\t\t  %.2f",a,g,a1,g1);
				printf("\n\t    %s\t\t%8.2f| %s\t\t\t  %.2f",b,h,b1,h1);
				printf("\n\t    %s\t\t%8.2f| %s\t\t\t  %.2f",c,i,c1,i1);
				printf("\n\t    %s\t\t%8.2f| %s\t\t\t  %.2f",d,j,d1,j1);
				printf("\n\t    %s\t\t%8.2f| %s\t\t     %.2f",e,k,e1,k1);
				break;
			}

		case 6: if(x<y)
			{
				printf("\n\t    %s\t\t%8.2f| %s\t\t\t  %.2f",a,g,a1,g1);
				printf("\n\t    %s\t\t%8.2f| %s\t\t\t  %.2f",b,h,b1,h1);
				printf("\n\t    %s\t\t%8.2f| %s\t\t\t  %.2f",c,i,c1,i1);
				printf("\n\t    %s\t\t%8.2f| %s\t\t\t  %.2f",d,j,d1,j1);
				printf("\n\t    %s\t\t%8.2f| %s\t\t\t  %.2f",e,k,e1,k1);
				printf("\n\t    %s\t\t%8.2f| %s\t\t\t  %.2f",f,l,f1,l1);
				break;
			}
			else
			{
				printf("\n\t    %s\t\t%8.2f| %s\t\t\t  %.2f",a,g,a1,g1);
				printf("\n\t    %s\t\t%8.2f| %s\t\t\t  %.2f",b,h,b1,h1);
				printf("\n\t    %s\t\t%8.2f| %s\t\t\t  %.2f",c,i,c1,i1);
				printf("\n\t    %s\t\t%8.2f| %s\t\t\t  %.2f",d,j,d1,j1);
				printf("\n\t    %s\t\t%8.2f| %s\t\t     %.2f",e,k,e1,k1);
				break;
			}

		default:printf("\n\t\tonly 6 income and expenses valid");
	}
	int smi=2;
	printf("\n\t   ---------------------------------------------------------------");
	printf("\n\t    Total Income\t%.2f| Total Expenses\t  %.2f",in,ex);
	printf("\n\t   ---------------------------------------------------------------");
	printf("\n\t   ============================");
	printf("\n\t   | %c YOUR SAVINGS: %.2f |",smi,save);
	printf("\n\t   ============================");
}
void main()
{
	static float save;
	clrscr();
	login();
	textbackground(2);
	income();
	clrscr();
	textbackground(5);
	expenses();
	clrscr();
	textbackground(1);
	save=in-ex;
	printie(save);
 getch();
}