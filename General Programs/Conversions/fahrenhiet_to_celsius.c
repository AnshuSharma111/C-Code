#include <stdio.h>

// Program to convert temprature from fahrenhiet to celsius

void range(float low, float high, float step){
    float i;
    if ((int)step == 0){
        printf("Step value cannot be 0!");
        return;
    }
    if (high < low){
        printf("High is less than low!");
        return;
    }
    
    printf("FAHRENHEIT     CELSIUS\n");
    for (i = low; i <= high; i = i + step){
        printf("%0.2f   %0.2f\n", i, ((i - 32.0) * 5)/9);
    }
}

void f_to_c(float f){
    printf("The value in celsius: %0.2f", ((f - 32.0) * 5)/9);
}

void c_to_f(float c){
    printf("The value in fahrenheit is: %0.2f", (9*c)/5 + 32.0);
}

int main(){
    int choice;
    float f, c, l, h, s;
    printf("What do you want to do:\n1) Celsius to Fahrenheit\n2) Fahrenheit to Celsius\n3) Range\nEnter Choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter value in celsius: ");
        scanf("%d", &c);
        c_to_f(c);
        break;
    case 2:
        printf("Enter value in fahrenhiet: ");
        scanf("%f", &f);
        f_to_c(f);
        break;
    case 3:
        printf("Enter lower range: ");
        scanf("%f", &l);
        printf("Enter upper range: ");
        scanf("%f", &h);
        printf("Enter step value: ");
        scanf("%f", &s);
        range(l,h,s);
        break;
    default:
        break;
    }
    return 0;
}