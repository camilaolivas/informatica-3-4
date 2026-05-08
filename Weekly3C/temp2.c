#include <stdio.h>

int main (void)
{
  float C;

   printf("Enter temperature in Celsius ");

   scanf("%f", &C);

   float F = (C*1.8)+32;

    printf("C° %.2f = F° %.2f\n",C,F); //-40F°=-40C°

    //If the temperature is below 0°C
    if(C < 0) {
    printf(" ❄️ Freezing weather");}

    //If the temperature is between 0 and 10°C
    else if(C < 10) {
    printf(" 🥶 Very cold weather");}

    //If the temperature is between 10 and 20°C
    else if(C < 20) {
    printf(" 🧥 Chilly weather");}

    //If the temperature is between 20 and 30°C
    else if(C < 30) {
    printf(" 🖼️ Normal weather");}

   //If the temperature is between 30 and 40°C
    else if(C < 40) {
    printf(" ☀️ Hot weather");}

    //If the temperature is above 40°C
    else {
    printf(" 🔥 Very hot weather");}

}
