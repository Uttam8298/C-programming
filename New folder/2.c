#include <stdio.h>

int main()

{

  int a,b;
  printf("Enter First Integer\n");
  printf("a=");
  scanf("%d", &a);
  printf("Enter Second Integer\n");
  printf("b=");
  scanf("%d", &b);
  printf("a+b= %d\n",a+b);
  printf("a-b= %d\n",a-b);
  printf("a*b= %d\n",a*b);
  if (b==0){
  printf("error");
  }
  else  {
  printf("a/b= %d\n",a/b);     
  }
  return 0;
}