#include <stdio.h>

int main (void)
{
    char item [50];

    float price;

    int quantity;

   printf("Type the name of the purchased item:\n");
     scanf("%c", &item);


  printf("Type the price of the item:\n");
     scanf("%.2f", &price);


   printf("Type the quantity bought:\n");
     scanf("%d", &quantity);

 printf("-----------------------------.\n");
  printf("Techdraui Grocery Store.\n");
  printf("-----------------------------.\n");

    printf("\n");

   printf("Item:%c \n",item);

   printf("Price: $%.2f.\n",price);

  printf("Quantity Bought: %d.\n",quantity);

printf("-----------------------------.\n");
  printf("Total.\n");
  printf("-----------------------------.\n");
   printf("\n");
printf("Thank you for your purchase!.\n");
}
