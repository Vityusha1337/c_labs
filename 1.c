#include <stdio.h>
#include <math.h>

int main(){
    int a, b, sum_a, sum_b, min, result;
    sum_a = sum_b = 0;
    printf("Enter a -> ");
    scanf("%i", &a);
    printf("Enter b -> ");
    scanf("%i", &b);
    while (a>=1){
        sum_a+=(a%10);
        a/=10;}
    while (b>=1){
        sum_b+=(b%10);
        b/=10;}
    if (sum_a!=sum_b){
        if (sum_a<sum_b){
            min = sum_a;
            result = min/b;
        }
        else{
            min = sum_b;
            result = min/a;
        }
    }
    else{
        printf("Error. Parameters are equal");
    }
    printf ("%i", result);
    return 0;
}