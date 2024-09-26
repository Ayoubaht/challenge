// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int x , A =1 ;
    printf("entrer une valeur X: ");
    scanf ("%i",&x);
    
    while (A <= 10 ){
        printf ("%i * %i = %i \n",x,A,x*A);
        A++;
    }

    return 0;
}