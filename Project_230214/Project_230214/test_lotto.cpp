#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;

//로또번호 추첨하기

int main() {
	std::srand(time(NULL));
	int lotto_num[6] = {};
	int count = 0;
	
	while (count<6) {
		bool Joong = false;
		int num = rand();
		int random_num = num % 45 + 1;
		for (int i = 0; i < count; i++) {
			if (lotto_num[i] == random_num) {
				Joong = true;
			}
		}
		if (!Joong) {
			lotto_num[count] = random_num;
			++count;
		}
	}
	for (int i = 0; i < 6; i++) {
		cout << i + 1 << "번째 숫자!!! " << lotto_num[i] << endl;
	}
	return 0;
}