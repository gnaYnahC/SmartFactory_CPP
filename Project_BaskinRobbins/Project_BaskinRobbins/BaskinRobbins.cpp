#include <iostream>
//rand()���
#include <cstdlib>

using namespace std;

int main() {
	int num =0;
	int count = 0;
	bool winn = true; // ����
	bool turn = true; // false: �����, true: ��ǻ��

	while (count < 31) {

		if (turn) {
			cout << "1���� 3������ ���ڸ� �Է��ϼ���: ";
			cin >> num;
			if (num < 1 || num > 3) {
				cout << "����: �߸��� �Է��Դϴ�!!\n1���� 3������ ���ڸ� �Է��ϼ���: ";
				cin >> num;
			}
			turn = false;
		}

		else{
			num = rand() % 3 + 1;
			cout << "��ǻ�� �Է�: ";
			cout << num << endl;
			turn = true;
		}

		for (int i = 0; i < num; i++) {
			count += 1;
			if (count > 31) {
				break;
			}
			cout << count << endl;
		}
	}
	cout << endl;
	turn ? cout << "����: ��ǻ�Ͱ� 31�� ���ع��Ƚ��ϴ�!!\n������� �¸�!" : cout << "���� : ����ڰ� 31�� ���ع��Ƚ��ϴ�!!\n��ǻ���� �¸�!";


	return 0;
}