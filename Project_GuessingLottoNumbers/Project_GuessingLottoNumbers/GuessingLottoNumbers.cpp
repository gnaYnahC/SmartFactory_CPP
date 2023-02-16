#include <iostream>
#include <cstdlib>

using namespace std;
//using std::cout;

int main() {
	int comp_num[6] = {}; // 컴퓨터 숫자 배열
	int c = 0;
	srand(time(NULL));

	while (c < 6) {
		int num = rand();
		int rand_num = num & 24 + 1; // 1~ 25 까지의 수 뽑기
		bool same_num = false; // 중복 숫자 제외 bool형

		for (int i = 0; i < 6; i++) {
			if (comp_num[i] == rand_num) { // 중복시 제외
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
		cout << "1 ~ 25 사이의 숫자를 입력해주세요: ";
		cin >> user_num[i];
		while (user_num[i] > 26 || user_num[i] <= 0) {
			cout << "잘못된 숫자입니다. 다시 입력해주세요: ";
			cin >> user_num[i];
			break;
		}
	}

	int collect = 0; // 일치하는 숫자 개수
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			if (comp_num[i] == user_num[j]) {
				collect++;
			}
		}
		cout << "당첨번호 공개!!\n";

		for (int i = 0; i < 6; i++) {
			cout << comp_num[i] << " ";
		}

		cout << endl;
		cout << "당신의 등수를 알려드립니다! \n";

		if (collect == 0) {
			cout << "일치하는 숫자 0개: 7등임다.." << endl;
		}
		else if (collect == 1) {
			cout << "일치하는 숫자 1개: 6등임다.." << endl;
		}
		else if (collect == 2) {
			cout << "일치하는 숫자 2개: 5등임다.." << endl;
		}
		else if (collect == 3) {
			cout << "일치하는 숫자 3개: 4등임다.." << endl;
		}
		else if (collect == 4) {
			cout << "일치하는 숫자 4개: 3등임다!" << endl;
		}
		else if (collect == 5) {
			cout << "일치하는 숫자 2개: 2등임다!" << endl;
		}
		else {
			cout << "일등!! 축하드립니다!" << endl;
		}
		cout << "사용자가 입력한 숫자: ";
		for (int i = 0; i < 6; i++) {
			cout << user_num[i] << " ";
		}
	}
}