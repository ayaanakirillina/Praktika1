//�������� ������� �������� ������� � �������.
//1 ������ ��� 0,0174533 ���.

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
	cout << "������ v radianax " << radian << endl;
	system("pause");
	return 0;
}
