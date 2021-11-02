#include <stdio.h>

int main()
{
    int N;
    scanf(" %i", &N);
    if (N > 50)
    {
        N = N - 25;
        printf("%i", N);
    }
    else
    {
        N = N + 10;
        printf("%i", N);
    }
}