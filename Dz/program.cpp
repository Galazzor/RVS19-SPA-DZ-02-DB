#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include "game_of_life.h"
using namespace std;



int main() {

	game_of_life igraj;
	char prvi[20][40];
	char radi[20][40];

	igraj.prvi(prvi);
	igraj.kopiraj(prvi, radi);

	bool dalje;
	do {
		igraj.iscrtaj(radi);
		igraj.zivot(radi);
		
		cout << "Dalje (1/0): ";
		cin >> dalje;
		system("cls");
	} while (dalje);
	return 0;
}