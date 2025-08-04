#include<stdio.h>

float far(float f);
float cel(float c);

int main(){
    char n;
    float c, f;
    printf("Enter\nc for Fahrenheit to Celsius.\nf for Celsius to Fahrenheit.\n:");
    scanf(" %c",&n);
    switch (n){
    case 'c':
        printf("Enter your Fahrenheit value:");
        scanf("%f",&c);
        printf("Fahrenheit %.2f F in Celsius is: %.2f C",c ,cel(c));        
        break;
    case 'f':
        printf("Enter your Celsius value:");
        scanf("%f",&f);
        printf("Celsius %.2f C in Fahrenheit is: %.2f F",f ,far(f));
        break;

    default:
        printf("Invalid input!");
        break;
    }
    
}

float far (float f){
    return (f*9/5)+32;
}

float cel (float c){
    return (c-32)*5/9;
}