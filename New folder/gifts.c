#include<stdio.h>
int main()
{
    int m,s;
    printf("enter marks of maths and science\n");
    scanf("%d%d",&m,&s);
    printf("you have got %d in maths and %d in science\n",m,s);
    if (m>=34 && s>=34)
    {printf("congo you have passed both exam and you have won 45 rupees\n");
    }
    else if(m>=34 && s<=33)
    {printf("you have pass only maths exam and you have won 15 rupees\n");
    }
    else if(m<=33 && s>=34)
    {printf("you hav pass only science exam and you have won 15 rupees\n");
    }
    else{
        printf("better luck next time\n");
        return 0;
    }
}
