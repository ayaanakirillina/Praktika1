//ортогональны векторы
#include <iostream>
using namespace std;
void sad(int*a, int*b, int n) {
	int i;
	for (i = 0; i < n; i++)
		cin >> a[i];
	cout << endl;
	for (i = 0; i < n; i++)
		cin >> b[i];
	int s = 0;
	for (i = 0; i < n; i++)
		s += a[i] * b[i];
	if (s == 0) cout << "YES\n";
	else cout << "NO\n";
}
int main() {
	int n;
	cin >> n;
	int a[10], b[10];
	sad(a, b, n);
	system("pause");
}