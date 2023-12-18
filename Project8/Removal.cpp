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

		if (matrix[num1][0] == matrix[num2][1]) {
			matrix[num1][0] = 0;
			matrix[num2][1] = 0;
		}
		else 
			cout << "Совпадений не найдено." << endl;
		filling();
	}
}