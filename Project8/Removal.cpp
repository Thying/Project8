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

	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			if (num1 == i && num2 == j && matrix[i][0] == matrix[j][1]) {
				matrix[i][0] = 0;
				matrix[j][1] = 0;
				break;
			}
	}
}