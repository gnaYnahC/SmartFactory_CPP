#include <iostream>
#include <vector> // 벡터사용시 라이브러리 불러와야함

int main() {
	//std::vector<int> v; //원소의 값(자료형)이 뭐가 될지 적어줘야 함 ex/ std::string등
	//std::vector<int> v(3);//크기가 3인 벡터 배열 생성, 콤마 뒤에 숫자가 없으면 원소를 모두 0으로 초기화
	//std::vector<int> v(3,1); //크기가 3인 벡터 배열 선언, 원소를 모두 1로 초기화
	//std::vector<int> v = { 1,2,3 };//크기가 3인 벡터 배열 선언 및 초기화
	
	std::vector<int> v = { 1, 2, 3, 4, 5 };
	for (int i = 0; i < v.size(); i++) { //.size() = 메서드(변수)의 크기를 알 수 있음
		std::cout << v.at(i) << " ";
		//std::cout << v[i] << " ";
	}

	std::cout << "\n";
	//---------동적 배열------------

	int num;
	std::cin >> num;
	std::vector<int> e;
	e.assign(num, 1); //e가 할당이 된다 num의 크기만큼, 원소는 모두 1로 초기화 

	for (int i = 0; i < e.size(); i++) { 
		std::cout << e.at(i) << " ";
	}

	
	std::cout << "\n";

	std::vector<int> c = { 1,2,3,4,5 };
	// .resize() 크기 지정, 0으로 초기화
	c.resize(6, 6);

	c.push_back(7); //배열의 마지막에 원하는 원소를 추가한다. {1,2,3,4,5,7}

	for (int i = 0; i < c.size(); i++) { 
		std::cout << c.at(i) << " ";
	}



	std::cout << "\n";

	std::vector<int> t = { 1,2,3,4,5 };
	// .resize() 크기 지정, 0으로 초기화
	t.resize(6, 6); // {1,2,3,4,5,6}

	t.push_back(7); //배열의 마지막에 원하는 원소를 추가한다. {1,2,3,4,5,6,7}
	t.pop_back(); //배열의 마지막 원소를 뺀다. {1,2,3,4,5,6}
	for (int i = 0; i < t.size(); i++) {
		std::cout << t.at(i) << " ";
	}

	std::cout << "\n";

	std::cout << t.front() << " "; //가장 앞에있는 원소 출력 {1}
	std::cout << t.back() << " "; //가장 마지막에있는 원소 출력 {6}
	
	std::cout << "\n";

	
	std::vector<int> o = { 1,2,3,4,5 };
	//인덱스 지정 전 .begin (=주소 출력)
	o.insert(o.begin() + 2, 99);//원하는 위치에 원하는 값을 넣을 수 있다. 2번 인덱스에 99 추가
	for (int i = 0; i < o.size(); i++) {
		std::cout << o.at(i) << " ";
	}


	std::cout << "\n";

	std::vector<int> r = { 1,2,3,4,5,6,7 };
	//r.erase(r.begin() + 3); //3번 인덱스 삭제
	r.erase(r.begin() + 2, r.begin()+5); // 2 ~ 4 인덱스 삭제
	for (int i = 0; i < r.size(); i++) {
		std::cout << r.at(i) << " ";
	}


	//std::cout << "\n";

	//
	//std::vector<int> q = { 1,2,3,4,5 };
	//q.clear(); // 배열의 모든 원소 삭제. size 0
	//for (int i = 0; i < q.size(); i++) {
	//	std::cout << q.at(i) << " ";
	//}

	

	std::cout << "\n";
	for (int rr : r) { //&를 안쓰면 아예 다른 메모리를 가진 변수가 새로 생성된 것 뿐이다.
		rr = rr + 1; 
	}
	for (int rr : r) {
		std::cout << rr << " ";
	}



	std::cout << "\n";
	for (int &rr : r) {
		rr = rr + 1; // 모든 원자에 +1
	}
	for (int rr : r) {
		std::cout << rr << " ";
	}


	std::cout << "\n";
	// ------------------2차원 벡터 --------------

	std::vector<std::vector<int>> v2; //크기가 지정되어 있지 않음
	v2.assign(3, std::vector<int>(2)); //행의 크기3, 열의크기2 . 0으로 초기화

	for (int i = 0; i < v2.size(); i++) { //v2.size() == 행의 크기 == 3
		for (int j = 0; j < v2.at(i).size(); j++) { //v2.at(i) == v2[i] == 첫 번째 배열의 크기 == 2
			std::cout << v2.at(i).at(j) << " ";
			//std::cout << v2[i][j] << " ";
		}
		std::cout << std::endl;
	}


	std::cout << "\n";

	for (std::vector<int> vv2 : v2) {
		for (int vvv2 : vv2) {
			std::cout << vvv2 << " ";
		}
		std::cout << std::endl;
	}
}