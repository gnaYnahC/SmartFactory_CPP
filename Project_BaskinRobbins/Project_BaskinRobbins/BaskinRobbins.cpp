#include <iostream>
//rand()사용
#include <cstdlib>

using namespace std;

int main() {
	int num =0;
	int count = 0;
	bool winn = true; // 승자
	bool turn = true; // false: 사용자, true: 컴퓨터

	while (count < 31) {

		if (turn) {
			cout << "1에서 3까지의 숫자를 입력하세요: ";
			cin >> num;
			if (num < 1 || num > 3) {
				cout << "심판: 잘못된 입력입니다!!\n1에서 3까지의 숫자를 입력하세요: ";
				cin >> num;
			}
			turn = false;
		}

		else{
			num = rand() % 3 + 1;
			cout << "컴퓨터 입력: ";
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
	turn ? cout << "심판: 컴퓨터가 31을 말해버렸습니다!!\n사용자의 승리!" : cout << "심판 : 사용자가 31을 말해버렸습니다!!\n컴퓨터의 승리!";


	return 0;
}