#include <stdio.h>

int main()  {
	int num1, num2, num3, max;

    printf("Enter three integers without gaps: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    max = num1; 

    if (num2 > max) 
        max = num2; 
    

    if (num3 > max) 
        max = num3; 

    printf("Max integer: %d\n", max);

	return 0;
}
