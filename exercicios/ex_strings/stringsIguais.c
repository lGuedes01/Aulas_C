#include <stdio.h>

int iguais(char str[], char str2[])
{
    int i=0;
    while (str[i] == str2[i])
    {
        if (str[i] == '\0' || str2[i] == '\0')
        {
            break;   
        }
        i++;
    }
    if (str[i] != str2[i])
    {
        return -1;
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    char str[30];
    char str2[30];
    scanf("%29[^\n]s", str);
    getchar();
    scanf("%29[^\n]s", str2);
    getchar();
    int a = iguais(str, str2);
    printf("%d\n", a);
    return 0;
}
