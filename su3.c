#include <stdio.h>
#include <stdlib.h>

int main()
{
    //1
    int n;
    printf("Vuvedete broi chisla v masiva:");
    scanf("%d", &n);
    int nums[50];
    for (int i = 0; i<n; i++)
    {
        scanf("%d", &nums[i]);
    }

    /*int start = 0, length = 1;
    int bestStart = 0, maxLength = 1;
    for (int i = 1; i < n; i++)
    {
        if (nums[i] == nums[i-1])
        {
            length++;
        }
        else
        {
            if (length > maxLength)
            {
                maxLength = length;
                bestStart = start;
            }
            length = 1;
            start = i;
        }
    }
    if (length > maxLength)
    {
        maxLength = length;
        bestStart = start;
    }
    printf("Nai-dulgata ploshtadka pochva ot %d i e %d chisla.", bestStart, maxLength);*/

    //2
    /*for (int i = 0; i < n - 1; i++)
    {
        if (i % 2 == 0)
        {
            if (nums[i] > nums[i+1])
            {
                printf("Ne");
                return 0;
            }
        }
        else
        {
            if (nums[i] < nums[i+1])
            {
                printf("Ne");
                return 0;
            }
        }
    }
    printf("a0 < a1 > a2 < a3...");*/

    //3
    /*for (int i = n-1; i >= 0; i--)
    {
        printf("%d ", nums[i]);
    }*/

    //4
    /*int k; int b[50];
    printf("K=");
    scanf("%d ", &k);
    k %= n;
    for (int i =0; i < n; i++)
    {
        int poziciq = (i + k) % n;
        b[poziciq] = nums[i];
    }
    for (int i =0; i < n; i++)
    {
        printf("%d", b[i]);
    }*/

    //5
    /*int k;
    printf("Poziciq na element po golemina ot spisuka:");
    scanf("%d", &k);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i -1 ; j++)
        {
            if(nums[j] > nums[j+1])
            {
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }
    printf("%d-tiqt element po golemina e: %d.", k, nums[k-1]);*/

    //6
    /*int rast = 1, namal = 1, maxLength = 1;
    int start = 0;
    for (int i = 1; i < n; i++)
    {
        if(nums[i] < nums[i-1])
        {
            namal++;
            rast = 1;
        }
        else if(nums[i] > nums[i-1])
        {
            rast++;
            namal =1;
        }
        else namal = rast = 1;

        if(rast > namal)
        {
            maxLength = rast;
            start = i - rast + 1;
        }
        if (rast < namal)
        {
            maxLength = namal;
            start = i - namal + 1;
        }
    }

    for (int i = start; i < start + maxLength; i++)
    {
        printf("%d ", nums[i]);
    }*/

    //7
    /*int num;
    printf("Suma:");
    scanf("%d", &num);
    for (int i = 0; i < n; i++)
    {
        int suma = 0;
        for (int j = i; j < n; j++)
        {
            suma += nums[j];
            if (suma == num)
            {
                for (int k = i; k <= j; k++)
                {
                    printf("%d ", nums[k]);
                }
                return 0;
            }        
        }
    }
    printf("Nqma poredica ot chisla, chiqto suma suvpada s vuvedenoto chislo");*/

    //8
    /*int nums[20];
    int n = 10;
    printf("Vuvedete 10 chisla:");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    int poziciq, num;
    while (n < 20)
    {
        scanf("%d", &num);
        if (num == 0) break;
        scanf("%d", &poziciq);
        for (int i = n; i > poziciq; i--)
        {
            nums[i] = nums[i-1];
        }
        nums[poziciq] = num;
        n++;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }*/

    return 0;
}
