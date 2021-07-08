#include<stdio.h>
int main()
{
 int n;                     
 float er;                
 int r2;
 int i;                     
 float temp;
 printf("Enter  the number of Resistors\n :");
 scanf("%d",&n);
 printf("\nEnter Value of Each Resistance : ");
 scanf("%f",&er);
 for(i=1;i<n;i++)
 {
     scanf("%d",&r2);
     temp=(1/er)+((1/(float)r2));        
     er=(1/temp);
 }
 printf("\nequivalent resistance = %f",er);
 return 0;
}