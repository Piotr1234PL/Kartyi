#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <time.h>
using namespace std;

int liczba;



int omain() {
	srand(time(NULL));
	cout << "Hello World" << endl;
	/*for(int i = 15; i >= 0; i--) {
		Sleep(500);
		cout << i << endl;

	}*/
	liczba = rand() % 100 + 1;
	cout << liczba << endl;

	int pomiary[100][100];
	for (int i = 0; i < 100; i++) {
		for (int y = 0; y < 100; y++) {
			pomiary[i][y] = rand() % 100 + 1;
			cout << "Pomiar [" << i << "][" << y << "] = " << pomiary[i][y] << endl;
		}
	}
	
	return 0;
}