#include <stdio.h>
//1.Prototype
void addition(void);
void subtraction(void);
void multiplication(void);
void division(void);

int main(void){
    int user_response;
    printf("Calculator\n");
    printf("Select an option:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    scanf("%d", &user_response);

    if(user_response ==1){
        addition();}
        else if (user_response== 2){
        subtraction();}
        else if (user_response== 3){
        multiplication();}
        else if (user_response== 4){
        division();}
        else {
        printf("Invalid option\n");
    }

}
//2.Definition
void addition(void){
    float a;
    float b;
    printf("What did you wanna add?\n");
    scanf("%f %f",&a,&b);
    float r = a + b;
    printf("%f + %f = %f\n", a, b, r);
}
 void subtraction(void){
    float a2;
    float b2;
    printf("What did you wanna subtract?\n");
    scanf("%f %f",&a2,&b2);
    float r2 = a2 - b2;
    printf("%f - %f = %f\n", a2, b2, r2);
 }
void multiplication(void){
    float a3;
    float b3;
    printf("What did you wanna multiply?\n");
    scanf("%f %f",&a3,&b3);
    float r3 = a3 * b3;
    printf("%f * %f = %f\n", a3, b3, r3);
}
void division(void){
    float a4;
    float b4;
    printf("What did you wanna divide?\n");
    scanf("%f %f",&a4,&b4);
    float r4 = a4 / b4;
    printf("%f / %f = %f\n", a4, b4, r4);
}
