//4. ������� �������� ������� y=f(x) �� ����� � ��������� �� -10 �� 10 � ����� 1. ������� ���������� �� ����� �������������.
#include <iostream>
using namespace std;
void fun() {
	float x, y;
	for (x = -10; x <= 10; x++) {
		y = x * x;
		cout << "y=" << y << endl;
	}
}

int main() {
	fun();
	system("pause");
}