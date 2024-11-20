#include <string.h>
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	char word[] = "азбука";
	int count = 0;
	for (int i = 0; i < strlen(word); i++)
		if (word[i] == 'а') count++;
	printf("Столько раз символ 'а' встречается в слове %s: %d", word, count);
	
}
	