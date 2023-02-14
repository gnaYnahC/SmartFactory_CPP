#include <iostream>
#include <cstdlib>
using namespace std;

//랜덤한 숫자 뽑는 소스코드

int main() {
	// srand(i): i의 숫자가 변경될 때 마다 매번 다른 값을 생성
	// time(NULL) 191N년도 부터의 초단위가 들어감, 점점 숫자가 커짐
	srand(time(NULL));
	// rand(): 랜덤한 숫자 생성(랜덤 숫자 생성 후 고정)
	int num = rand();

	cout << num << endl;

	// 0 ~ 25 사이의 난수
	int random_num = num & 26;
	
	//1~25 사이의 난수
	//int random_num = (num & 25)+1;

	cout << random_num << endl;
}