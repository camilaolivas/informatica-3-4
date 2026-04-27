#include <stdio.h>

int main (void)
{
  float F;

   printf("Enter temperature in Fahrenheit ");

   scanf("%f", &F);

   float C= (F-32)/1.8;

    printf("F° %.2f = C° %.2f",F,C);

    //-40F°=-40C°
}
