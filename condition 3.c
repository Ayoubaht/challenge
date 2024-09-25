// Online C compiler to run C program online
#include <stdio.h>

int main() {
    float a ,b ;
    printf("entrer une numbre: ");
    scanf("%f",&a);
    printf("entrer une numbre: ");
    scanf("%f",&b);
    if (a==b) {
        printf("solution: %.2f",(a + b)*3);
    }
    else if (a/b) {
        printf("solution: %.2f",a+b);
    }
     
    

    return 0;
}