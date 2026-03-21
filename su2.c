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
    int min = 0;
    if (a < b) return a;
    return b;
}

int main(){
    //1
    /*int num;
    printf("Vuvedete chisla. Prikluchete vuvejdaneto s 0.");
    while (num != 0)
    {
        scanf("%d", &num);
    }*/

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
}