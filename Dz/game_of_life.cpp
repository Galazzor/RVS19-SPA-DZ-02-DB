#include "game_of_life.h"

game_of_life::game_of_life()
{
}

void game_of_life::kopiraj(char polje1[REDAKA][STUPACA], char polje2[REDAKA][STUPACA])
{
	for (int i = 0; i < REDAKA; i++)
	{
		for (int j = 0; j < STUPACA; j++)
			polje2[i][j] = polje1[i][j];
	}
}

void game_of_life::zivot(char polje[REDAKA][STUPACA])
{
	char privremeno[REDAKA][STUPACA];
	kopiraj(polje, privremeno);
	for (int i = 1; i < REDAKA-1; i++)
	{
		for (int j = 1; j < STUPACA-1; j++)
		{
			int brojac = 0;
			if (polje[i - 1][j] == '*') {
				brojac++;
			}
			if (polje[i - 1][j - 1] == '*') {
				brojac++;
			}
			if (polje[i][j - 1] == '*') {
				brojac++;
			}
			if (polje[i + 1][j - 1] == '*') {
				brojac++;
			}
			if (polje[i + 1][j] == '*') {
				brojac++;
			}
			if (polje[i + 1][j + 1] == '*') {
				brojac++;
			}
			if (polje[i][j + 1] == '*') {
				brojac++;
			}
			if (polje[i - 1][j + 1] == '*') {
				brojac++;
			}
			if (brojac < 2 || brojac > 3)
				privremeno[i][j] = '-';
			if (brojac == 2 || brojac==3 && polje[i][j]=='*')
				privremeno[i][j] = polje[i][j];
			if (brojac == 3 && polje[i][j]=='-')
				privremeno[i][j] = '*';
		}
	}
	kopiraj(privremeno, polje);
}

void game_of_life::iscrtaj(char polje[REDAKA][STUPACA])
{
	for (int i = 1; i < REDAKA-1; i++) {
		for (int j = 1; j < STUPACA-1; j++) {
			cout << polje[i][j];
		}
		cout << endl;
	}
}

int game_of_life::getrand(int min, int max)
{
	return rand() % (max - min + 1) + min;
}

void game_of_life::prvi(char polje[REDAKA][STUPACA])
{
	srand(time(nullptr));
	for (int i = 1; i < REDAKA-1; i++) {
		for (int j = 1; j < STUPACA-1; j++) {
			if (getrand(1, 100) <= 25) {
				polje[i][j] = '*';
			}
			else {
				polje[i][j] = '-';
			}
		}
	}
}
