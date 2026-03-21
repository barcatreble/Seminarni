#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //1
    /*char znak;
    printf("Vuvedete simvol:");
    scanf("%c", &znak);
    printf("%c%c%c%c%c%c%c%c%c%c\n",znak, znak, znak, znak, znak, znak, znak, znak, znak, znak);
    printf("%c        %c\n",znak, znak);
    printf("%c        %c\n",znak, znak);
    printf("%c        %c\n",znak, znak);
    printf("%c%c%c%c%c%c%c%c%c%c\n",znak, znak, znak, znak, znak, znak, znak, znak, znak, znak);*/

    //2
    /*float inch;
    printf("Inchove:");
    scanf("%f", &inch);
    float mm = 25 inch;
    float cm = 2.5 * inch;
    float dm = 0.25 * inch;
    float m = 0.025 * inch;
    printf("Milimetri: %.2f\nCantimetri: %.2f\nDecimetri: %.2f\nMetri: %.2f", mm, cm, dm, m);*/

    //3
    /*float celsii;
    printf("Vuvedi temperatura(v Celsii):");
    scanf("%f", &celsii);
    float fahr = celsii * 9/5 + 32;
    printf("Temperaturata vuv Fahrenheit: %.2f", fahr);*/

    //4
    /*float degrees;
    printf("Gradusi:");
    scanf("%f", &degrees);
    float rad = degrees* 3.14/180;
    printf("Radiani: %.3f", rad);*/

    //5
    /*float lev;
    printf("Lev:");
    scanf("%f", &lev);
    float usd = 0.6 * lev;
    float eur = 0.51 * lev;
    float gbp = 0.44 * lev;
    printf("Dollar:%.2f\nEuro:%.2f\nPounds:%.2f", usd, eur ,gbp);*/

    //6
    /*float osn1, osn2, h;
    printf("Purva osnova:");
    scanf("%f",&osn1);
    printf("Vtora osnova:");
    scanf("%f",&osn2);
    printf("Visochina:");
    scanf("%f",&h);
    float area = (osn1 + osn2)h/2;
    printf("Lice na trapeca:%.2f",area);*/

    //7
    /*float x1, y1, x2, y2;
    printf("Vuvedete koordinatite na tochka A:");
    scanf("%f %f", &x1, &y1);
    printf("Vuvedete koordinatite na tochka C:");
    scanf("%f %f", &x2, &y2);
    float width, height, area;
    width = fabs(x1-x2);
    height = fabs(y1-y2);
    area = width height;
    printf("Liceto na pravougulnika ABCD e %.1f", area);*/

    //8
    /*float x1,x2,x3,y1,y2,y3;
    printf("Vuvedete koordinatite na tochka A:");
    scanf("%f %f", &x1, &y1);
    printf("Vuvedete koordinatite na tochka B:");
    scanf("%f %f", &x2, &y2);
    printf("Vuvedete koordinatite na tochka C:");
    scanf("%f %f", &x3, &y3);
    float area = fabs(x1(y2-y3)+x2(y1-y3)+x3(y1-y2));
    printf("Lice:%f", area);*/

    //9
    /*float w, h;
    printf("Shirina na zalata:");
    scanf("%f", &w);
    printf("Duljina na zalata:");
    scanf("%f", &h);
    float w1 = 1.2;
    float h1 = 0.7;
    int a = (w-1)/w1;
    int b = h/h1;
    int space = ab -3;
    printf("Broqt na rabotnite mesta e %d.", space);*/

    //10
    /*float N, M;
    printf("Cena za kg zelenchuci:");
    scanf("%f", &N);
    printf("Cena za kg plodove:");
    scanf("%f", &M);
    int kg_z, kg_pl;
    printf("Obshto kg na zelenchucite:");
    scanf("%d", &kg_z);
    printf("Obshto kg na plodovete:");
    scanf("%d", &kg_pl);
    float prihodi = (Nkg_z + Mkg_pl) 0.51;
    printf("Prihodite ot rekoltata sa %.2f evro.", prihodi);*/

    //11
    /*float N, W, L, M, O;
    printf("Duljina na ploshtadkata:");
    scanf("%f", &N);
    float area = NN;
    printf("Shirina na plochkite:");
    scanf("%f", &W);
    printf("Duljina na plochkite:");
    scanf("%f", &L);
    float plochka = WL;
    printf("Shirina na peikata:");
    scanf("%f", &M);
    printf("Duljina na peikata:");
    scanf("%f", &O);
    float peika = MO;
    int br_plochki = (area - peika) / (WL);
    float vreme = br_plochki 0.2;
    printf("Neobhodimi plochki:%d\nVreme za postavqne na plochkite:%f", br_plochki, vreme);*/

    //12
    /*int N;
    float M, kurs;
    printf("Rabotni dni v meseca:");
    scanf("%d", &N);
    printf("Zaplata na den (v dolari):");
    scanf("%f", &M);
    printf("Kurs Dolar-Lev:");
    scanf("%f", &kurs);
    float year_salary = ((N * M * 14.5) * kurs * 0.75) / 365;
    printf("Chistata sredna zaplata na Ivan na den e %.2f", year_salary);*/
}