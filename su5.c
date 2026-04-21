#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//1
struct Item{
    float price;
    int count;
}; 
typedef struct Item Item;

//2
typedef struct Product{
    char name[20];
    float price;
    int id;
} Product;

typedef struct Order{
    char address[100];
    int productId;
} Order;

//6
int isAnagram(char str1[100], char str2[100])
{
    int num1[26] = {0}, num2[26] = {0}, i = 0;
    while(str1[i] != '\0')
    {
        num1[str1[i] - 'a']++;
        i++;
    }
    i = 0;
    while(str2[i] != '\0')
    {
        num2[str2[i] - 'a']++;
        i++;
    }
    for(i = 0; i < 26; i++)
    {
        if(num1[i] != num2[i]) return 0;
    }
    return 1;
}

int main()
{
    //1
    /*float spent = 0;
    int guests_count = 0;
    char input[10];
    printf("Broi gosti:");
    scanf("%d", &guests_count);

    Item chair = {13.99, 0};
    Item table = {42.00, 0};
    Item cups = {5.98, 0};
    Item dishes = {21.02, 0};

    while(1)
    {
        scanf("%s", &input);
        if(strcmp(input, "Chair") == 0)
        {
            chair.count++;
            spent += chair.price;
        }
        else if(strcmp(input, "Table") == 0)
        {
            table.count++;
            spent += table.price;
        }
        else if(strcmp(input, "Cups") == 0)
        {
            cups.count += 6;
            spent += cups.price;
        }
        else if(strcmp(input, "Dishes") == 0)
        {
            dishes.count += 6;
            spent += dishes.price;
        }
        if(strcmp(input, "PARTY!") == 0) break;
    }

    int more_chairs = guests_count - chair.count;
    int more_tables = (guests_count - table.count)/8;
    int more_cups = guests_count - cups.count;
    int more_dishes = guests_count - dishes.count;

    printf("%.2f\n", spent);
    if(guests_count > chair.count) printf("%d Tables\n", more_tables);
    else printf("");
    if(guests_count > table.count) printf("%d Chairs\n", more_chairs);
    else printf("");
    if(guests_count > cups.count) printf("%d Cups\n", more_cups);
    else printf("");
    if(guests_count > dishes.count) printf("%d Dishes", more_dishes);
    else printf("");*/

    //2
    /*Product* products = NULL;
    Order* orders = NULL
    int product_count = 0;
    int order_count = 0;
    char input[100];
    while (1)
    {
        scanf("%s", &input);
        if(strcmp(input, "END") == 0) break;

        if(strcmp(input, "Product") == 0)
        {
            Product pr;
            scanf("%s %f %d", pr.name, &pr.price, &pr.id);
            product_count++;
            products = realloc(products, product_count * sizeof(Product));
            products[product_count] = pr;
        }

        for(int i = 0; i < order_count; i++)
        {
            if(orders[i].productId == p.Id)
            {
                printf("Client %s ordered %s", orders[i].address, p.name);
                for (int j = i; j < order_count - 1; j++)
                {
                    orders[j] = orders[j+1];
                }
                order_count--;
                i--;
            }
        }
        else if(strcmp(input, "Order") == 0)
        {
            Order or;
            scanf("%s %d", &r.address, &or.productId);
            int found = 0;
            for(int i = 0; i < product_count; i++)
            {
                if(products[i].id == or.productId)
                {
                    printf("Client %s ordered %s", o.address, products[i].name);
                    found = 1;
                    break;
                }
            }
            if(found == 0)
            {
                order_count++;
                orders = realloc(orders, order_count * sizeof(Order));
                orders[order_count] = or;
            }
        }
    }*/

    //5 Besenica
    char duma[50];
    scanf("%s", duma);
    int duma_len = strlen(duma);

    char guess[50];
    for(int i = 0; i < duma_len; i++) guess[i] = '_';
    guess[duma_len] = '\0';

    int attempts = 0, correct = 0;
    while (correct < duma_len && attempts < duma_len + 2)
    {
        char bukva;
        scanf(" %c", &bukva);
        attempts++;

        for(int i = 0; i < duma_len; i++)
        {
            if(duma[i] == bukva && guess[i] == '_')
            {
                guess[i] = bukva;
                correct++;
            }
        }

        for(int i = 0; i < duma_len; i++)
        {
            printf("%c ", guess[i]);
        }
        printf("\n");
    }

    printf("Attempts: %d\n", attempts);
    if(correct == duma_len) printf("You win!");
    else printf("You lose!");

    return 0;
}
