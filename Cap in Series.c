#include<stdio.h>
 
int main() {
   float c[10], num, Cs = 0;
   int i;
   clrscr();
 
   printf("Enter the number of Capacitors : ");
   scanf("%f", &num);
 
   printf("\nEnter Value of Each Capacitor : ");
   for (i = 0; i < num; i++) {
      printf("\nC%d : ", i + 1);
      scanf("%f", &c[i]);
   }
 
   for (i = 0; i < num; i++) {
      Cs = Cs + (1.0 / c[i]);
   }
   Cs = 1.0 / Cs;
 
   printf("\nEquivalent Series Capacitance : %f mFarad", Cs);
   return (0);
}