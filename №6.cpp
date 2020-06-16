//6. Написать функцию, которая возвращает расстояние Евклида
#include <iostream>
#include <math.h>
using namespace std;
float fun(float x, float x1, float y, float y1, float z, float z1) {
	float a;
	a = sqrt(pow((x - x1), 2) + pow((y - y1), 2) + pow((z - z1), 2));
	return a;
}
int main() {
	float x, x1, y, y1, z, z1, s;
	cout << "x x1 y y1 z z1="; cin >> x >> x1 >> y >> y1 >> z >> z1;
	s = fun(x, x1, y, y1, z, z1);
	cout << s << endl;
	system("pause");
	return 0;
}
