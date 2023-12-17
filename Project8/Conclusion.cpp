#include <iostream>
#include "functions.h"
using namespace std;

void conclusion() {
	setlocale(LC_ALL, "rus");
	extern int matrix[5][2];

	system("cls");
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 2; j++) {
			cout << i + 1 << ". " << dectionary(matrix[i][j], j) << "\t";
		}
		cout << endl;
	}
}