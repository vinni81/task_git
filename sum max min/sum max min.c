#include <stdio.h>

int main() 
{
    int num1, num2, num3, num4, num5;
    int max, min, sum;

    printf("Enter five intgers wiht gaps: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    max = num1;
    min = num1;

    if (num2 > max) 
    max = num2;
    
    else if (num2 < min) 
    min = num2;
    
    if (num3 > max) 
    max = num3;
   
    else if (num3 < min) 
    min = num3;  

    if (num4 > max) 
    max = num4;
  
    else if (num4 < min) 
    min = num4;
   
    if (num5 > max) 
    max = num5;
    
    else if (num5 < min) 
    min = num5;
   
    sum = max + min;
    printf(" %d\n", sum);

    return 0;
}
