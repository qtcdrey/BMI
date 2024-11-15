#include <stdio.h>

int main() {
    float bmi,height,weight;
    printf("Weight(kg): ");
    scanf("%f",&weight);
    printf("Height(m): ");
    scanf("%f",&height);
    bmi = weight/(height*height);
    printf("BMI = %.1f\n",bmi);
    if (bmi >= 16.0 && bmi <= 18.5) {
        puts("Underweight");
    } else if (bmi >= 18.6 && bmi <= 25.0) {
        puts("Normal");
    } else  {
        puts("Overweight");
    }
}