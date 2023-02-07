#include <iostream>
// std namespace 내에 있는 모든 요소에 대한 접근을 풀어준다.
//using namespace std; 
// 개별로 푸는 방법
using std::cout;
using std::cin;
using std::endl;


namespace ns_test {
	int num = 0;
	namespace ns_test1 {
		int num = 1;
	}
	void test() {
		cout << num << endl;
		cout << "hello world" << endl;
	}
}

void bbb() {
	// num 인식불가
	//num = 10;
	ns_test::num = 15;
	cout << "bbb";
}

using namespace ns_test;



void aaa() {
	num = 7;
	cout << "aaa: " << num;
}

int main(){
	// namespace에서 가져온 num
	//num = 1;  //ns_test::num = 1; 어떤 num인지 구분하기 쉽지 않아서 추천하지 않음

	cout << ns_test::num << endl;
	//  using namespace ns_test; 선언
	cout << num << endl; 

	test();
	aaa();
	cout << endl;
	
	num = 5;
	cout << num << endl;
	ns_test::ns_test1::num; // 네임스페이스 안에 네임스페이스

}
