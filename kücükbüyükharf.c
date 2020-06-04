#include <stdio.h>
void degistir(char dg[])
{
    int i;
    for (i = 0; i <= 50; i++)
    {
        if (dg[i] > 96 && dg[i] < 123)
        {
            dg[i] -= 32;
        }
    }
}
int main()
{
    char metin[50];
    printf("karakter giriniz:   \n");
    scanf("%s", &metin);
    degistir(metin);
    printf("Hepsi buyuk harf :   %s\n", metin);
    return 0;
}