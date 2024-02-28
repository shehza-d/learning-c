#include <stdio.h>

int main(void)
{
	char c = 'f';				// char is single char
	char my_name[] = "Shehzad"; // array of char or simply string

	// printf() displays the string inside quotation
	printf("Hello World by %s!\n", my_name);
	printf("Hello %d, i got 100%%\n", c);

	int i = 0;
	while (i < 11)
	{
		printf("%i)  Hello World by Shehzad!\n", i);
		i++;
	}

	return 0;
}