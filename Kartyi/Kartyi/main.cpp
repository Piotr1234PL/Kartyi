#include <iostream>
#include <string>
using namespace std;

float oceny[5]; float suma = 0, srednia;
int sizee = *(&oceny+ 1) - oceny;

int main(){
	cout << "Podaj piêæ ocen:" << endl;
	for (int i = 0; i < 5; i++) {
		cin >> oceny[i];
		suma = suma + oceny[i];
	}
	for (int i = 0; i < 5; i++) {
		cout << oceny[i] << " ";
		
	}
	cout << endl;
	cout << suma << endl;
	srednia = suma / sizee;
	cout << srednia<<endl;
	string test;
	cin >> test;
	cout << test<<endl;
	cout << "Druga litera tego slowa to " << test[1];








	return 0;
}