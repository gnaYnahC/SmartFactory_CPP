//����ü

#include <iostream>
using namespace std;

struct Position {
	int x;
	int y;
};

int main() {
	Position p; // ����ü ���� ����
	p.x = 3; // �Ҵ�
	p.y = 4; // �Ҵ�

	Position p1; // ������ ���� ���� ����
	p1.x = 5; // p�� x�� �ٸ�
	p1.y = 7;

	Position p2;

	//����ü ���� ������ �Ҵ��� �ѹ��� �ϴ� ���
	//Position p = { 3, 4 };




	//cout << p << endl; //�ȵ˴ϴ�!
	cout << p.x << " " << p.y << endl;
	cout << p1.x << " " << p1.y << endl;
	cout << p2.x << " " << p2.y << endl;
}