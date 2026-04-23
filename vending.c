#include <stdio.h>

int main (void)
{
  //Create varialbles for first snack (Snikers)
  float price1 = 19.50;

  int quantity1 = 50;

  char code1 = 's';

  printf("Vending Machine Stock.\n");

  printf("-----------------------------.\n");

  printf("Item name: Snikers.\n");

  printf("Price: $%.2f.\n",price1);

  printf("Quantity Available: %d.\n",quantity1);

  printf("Selection Code: %c.\n",code1);

  //Create variables for second snack (Doritos)

  float price2 = 25.60;

  int quantity2 = 15;

  char code2 = 'd';

  printf("\n");

   printf("Item name: Doritos.\n");

   printf("Price: $%.2f.\n",price2);

  printf("Quantity Available: %d.\n",quantity2);

  printf("Selection Code: %c.\n",code2);

  //Create variables for third snack (Dr.Pepper)

   float price3 = 28.99;

  int quantity3 = 21;

  char code3 = 'p';

 printf("\n");

   printf("Item name: Dr.Pepper.\n");

   printf("Price: $%.2f.\n",price3);

  printf("Quantity Available: %d.\n",quantity3);

  printf("Selection Code: %c.\n",code3);
}
