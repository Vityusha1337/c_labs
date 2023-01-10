#include <stdio.h>
#include <math.h>

int main(){
    int a, b, sum_a, sum_b, temp_a, temp_b;
    float result;
    sum_a = sum_b = 0;
    printf("Enter a -> ");
    scanf("%i", &a);
    printf("Enter b -> ");
    scanf("%i", &b);
    if (a==b){
        printf("Parameters are equal.\n");
        return 0;
    }
    temp_a = a;
    temp_b = b;
    while (temp_a>=1){
        sum_a+=(temp_a%10);
        temp_a/=10;}
    while (temp_b>=1){
        sum_b+=(temp_b%10);
        temp_b/=10;}
    if (sum_a!=sum_b){
        if (sum_a<sum_b){
            result = ((float)sum_a)/b;
        }
        else{
            result = ((float)sum_b)/a;
        }
    }
    else{
        printf("Sums of parameters are equal.");
        return 0;
    }
    printf ("%f", result);
    return 0;
}