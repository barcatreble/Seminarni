#include <stdio.h>
#include <stdlib.h>

int prosto(int num)
{
    for(int i = 2; i < (num/2); i++)
    {
        if(num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    //1
    /*int n, m;
    int redove = 1, koloni = 1;
    printf("Broi redove:");
    scanf("%d", &n);
    printf("Broi koloni:");
    scanf("%d", &m);
    int arr[n][m];
    printf("Vuvedete chislata v masiva:");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }*/

    /*for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m - 1; j++)
        {
            if(arr[i][j] > arr[i][j+1])
            {
                redove = 0;
                break;
            }
        }
    }
    for(int j = 0; j < m; j++)
    {
        for(int i = 0; i < n - 1; i++)
        {
            if(arr[i][j] < arr[i+1][j])
            {
                koloni = 0;
                break;
            }
        }
    }
    if(redove) printf("Vseki red sudurja chisla podredeni v narastvasht red.\n");
    if(koloni) printf("Vsqka kolona sudurja chisla podredeni v namalqvasht red.");*/

    //2

    //3
    /*int min_num = arr[0][0], max_num = arr[0][0];
    int min_red = 0, max_red = 0;
    int temp;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(arr[i][j] > max_num)
            {
                max_num = arr[i][j];
                max_red = i;
            }
            if(arr[i][j] < min_num)
            {
                min_num = arr[i][j];
                min_red = i;
            }
        }
    }
    for(int j = 0; j < m; j++)
    {
        temp = arr[max_red][j];
        arr[max_red][j] = arr[min_red][j];
        arr[min_red][j] = temp;
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
    }*/

    //4

    //5
    /*int *arr = NULL;
    int size = 0;
    int command, x;
    
    while (1)
    {
        printf("Izberete komanda: 1.add(x), 2.delete(x), 3.smallest(x)");
        scanf("%d", &command);

        if(command == 1)
        {
            scanf("%d", &x);
            size++;
            arr = (int*)realloc(arr, size * sizeof(int));
            arr[size-1] = x;
            printf("%Chisloto %d e dobaveno v spisuka!", x);
        }
        else if(command == 2)
        {

        }
        else if(command == 3)
        {

        }
    }
    
    free(arr);*/

    //6
    /*int n, num, iztriti_broi = 0;
    printf("Vuvedete broq chisla:");
    scanf("%d", &n);
    int* arr = (int*)malloc(n * sizeof(int));
    int* iztriti = (int*)malloc(n * sizeof(int));
    printf("Vuvedete chislata:");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++)
    {
        if(prosto(arr[i]))
        {
            iztriti[iztriti_broi] = arr[i];
            iztriti_broi++;
            for(int j = i; j < n - 1; j++)
            {
                arr[j] = arr[j+1];
            }
            n--;
            i--;
        }
    }

    arr = (int*)realloc(arr, n * sizeof(int));
    iztriti = (int*)realloc(iztriti, iztriti_broi * sizeof(int));
    
    free(arr);
    free(iztriti);*/

    return 0;
}