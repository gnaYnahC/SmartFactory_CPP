#include <iostream>
using namespace std;

struct Rectangle {
	double width;
	double height;
};

int main() {
	Rectangle R;
	R.width;
	R.height;

	cout << "������ ���̸� �Է��ϼ���: ";
	cin >> R.width;
	cout << "������ ���̸� �Է��ϼ���: ";
	cin >> R.height;

	cout << "�簢���� ���̴�: "<< R.width*R.height ;
}