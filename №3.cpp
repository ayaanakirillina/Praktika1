//��������� � 2 �� � ������� �������
//�������� ������� !!! ������ ������ (�.�������)

#include<iostream>
using namespace std;
void f(int n) {
	if (n != 0) {
		f(n / 2); //������ ������� �������� ���� ����
		cout << n % 2; //������� �������
	}
}

void main() {
	int n;
	cin >> n; 
	f(n);
	cout << endl;
	system("pause");

}