/ Online C compiler to run C program online
#include <stdio.h>
 int main()
{
float ms , kmh   ;
printf("entre km/h:");
scanf("%f",&kmh);
ms = kmh * 0.277708;
printf("le résultat en en métres par seconde(m) est %.2f",ms);
return 0;
}