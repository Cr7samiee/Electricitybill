/* Mini Elecricity Bill project using C for illustrating use of control statements.

1. X is called as unit.
2. C is input as day.

In this code :
*if bill is paid less than 7 days 2% Discount.
*if bill is paid between 8 to 15 day no fine and discound
*if bill is paid between 16 to 30 days then 5% fine.
* if bill is paid between 31 to 40 days 10% fine.
else if bill is paid more than 40 days then 25% fine*/

#include<stdio.h>
 void main()
{
int x;
float amt=0,total=0,c;

printf("enter a unit\n:");
scanf("%d",&x);
 
 
if(x>=0&&x<=20)
{
amt=30+(20-x)*5;
printf("The total bill is %.2f\n",amt);
}

else if(x>=21&&x<=50)
{
amt=50+100+(x-20)*6;
printf("The total bill is %.2f\n",amt);
}

else if(x>=51&&x<=150)
{
amt=400+(x-100)*8;
printf("The total bill is %.2f\n",amt);
}

else if(x>=151&&x<=250)
{
amt=1100+125+(x-150)*9;
printf("The total bill is %.2f\n",amt);
}

else if(x>=251&&x<=400)
{
amt=2000+150+10*(x-250)*10;
printf("The total bill is %.2f\n",amt);
}

else if(x>=400)
{
amt=200+3500+(x-400)*11;
printf("The total bill is %.2f\n",amt);
}

else
{
printf("unit is invalid please try again\n");
}
 /* Asking customer when he/she pay bill*/
 
printf("Enter the day that customers pay bill\n");
scanf("%d",&c);

if(c<=7)
{
total=amt-0.02*amt;
printf("The amount is %.2f\n",total);
}

else if(c>=8 && c<=15)
{
total=amt;
printf("The amount is %.2f\n",total);
}

else if(c>=16 && c<=30)
{
total=amt+0.05*amt;
printf("The amount is %.2f\n",total);
}

else if(c>=31&&c<=40)
{
total=amt+0.1*amt;
printf("The amount is %.2f\n",total);
}

else 
{
total=amt+0.25*amt;
printf("The amount is %.2f\n",total);
}


}
