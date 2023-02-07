#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;


namespace seoul {
	int addr = 2580;
	std::string land = "경복궁";

	namespace busan {
		int addr = 3910;
		std::string land = "롯데월드";
	}
}

using namespace seoul::busan;

int main() {

	cout << "부산 지역번호: " << addr << endl;
	cout << "부산 랜드마크: " << land << endl;

	cout << "서울 지역번호: " << seoul::addr << endl;
	cout << "서울 랜드마크: " << seoul::land << endl;
}