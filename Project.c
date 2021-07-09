#include <stdio.h>
int main()
 
{
     int r[10], num, i, Rs = 0;
     int n;                     
     float er;                
     int r2;
     float temp;
     float RS,RP;
     char ch;
    printf("\n\n Press s to Calculate Resistance in Series.");
    printf("\n\n Press p to Calculate Resistance in Parallel.");
    printf("\n\n Enter your choice (s, p): ");
    scanf("%c",&ch);
   
    if((ch =='s') ||(ch =='S'))
    {
     printf("\nEnter the number of Resistors : ");
     scanf("%d", &num);
     printf("\nEnter Value of Each Resistance :\n ");
     for (i = 0; i < num; i++)
     {
     printf("\nR%d : ", i + 1);
     scanf("%d", &r[i]);
     }
     for (i = 0; i < num; i++) 
     {
     Rs = Rs + r[i];
     }
     printf("\nEquivalent Series Resistance : %dK Ohm", Rs);
     return (0);
    }
      else if((ch =='p') ||(ch =='P'))
    {
     printf("\nEnter the number of Resistors:");
     scanf("%d",&n);
     
     printf("\nEnter Value of Each Resistance :\n ");
     scanf("%f",&er);
     for(i=1;i<n;i++)
     {
     printf("\nR%d : ", i + 1);
     scanf("%d", &r[i]);
     
     temp=(1/er)+((1/(float)r2));        
     er=(1/temp);
     }
     printf("\n Equivalent Parallel Resistance = %f",er);
     return 0;
    }
     
     else
    {
        printf("\n\nInvalid Choice !!!\n\n");
    }
    return 0;
}
