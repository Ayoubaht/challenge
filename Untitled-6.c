#include <stdio.h>
int main() {
    float a , b , h1 , h2 , h3 , h4;
    printf("entre a:");
    scanf("%f",&a);
    printf("entre b:");
    scanf("%f",&b);
h1= a+b;
h2= a-b;
h3= a*b;
h4= a/b;
    printf("Le résultat +:%.2f\n", h1);
    printf("Le résultat -:%.2f\n", h2);
    printf("Le résultat *:%.2f\n", h3);
    printf("Le résultat /:%.2f\n", h4);
return 0;
}
