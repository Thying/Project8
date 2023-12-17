#include <iostream>
#include "functions.h"
using namespace std;

void removal() {
	extern int matrix[5][2];

	int num1, num2;
	while (true)
	{
		cin >> num1 >> num2;
		num1--;
		num2--;

		bool found = false;
		if (matrix[num1][0] == matrix[num2][1]) {
			matrix[num1][0] = 0;
			matrix[num2][1] = 0;
			found = true;
		}
		if (found) 
			cout << "Значения под указанными индексами совпадают и были заменены на 0." << endl;
		
		else 
			cout << "Совпадений не найдено." << endl;
		
	}
}