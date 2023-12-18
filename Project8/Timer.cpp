#include <chrono>
#include <cstdlib>
#include <Windows.h>
#include "functions.h"
#include <iostream>
#include <thread>

using namespace std;

void timer(int seconds) {

	for (int i = 0; i < seconds; i++) {
		// Задержка в выполнении программы
		this_thread::sleep_for(chrono::seconds(1));

		// Очисшение меню консоли
		system("cls");
		cout << seconds - i << endl;
		conclusion();
	}

	cout << "Таймер истек. Программа будет закрыта." << endl;

	// Закрытие программы
	exit(0);
}