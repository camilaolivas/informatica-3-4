#include <stdio.h>

int main (void)
{
    char urname[50];

    printf("What's your name?: ");

    scanf("%s", &urname);

    printf("Hello %s! \n",urname);

    char favcolor[50];

    printf("What's your favorite color sweetheart?: ");

    scanf("%s", &favcolor);

    printf("Your favorite color is %s! \n",favcolor);

}
