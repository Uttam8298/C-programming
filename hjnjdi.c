#include <stdio.h>

void bubble()

{

   int arr[100],tmp,large,k,j,loc,i,n;

   printf("Enter the number of elements in array\n");

   scanf("%d",&n);

   printf("Enter %d integer\n",n);

   for(i=0;i<n;i++)

   {  scanf("%d",&arr[i]); }

      printf("before sorting\n");

      for(i=0;i<n;i++)

      {  printf("array is %d\n",arr[i]);  }

     for(j=0;j<=n-2;j++)

      {  for(k=0;k<=n-1-j;k++)

          {  if(arr[k]>arr[k+1]) {

           tmp=arr[k];

         arr[k]=arr[k+1];

         arr[k+1]=tmp;

        } } }

      printf("after sorting\n");

      for(i=0;i<n;i++)

      {  printf("%d\n",arr[i]);    

      } }

void selection()

{

  int s,i,j,temp,a[20];

  printf("Enter total elements: ");

  scanf("%d",&s);

  printf("Enter %d elements: ",s);

  for(i=0;i<s;i++)

      scanf("%d",&a[i]);

  for(i=0;i<s;i++){

      for(j=i+1;j<s;j++){

           if(a[i]>a[j]){

               temp=a[i];

              a[i]=a[j];

              a[j]=temp;

           } }  }

printf("After sorting is: ");

  for(i=0;i<s;i++)

      printf(" %d",a[i]);


}  void insertion() {

 int n, array[10], c, d, t;

 printf("Enter number of elements\n");

 scanf("%d", &n);

 printf("Enter %d integers\n", n);

 for (c = 0; c < n; c++) {

scanf("%d", &array[c]);

  } for (c = 1 ; c <= n - 1; c++)  {

d = c;

 while ( d > 0 && array[d] < array[d-1]) {

      t          = array[d];

      array[d]   = array[d-1];

      array[d-1] = t;

 d--;

    } }

 printf("Sorted list in ascending order:\n");

 for (c = 0; c <= n - 1; c++) {

printf("%d\n", array[c]);

  }    }    

int main()

{  int ch;

   printf("Enter 1 for bubble sort.\nEnter 2 for selection sort.\nEnter 3 for insertion sort.\n"/Enter 4 for quick sort\n"/);

   scanf("%d",&ch);

   switch(ch)

   {    case 1:

           bubble();

           break;

       case 2:

       selection();

       break;

    case 3:

           insertion();

           break;

    default:

    printf("wrong choice");

    break;    

   }

}