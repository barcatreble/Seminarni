#include <stdio.h>
#include <stdlib.h>

//1
int Max(int a, int b)
{
    if (a > b) return a;
    return b;
}

int Min(int a, int b)
{
    if (a < b) return a;
    return b;
}

int main(){
    //1
    /*int num; int maxNum; int minNum;
    printf("Vuvedete chisla. Prikluchete vuvejdaneto s 0.\n");
    if (scanf("%d", &num) == 1 && num != 0)
    {
        maxNum = num; minNum = num;
        while (scanf("%d", &num) == 1 && num != 0)
        {
            maxNum = Max(maxNum, num);
            minNum = Min(minNum, num);
        }  
        printf("Max:%d\n", maxNum);
        printf("Min:%d", minNum);
    }
    else printf("NE ste vuveli chislo.");*/

    //2
    /*int hour, min;
    printf("Vuvedete chas (0-23):");
    scanf("%d", &hour);
    printf("Vuvedete minuti (0-59):");
    scanf("%d", &min);
    min += 15;
    if (min > 59)
    {
        hour += 1;
        min -= 60;
    }
    if (hour > 23) hour = 0;
    printf("%d:%02d", hour, min);*/

    //3
    /*int a, b, c;
    printf("Vuvedete 3 chisla:");
    scanf("%d%d%d", &a, &b, &c);
    if (a == b && b == c) printf("yes");
    else printf("no");*/

    //4
    /*int p; float bonus_p;
    printf("Vuvedete broi tochki:");
    scanf("%d", &p);

    if (p <= 100) bonus_p = 6;
    else if (p > 100 && p < 1000) bonus_p = 0.2 * p;
    else if (p >= 1000) bonus_p = 0.1 * p;

    if (p % 2 == 0) bonus_p += 1;
    else if (p % 10 == 5) bonus_p += 2;
    float total = p + bonus_p;
    printf("Bonus tochki:%f\nObshto tochki:%f");*/

    //5
    /*int s1, s2, s3, min;
    printf("Vuvedete vremenata na trimata sportisti (1-50s):");
    scanf("%d%d%d", &s1, &s2, &s3);
    int sec = s1 + s2 + s3;
    if (sec > 59 && sec <= 119)
    {
        min = 1;
        sec -= 60;
    }
    else if (sec > 119)
    {
        min = 2;
        sec -= 120;
    }
    printf("Obshto vreme:%d:%02dmin", min, sec);*/

    //6
    /*int x, y, x1, y1, x2, y2;
    printf("x=");
    scanf("%d", &x);
    printf("y=");
    scanf("%d", &y);
    printf("x1=");
    scanf("%d", &x1);
    printf("y1=");
    scanf("%d", &y1);
    printf("x2=");
    scanf("%d", &x2);
    printf("y2=");
    scanf("%d", &y2);
    if (x1<=x<=x2 && y1<=y<=y2) printf("inside");
    else printf("Outside");*/

    //7
    /*int km; char period;
    printf("Kilometri");
    scanf("&d", &km);
    printf("Den/Nosht (D/N):");
    scanf(" %c", &period);
    float taxi, bus, vlak;
    taxi = 0.70;

    if (period == 'D') taxi += 0.79 * km;
    else taxi += 0.9 * km;

    if (km>=20) bus = 0.09 * km;
    else if (km>=100) vlak = 0.06 * km;

    float min = taxi;
    if (bus<min) min = bus;
    if (vlak<min) min = vlak;
    printf("Nai-evtiniqt transport struva %.2f", min);*/

    //8
    /*float obem, debit1, debit2;
    int hours;
    printf("Obem na baseina:");
    scanf("%f", &obem);
    printf("Debite na purvata truba:");
    scanf("%f", &debit1);
    printf("Debit na vtorata truba:");
    scanf("%f", &debit2);
    printf("Chasove:");
    scanf("%d", &hours);
    float voda = (debit1 + debit2) * hours;
    if (voda > obem) printf("Baseinut e prelql.");
    else printf("Baseinut e pulen na %f.", (voda / obem) * 100);*/

    //9
    /*float lice, grozde_m, jelano_vino, ostatuk;
    int rabotnici;
    printf("Plosht na lozeto:");
    scanf("%f", &lice);
    printf("Kilogrami grozde ot 1kv.m:");
    scanf("%f", &grozde_m);
    printf("Jelano kolichestvo vino:");
    scanf("%f", &jelano_vino);
    float chast = 0.4 * lice;
    float vino = chast * (grozde_m/2.5);
    printf("Proizvedeno vino:%.2f\n", vino);
    if (vino < jelano_vino) printf("Proizvedenoto vino e po-malko ot jelanoto.");
    else if ( vino == jelano_vino) printf("Proizvedenoto vino e tochno kolkoto jelanoto.");
    else
    {
        ostatuk = vino - jelano_vino;
        printf("Broi rabotnici:");
        scanf("%d", &rabotnici);
        printf("Ostavashto za edin rabotnik: %.2f", ostatuk/rabotnici);
    }*/

    //10
    /*int n, num;
    float p1, p2, p3, p4, p5;
    int c1 = 0; int c2 = 0; int c3 = 0; int c4 = 0; int c5 = 0;
    printf("Broi chisla:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Chislo:");
        scanf("%d", &num);
        if (num < 200) c1 ++;
        else if (num < 400) c2++;
        else if (num < 600) c3++;
        else if (num < 800) c4++;
        else if (num < 1000) c5++;
    }
    p1 = (c1 * 100.0) / n;
    p2 = (c2 * 100.0) / n;
    p3 = (c3 * 100.0) / n;
    p4 = (c4 * 100.0) / n;
    p5 = (c5 * 100.0) / n;
    printf("(0-200):%.2f%%\n(200-399):%.2f%%\n(400-599):%.2f%%\n(600-799):%.2f%%\n(800-1000):%.2f%%", p1, p2, p3, p4, p5);*/
}