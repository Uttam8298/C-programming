#include<stdio.h>

int main(){
    int i,j,k,n;
     printf("enter the number of row:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
	    for(j=0;j<n-i-1;j++){
		        printf(" ");
		}
	    for(k=0;k<2*i+1;k++){
		        printf("*");
		}
		printf("\n");
    }
    for(i=n-1;i>0;i--)
    {
	    for(j=n-1;j>=i;j--){
	    	printf(" ");
	    }
	    for(k=2*i-1;k>0;k--){
		    printf("*");
	    }
	    printf("\n");
    }
    return 0;
}
