#include "functions.h"
#include <thread>
#include <chrono>
using namespace std;

int main() {


		thread timerThread(timer);
		thread removalThread(removal);

		timerThread.join();
		removalThread.join();

	return 0;
}
