#include<stdio.h>
int main()
{
	int i, num[10];
	for (i = 0;i < 10;i++)
	{
		printf("Input number is %d : ", i + 1);
		scanf_s("%d", &num[i]);
	}
	printf("Numbers between even numbers are : ");
	for (i = 1;i < 9;i++) 
	{
		if ((num[i - 1] % 2 == 0) && (num[i + 1] % 2 == 0)) 
		{
			printf("%d ", num[i]);
		}
	}
	printf("\n");
	return 0;
}