#ifndef _GAME_OF_LIFE_H_
#define _GAME_OF_LIFE_H_

#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
using namespace std;

class game_of_life {
private:
	static const unsigned int STUPACA = 40;
	static const unsigned int REDAKA = 20;
	int getrand(int min, int max);
public:
	game_of_life();
	void kopiraj(char polje1[REDAKA][STUPACA], char polje2[REDAKA][STUPACA]);
	void zivot(char polje[REDAKA][STUPACA]);
	void iscrtaj(char polje[REDAKA][STUPACA]);
	void prvi(char polje[REDAKA][STUPACA]);
};

#endif
