#include <iostream>
#include <cstdlib>
using namespace std;

//������ ���� �̴� �ҽ��ڵ�

int main() {
	// srand(i): i�� ���ڰ� ����� �� ���� �Ź� �ٸ� ���� ����
	// time(NULL) 191N�⵵ ������ �ʴ����� ��, ���� ���ڰ� Ŀ��
	srand(time(NULL));
	// rand(): ������ ���� ����(���� ���� ���� �� ����)
	int num = rand();

	cout << num << endl;

	// 0 ~ 25 ������ ����
	int random_num = num & 26;
	
	//1~25 ������ ����
	//int random_num = (num & 25)+1;

	cout << random_num << endl;
}