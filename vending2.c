#include <stdio.h>

int main (void)
{
  //Create varialbles for first snack (Snikers)
  float price1 = 19.50;

  int quantity1 = 50;

  char code1 = 's';

  printf("Welcome to VendiShop!.\n");

  printf("-----------------------------.\n");

  printf("Item\tPrice\tQuantity\tCode\n");

  printf("Snikers$%.2f%d%c",price1,quantity1,code1);
}
