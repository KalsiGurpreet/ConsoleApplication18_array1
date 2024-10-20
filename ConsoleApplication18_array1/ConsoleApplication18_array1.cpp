#include<stdio.h>
int main(void)
{
	int numbers[5] = { 1,2,3,4,5 };  // numbers[5] means 5 values in array.
	int sum = 0, i;

	for (i = 0; i < 5; i++)
	{
		sum += numbers[i];
	}
	printf("Sum is %d", sum);
	return 0;
}