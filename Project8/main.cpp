#include <iostream>
#include "functions.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	extern int matrix[5][2];


	while (1) {

		system("cls");
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 2; j++) {
				cout << i << ". " << dectionary(matrix[i][j], j) << "\t";
			}
			cout << endl;
		}

		removal();
	}
	return 0;
}
