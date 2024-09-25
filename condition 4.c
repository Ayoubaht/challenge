// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int main() {
   float a , b , c , x1 , x2 , D ;
   printf("entrer your numbr: ");
   scanf("%f",&a);
   printf("entrer your numbr: ");
   scanf("%f",&b);
   printf("entrer your numbr: ");
   scanf("%f",&c);
    D = pow(b,2) - 4*a*c;
   if (D>0){
       x1 = -b - sqrt(D)/(2*a);
       x2 = -b - sqrt(D)/(2*a);
       printf("les équations admis deux solution");
       printf("solution: %.2f", x1);
       printf("solution: %.2f", x2);
   }
       
    else if (D==0){
        x1= -b/(2*a);
        printf("solution: %.2f",x1);
        printf("les équations admis un solution");
    }
    else{
       printf("les équations n'est pas de solution");
    }   
   
   
   
     
    

    return 0;
}