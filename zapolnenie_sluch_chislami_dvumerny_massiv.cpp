//заполнение случайными числами двумерный массив
#include <iostream>
#include <time.h>
using namespace std;
void vvod(int a[][10], int n) {
	int i, j;
	for (i = 0; i < n; i++) 
		for (j = 0; j < n; j++)
			a[i][j] = rand() % 21 - 10;

	}
void vyvod(int a[][10], int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}

void main() {
	int a[10][10],n;
	cin >> n;
	srand(time(NULL));
	vvod(a, n);
	vyvod(a, n);
	system("pause");
}