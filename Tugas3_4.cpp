#include <stdio.h>
int main()
{
    int a, b, c, max;

    printf("Masukan Sisi 1 : ");
    scanf("%i", &a);

    printf("Masukan Sisi 2 : ");
    scanf("%i", &b);

    printf("Masukan Sisi 3 : ");
    scanf("%i", &c);

    if (a == b)
    {
        if (a == c)
            printf("SAMA SISI");
        else
            printf("SAMA KAKI");
    }
    else if (a == c)
    {
        printf("SAMA KAKI");
    }
    else if (b == c)
    {
        printf("SAMA KAKI");
    }
    else
    {
        printf("SEMBARANG");
    }
}