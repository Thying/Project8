#include <Windows.h>
#include "functions.h"
#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int seconds; // ���������� ������ �� �������� ���������

	cout << "������� ������� ������ �� ������ ������: ";
	cin >> seconds;

	thread timerThread([seconds]() {
		timer(seconds);
	});
		thread removalThread(removal);

		timerThread.join();
		removalThread.join();
	return 0;
}
