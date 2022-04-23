#include<stdio.h>
int main(int argc, char const *argv[])
{
    float  km,m,cm,in,ft;
    printf("distance\n");
    scanf("%f",&km);
    m=1000*km;
    cm=100*m;
    in=cm/2.54;
    ft=in/12;
    printf("%f\n",km);

    printf("%f\n",m);
    printf("%f\n",cm);
    printf("%f\n",in);
    printf("%f\n",ft);
    return 0;
}
