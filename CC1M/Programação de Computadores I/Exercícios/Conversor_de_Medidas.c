//Gabriel Alejnadro L. M. - CC1M
//Conversor de medidas, de m -> km, hm, dam, dm, cm e mm
#include <stdio.h>

int main()
{
    float km,hm,dam,m,dm,cm,mm;

    printf("Digite uma distancia em metros: ");
    scanf("%f", &m);

    km = m / 1000;
    hm = m / 100;
    dam = m / 10;
    dm = m * 10;
    cm = m * 100;
    mm = m * 1000;

    printf("A medida de %.2f metros corresponde a\n", m);
    printf("%f km\n", km);
    printf("%f hm\n", hm);
    printf("%f dam\n", dam);
    printf("%.3f dm\n", dm);
    printf("%.2f cm\n", cm);
    printf("%.1f mm\n", mm);

    return 0;
}
