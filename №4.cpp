//4. Вывести значение функции y=f(x) на экран в диапазоне от -10 до 10 с шагом 1. Функция выбирается по своим предпочтениям.
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