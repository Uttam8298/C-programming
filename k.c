#include<stdio.h>
#include<conio.h>
 
int main() {
 
  while (1)
  {
     
   int cust_no, powerUsage;
   float amount;
   printf("Enter the customer number:\n ");
   scanf("%d", &cust_no);
   printf("Enter the power consumed: ");
   scanf("%d", &powerUsage);
 
   if (powerUsage >= 0 && powerUsage <= 200)
     { amount = powerUsage * 0.50;
      printf("%f\n",amount) ; }
else if (powerUsage > 200 && powerUsage <= 400)
      {amount = 100 + ((powerUsage - 200) * 0.65);
       printf("%f\n",amount) ; }
else if (powerUsage > 400 && powerUsage <= 600)
     { amount = 230 + ((powerUsage - 400) * 0.80);
       printf("%f\n",amount) ; }
  else
  {
      amount = 390 + ((powerUsage - 600) * 1.00);
       printf("%f\n",amount) ; 
  }
  }
      return 0 ; }