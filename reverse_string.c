#include <stdio.h>

int main()
{
	typedef char string[30];

	string name;

	int length = 0;
	
	int index;
	
	printf("Please enter the string\n");

	scanf("%[^\n]", &name);

	while (name[length] != '\0')
	{
		length++;
	}
	
	index = length - 1;
	
	printf("\nThe reverse string is ");
	
	for(; index >= 0; index --)
	{
		printf("%c", name[index]);
	}
	
	printf("\n");

	return 0;
}
