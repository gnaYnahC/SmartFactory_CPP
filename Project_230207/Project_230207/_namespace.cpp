#include <iostream>
// std namespace ���� �ִ� ��� ��ҿ� ���� ������ Ǯ���ش�.
//using namespace std; 
// ������ Ǫ�� ���
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
	// num �νĺҰ�
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
	// namespace���� ������ num
	//num = 1;  //ns_test::num = 1; � num���� �����ϱ� ���� �ʾƼ� ��õ���� ����

	cout << ns_test::num << endl;
	//  using namespace ns_test; ����
	cout << num << endl; 

	test();
	aaa();
	cout << endl;
	
	num = 5;
	cout << num << endl;
	ns_test::ns_test1::num; // ���ӽ����̽� �ȿ� ���ӽ����̽�

}
