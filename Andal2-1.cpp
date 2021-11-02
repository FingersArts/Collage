#include "stdio.h"
int main()
{
    int A = 25, B, C;
    B = A / 2;
    C = A - B * 2;
    printf("%i", C);
    A = B;
    B = A / 2;
    C = A - B * 2;
    printf("%i", C);
    A = B;
    B = A / 2;
    C = A - B * 2;
    printf("%i", C);
}