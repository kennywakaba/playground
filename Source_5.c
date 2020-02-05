
#include <stdlib.h>
#include <stdio.h>

int num1;
int num2;
int num3;
int num4;
int count;

void main()
{
	num3 = 0;
	num2 = 1;
	count = 0;

	while (num1 > 0 && num2 > 0){
		printf("Enter the first value: \n");
		scanf("%d", &num1);

		printf("Enter the second value: \n");
		scanf("%d", &num2);
		
		if (num1 > num3) {
			num3 = num1
		}

		if (num2 < num4 && num2 > 0) {
			num4 = num2
		}

		count += ;
	}

	printf("Max of first number: %d\n Min of second number: %d\n", num1, num2);
}