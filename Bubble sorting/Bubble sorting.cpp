#include<stdio.h>
int main()
{
	int array[10];
	int count, counter, size, swap_var;
	printf("how many numbers you want to input : ");
	scanf_s("%d", &size);
	printf("Please enter the elements in the array : ");
	for (count = 0; count < size; count++)
	{
		scanf_s("%d", &array[count]);
	}
	for (count = 0; count < size - 1; count++)
	{
		for (counter = 0; counter < size - count - 1; counter++)
		{
			if (array[counter] > array[counter + 1])
			{
				swap_var = array[counter];
				array[counter] = array[counter + 1];
				array[counter + 1] = swap_var;
			}
		}
	}

	printf("Bellow is the list of elements sorted in ascending order : \n");
	for (count = 0; count < size; count++)
	{
		printf("%d\n", array[count]);
	}
	return 0;
}