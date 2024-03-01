#include <stdio.h>

int main()
{
	int a = 2, b = 3;

	// Loops in C
	for (int i = 0; i < 5; i++)
	{
		printf("%d", i + 1);
	}

	// Arrays
	int area[10];
	int numbers[] = {34, 55, 62}; // length of array is inferred
	int matrix[2][2][2];		  // 3d array

	printf("\nThis is first index of array: %d", numbers[0]);

	// Pointers
	int likes = 3;
	int *point;		// pointer variable
	point = &likes; // assigning memory address of like variable
	int c = *point;

	// printf("\n memory address %d", point);
	// https://www.studysmarter.co.uk/explanations/computer-science/computer-programming/c-memory-address/

	// scanf()

	return 0;
}