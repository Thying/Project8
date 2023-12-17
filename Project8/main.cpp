#include <iostream>
#include "functions.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");

	const int rows = 5;
	const int cols = 2;

	int matrix[rows][cols] = {
		{1, 3},
		{2, 5},
		{4, 1},
		{5, 4},
		{3, 2}
	};

	
	while (1) {

		system("cls");
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				cout << i+1 << ". " << dectionary(matrix[i][j], j) << "\t";
			}
			cout << endl;
		}

		int num1, num2;
		cin >> num1 >> num2;
		num1--;
		num2--;

		bool found = false;
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < rows; j++)
			{
				if (num1 == i && num2 == j && matrix[i][0] == matrix[j][1]) {
					matrix[i][0] = 0;
					matrix[j][1] = 0;
					found = true;
					break;
				}
			}
		}
	}
	return 0;
}
