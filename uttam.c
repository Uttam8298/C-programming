#include <stdio.h>
int com (int,int);
int main( ){
    int compute, m,k;
    scanf("%d%d",&m,&k);
    compute=com(m,k);
    printf("%d\n",compute);
    return 0;
    }
       int com(int m,int x)
    {   int c;
        if (x==1)
        return m;
        else 
        c=m*com( m,x-1);

        return c;
        }