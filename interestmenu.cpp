#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<cstdlib>
int main()
{
	while(1)
	{
	int choice;
	float p,r,t,si,ci;
	printf("\nPress 1 to calculate Simple Interest");
	printf("\nPress 2 to calculate Compound Interest");
	printf("\nPress 3 to Exit");
	printf("\nEnter Your choice");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			
			printf("Enter Principal ,rate and time");
        	scanf("%f%f%f",&p,&r,&t);
	        si=(p*r*t)/100;
	        printf("Simple Interest is %f",si);
	        break;
	    case 2:
	    	printf("\nEnter Principal , rate and time");
        	scanf("%f%f%f",&p,&r,&t);
        	ci=p*(pow((1+r/100),t));
	        printf("\nCompound Interest is %f",ci);
	        break;
	    case 3:exit(0);
	    default:
	    printf("Wrong Choice");
	}
	getch();
}
}
