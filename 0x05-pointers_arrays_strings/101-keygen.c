#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void randomPasswordGenerator(int N)
{
	int i = 0;

	int randomer = 0;

	srand((unsigned int)(time(NULL)));
	char numbers[] = "0123456789";
	char letter[] = "abcdefghijklmnopqrstuvwyxz";
	char LETTER[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char symbols[] = "!@#$^&*?";
	char password[N];

	randomer = rand() % 4;

	for (i = 0; i < N; i++)
	{
		if (randomer == 1)
		{
			password[i] = numbers[rand() % 10];
			randomer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomer == 2)
		{
			password[i] = symbols[rand() % 8];
			randomer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomer == 3)
		{
			password[i] = LETTER[rand() % 26];
			randomer = rand() % 4;
			printf("%c", password[i]);
		}
		else {
			password[i] = letter[rand() % 26];
			randomer = rand() % 4;
			printf("%c", password[i]);
		}
	}
}

int main()
{
	int N = 10;

	randomPasswordGenerator(N);
	return (0);
}
