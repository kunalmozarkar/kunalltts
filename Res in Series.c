#include<stdio.h>
#include "Main.h"

int main() {
 int r[10], num, i, Rs = 0;
 
 printf("Enter the number of Resistors : ");
 scanf("%d", &num);
 
 printf("\nEnter Value of Each Resistance : ");
 for (i = 0; i < num; i++) {
 printf("\nR%d : ", i + 1);
 scanf("%d", &r[i]);
 }
 
 for (i = 0; i < num; i++) {
 Rs = Rs + r[i];
 }
 
 printf("\nEquivalent Series Resistance : %d Kohm", Rs);
 return (0);
}