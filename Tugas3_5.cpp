#include <stdio.h>
int main()
{
    int matkul_1, matkul_2, matkul_3;

    printf("Nilai Matkul 1 : ");
    scanf("%i", &matkul_1);

    printf("Nilai Matkul 2 : ");
    scanf("%i", &matkul_2);

    printf("Nilai Matkul 3 : ");
    scanf("%i", &matkul_3);

    if (matkul_1 >= 60)
    {
        if (matkul_2 >= 60)
        {
            if (matkul_3 >= 60)
                printf("TIGA");
            else
                printf("DUA");
        }
        else
        {
            if (matkul_3 >= 60)
                printf("DUA");
            else
                printf("SATU");
        }
    }
    else
    {
        if (matkul_2 >= 60)
        {
            if (matkul_3 >= 60)
                printf("DUA");
            else
                printf("SATU");
        }
        else
        {
            if (matkul_3 >= 60)
                printf("SATU");
            else
                printf("NOL");
        }
    }
}