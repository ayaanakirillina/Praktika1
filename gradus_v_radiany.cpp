//Написать функцию перевода градуса в радианы.
//1 градус это 0,0174533 рад.

#include <iostream>
using namespace std;
float qwerty(float gradus) {
	float pi = 3.14159265359;
	gradus = (gradus*pi) / 180;
	return gradus;
}


int main() {
	setlocale(LC_ALL, "rus");
	float gradus, radian;
	cout << "napishi gradus= ";
	cin >> gradus;
	radian = qwerty(gradus);
	cout << "градус v radianax " << radian << endl;
	system("pause");
	return 0;
}
