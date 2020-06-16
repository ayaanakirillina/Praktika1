//перевести в 2 сс с помощью функции
//страшная функция !!! плохой пример (Г.Алексей)

#include<iostream>
using namespace std;
void f(int n) {
	if (n != 0) {
		f(n / 2); //внутри функции вызывает сама себя
		cout << n % 2; //выводит остаток
	}
}

void main() {
	int n;
	cin >> n; 
	f(n);
	cout << endl;
	system("pause");

}