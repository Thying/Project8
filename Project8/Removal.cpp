#include <iostream>
#include "functions.h"
#include <conio.h>
using namespace std;

void removal() {
	extern int matrix[5][2];

	int num1, num2;
	while (true)
	{
		num1 = _getch() - 49;
		num2 = _getch() - 49;

		if (matrix[num1][0] == matrix[num2][1]) {
			matrix[num1][0] = 0;
			matrix[num2][1] = 0;
		}
		else 
			cout << "Совпадений не найдено." << endl;
		filling();
	}
}