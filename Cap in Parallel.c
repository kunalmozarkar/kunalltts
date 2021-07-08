#include<stdio.h>
 
int main() {
   float c[10], num, Cp = 0;
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
      Cp = Cp + c[i];
   }
 
   printf("\nEquivalent Parallel Capacitance : %f mFarad", Cp);
   return (0);
}