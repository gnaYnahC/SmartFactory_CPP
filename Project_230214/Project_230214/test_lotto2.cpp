#include <iostream>
#include <cstdlib>
using namespace std;

//�ζǹ�ȣ ��÷�ϱ� �ǽ�

int main() {
	std::srand(time(NULL));
	int lotto[6] = {};
	int count = 0;
	while (count<6) {
		bool fact = false;
		int num = rand() & 45 + 1;
		for (int i = 0; i < count; i++) {
			if (lotto[i] == num) {
				fact = true;
				break;
			}
		}
		if (!fact) {
			lotto[count] = num;
			count++;
		}

	}
	for (int i = 0; i < 6; i++) {
		cout << i + 1 << "��° ��ȣ��~~!!!" << lotto[i] << endl;;
	}

}