#include <stdio.h>

int main()
{
    char str[] = "Uttam Kumar";
    int len = 0, flag = 1;

    while (str[len] != '\0')
        len++;

    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
            flag = 0;

        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    if (flag == 1)
        printf("PALINDROME\n");
    else
        printf("NOT PALINDROME\n");
    printf("REVERSED STRING: %s\nLENGTH: %d\n", str, len);
    return 0;
}