#include <iostream>
#include <Windows.h>
using namespace std;

int main() {

	bool timeAttack = false;
	while (timeAttack == false) {
		cin >>
		Sleep(30000);
		if (timeAttack == true) {
			cout << "시간 초과!";
		}
	}
	cout << "30초 후 다음 코드 실행";
	Sleep(30000);
	if (timeAttack == true) {
		cout << "시간 초과!";
	}
}