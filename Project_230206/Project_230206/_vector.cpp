#include <iostream>
#include <vector> // ���ͻ��� ���̺귯�� �ҷ��;���

int main() {
	//std::vector<int> v; //������ ��(�ڷ���)�� ���� ���� ������� �� ex/ std::string��
	//std::vector<int> v(3);//ũ�Ⱑ 3�� ���� �迭 ����, �޸� �ڿ� ���ڰ� ������ ���Ҹ� ��� 0���� �ʱ�ȭ
	//std::vector<int> v(3,1); //ũ�Ⱑ 3�� ���� �迭 ����, ���Ҹ� ��� 1�� �ʱ�ȭ
	//std::vector<int> v = { 1,2,3 };//ũ�Ⱑ 3�� ���� �迭 ���� �� �ʱ�ȭ
	
	std::vector<int> v = { 1, 2, 3, 4, 5 };
	for (int i = 0; i < v.size(); i++) { //.size() = �޼���(����)�� ũ�⸦ �� �� ����
		std::cout << v.at(i) << " ";
		//std::cout << v[i] << " ";
	}

	std::cout << "\n";
	//---------���� �迭------------

	int num;
	std::cin >> num;
	std::vector<int> e;
	e.assign(num, 1); //e�� �Ҵ��� �ȴ� num�� ũ�⸸ŭ, ���Ҵ� ��� 1�� �ʱ�ȭ 

	for (int i = 0; i < e.size(); i++) { 
		std::cout << e.at(i) << " ";
	}

	
	std::cout << "\n";

	std::vector<int> c = { 1,2,3,4,5 };
	// .resize() ũ�� ����, 0���� �ʱ�ȭ
	c.resize(6, 6);

	c.push_back(7); //�迭�� �������� ���ϴ� ���Ҹ� �߰��Ѵ�. {1,2,3,4,5,7}

	for (int i = 0; i < c.size(); i++) { 
		std::cout << c.at(i) << " ";
	}



	std::cout << "\n";

	std::vector<int> t = { 1,2,3,4,5 };
	// .resize() ũ�� ����, 0���� �ʱ�ȭ
	t.resize(6, 6); // {1,2,3,4,5,6}

	t.push_back(7); //�迭�� �������� ���ϴ� ���Ҹ� �߰��Ѵ�. {1,2,3,4,5,6,7}
	t.pop_back(); //�迭�� ������ ���Ҹ� ����. {1,2,3,4,5,6}
	for (int i = 0; i < t.size(); i++) {
		std::cout << t.at(i) << " ";
	}

	std::cout << "\n";

	std::cout << t.front() << " "; //���� �տ��ִ� ���� ��� {1}
	std::cout << t.back() << " "; //���� ���������ִ� ���� ��� {6}
	
	std::cout << "\n";

	
	std::vector<int> o = { 1,2,3,4,5 };
	//�ε��� ���� �� .begin (=�ּ� ���)
	o.insert(o.begin() + 2, 99);//���ϴ� ��ġ�� ���ϴ� ���� ���� �� �ִ�. 2�� �ε����� 99 �߰�
	for (int i = 0; i < o.size(); i++) {
		std::cout << o.at(i) << " ";
	}


	std::cout << "\n";

	std::vector<int> r = { 1,2,3,4,5,6,7 };
	//r.erase(r.begin() + 3); //3�� �ε��� ����
	r.erase(r.begin() + 2, r.begin()+5); // 2 ~ 4 �ε��� ����
	for (int i = 0; i < r.size(); i++) {
		std::cout << r.at(i) << " ";
	}


	//std::cout << "\n";

	//
	//std::vector<int> q = { 1,2,3,4,5 };
	//q.clear(); // �迭�� ��� ���� ����. size 0
	//for (int i = 0; i < q.size(); i++) {
	//	std::cout << q.at(i) << " ";
	//}

	

	std::cout << "\n";
	for (int rr : r) { //&�� �Ⱦ��� �ƿ� �ٸ� �޸𸮸� ���� ������ ���� ������ �� ���̴�.
		rr = rr + 1; 
	}
	for (int rr : r) {
		std::cout << rr << " ";
	}



	std::cout << "\n";
	for (int &rr : r) {
		rr = rr + 1; // ��� ���ڿ� +1
	}
	for (int rr : r) {
		std::cout << rr << " ";
	}


	std::cout << "\n";
	// ------------------2���� ���� --------------

	std::vector<std::vector<int>> v2; //ũ�Ⱑ �����Ǿ� ���� ����
	v2.assign(3, std::vector<int>(2)); //���� ũ��3, ����ũ��2 . 0���� �ʱ�ȭ

	for (int i = 0; i < v2.size(); i++) { //v2.size() == ���� ũ�� == 3
		for (int j = 0; j < v2.at(i).size(); j++) { //v2.at(i) == v2[i] == ù ��° �迭�� ũ�� == 2
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