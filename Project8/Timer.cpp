#include <chrono>
#include <cstdlib>
#include <Windows.h>
#include "functions.h"
#include <iostream>
#include <thread>

using namespace std;

void timer(int seconds) {

	for (int i = 0; i < seconds; i++) {
		// �������� � ���������� ���������
		this_thread::sleep_for(chrono::seconds(1));

		// ��������� ���� �������
		system("cls");
		cout << seconds - i << endl;
		conclusion();
	}

	cout << "������ �����. ��������� ����� �������." << endl;

	// �������� ���������
	exit(0);
}