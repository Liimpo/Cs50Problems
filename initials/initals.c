#include <stdio.h>

void findInitials(char *testing);
void convertLetters(char *arr);

int main()
{
	char inputedName[1000];


	findInitials(inputedName);

	return 0;
}

void findInitials(char *testing)
{
	int index = 0;
	int found = 0;
	fgets(testing,1000,stdin);

	//Remove whitespace
	for (int i = 0; i < 1000 && found == 0; i++)
	{
		if (testing[i] == '\n')
		{
			testing[i] = '\0';
			found = 1;
		}
	}

	char initials[500];

	//first letter.
	initials[index++] = testing[0];

	for (int i = 0; i < 1000; i++)
	{
		if (testing[i] == 32)
		{
			initials[index] = testing[i+1];
			index++;
		}
	}


	initials[index-1] = '\0';

	convertLetters(initials);
	printf("%s\n", testing);
	printf("%s\n", initials);
}

void convertLetters(char *arr)
{
	for (int i = 0; i < 500; i++)
	{
		if (arr[i] > 96)
			arr[i] -= 32;
	}
}
