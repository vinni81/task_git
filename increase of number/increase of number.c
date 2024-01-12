#include <stdio.h>

int main() 
{
    int num1, num2, num3;

    printf("enter tree numbers with gaps: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 < num2 && num2 < num3) 
    printf("Yes\n");
    
    else 
    printf("No\n");
    return 0;
 }
