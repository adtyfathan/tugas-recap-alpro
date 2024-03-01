#include <stdio.h>

int sisi;
int kelilingPersegi(int sisi)
{
    return 4 * sisi;
}

int luasPersegi(int sisi)
{
    return sisi * sisi;
}

int volumeKubus(int sisi)
{
    return sisi * sisi * sisi;
}

int main()
{
    printf("Panjang sisi: ");
    scanf("%d", &sisi);
    if (sisi > 0)
    {
        printf("Keliling persegi: %d\n", kelilingPersegi(sisi));
        printf("Luas persegi: %d\n", luasPersegi(sisi));
        printf("Volume persegi: %d", volumeKubus(sisi));
    }
    else
    {
        printf("Input tidak valid");
    }

    return 0;
}