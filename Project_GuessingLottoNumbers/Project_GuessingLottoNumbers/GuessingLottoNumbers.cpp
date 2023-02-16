#include <iostream>
#include <cstdlib>

using namespace std;
//using std::cout;

int main() {
	int comp_num[6] = {}; // ��ǻ�� ���� �迭
	int c = 0;
	srand(time(NULL));

	while (c < 6) {
		int num = rand();
		int rand_num = num & 24 + 1; // 1~ 25 ������ �� �̱�
		bool same_num = false; // �ߺ� ���� ���� bool��

		for (int i = 0; i < 6; i++) {
			if (comp_num[i] == rand_num) { // �ߺ��� ����
				same_num = true;
				break;
			}
		}

		if (!same_num) {
			comp_num[c] = rand_num;
			c++;
		}
	}

	int user_num[6] = {};
	for (int i = 0; i < 6; i++) {
		cout << "1 ~ 25 ������ ���ڸ� �Է����ּ���: ";
		cin >> user_num[i];
		while (user_num[i] > 26 || user_num[i] <= 0) {
			cout << "�߸��� �����Դϴ�. �ٽ� �Է����ּ���: ";
			cin >> user_num[i];
			break;
		}
	}

	int collect = 0; // ��ġ�ϴ� ���� ����
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			if (comp_num[i] == user_num[j]) {
				collect++;
			}
		}
		cout << "��÷��ȣ ����!!\n";

		for (int i = 0; i < 6; i++) {
			cout << comp_num[i] << " ";
		}

		cout << endl;
		cout << "����� ����� �˷��帳�ϴ�! \n";

		if (collect == 0) {
			cout << "��ġ�ϴ� ���� 0��: 7���Ӵ�.." << endl;
		}
		else if (collect == 1) {
			cout << "��ġ�ϴ� ���� 1��: 6���Ӵ�.." << endl;
		}
		else if (collect == 2) {
			cout << "��ġ�ϴ� ���� 2��: 5���Ӵ�.." << endl;
		}
		else if (collect == 3) {
			cout << "��ġ�ϴ� ���� 3��: 4���Ӵ�.." << endl;
		}
		else if (collect == 4) {
			cout << "��ġ�ϴ� ���� 4��: 3���Ӵ�!" << endl;
		}
		else if (collect == 5) {
			cout << "��ġ�ϴ� ���� 2��: 2���Ӵ�!" << endl;
		}
		else {
			cout << "�ϵ�!! ���ϵ帳�ϴ�!" << endl;
		}
		cout << "����ڰ� �Է��� ����: ";
		for (int i = 0; i < 6; i++) {
			cout << user_num[i] << " ";
		}
	}
}