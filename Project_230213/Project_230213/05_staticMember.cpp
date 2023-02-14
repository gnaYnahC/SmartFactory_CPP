#include <iostream>
#include <vector>
using namespace std;

//���: �ʵ� �Ӽ� �޼ҵ� �� Ŭ������ ���ϴ� ��� ��
//static������ �Լ��� �ִ�.
//��� static����� ��� ��ü�� �ϳ��� ������ �����Ѵ�.
//name�� static��� X => ��ü���� ������ ���� �Ҵ��
//static_var�� static��� O => ��� ��ü�� ���� ������ ����
class Person {
protected:
	string name;
	static int static_var; // ����ƽ���� ����
	static int count; // ����ƽ���� ����
public:
	static void static_mathod() { //����ƽ �޼ҵ� ����, ����� ����X, �Ϲ�Ŭ������ ���� ����
		//name = "�ƹ���"; name ��ü ���X
		cout << "����ƽ �޼ҵ��Դϴ�." << endl;
	}
	static int get_count() { // static ����
		return count;
	}
	Person() {//������: ��ü ������ ����
		this->name = "�ƹ���";
		count++;
	}
	~Person() {//������: ��ü ������ ����
		this->name = "�ƹ���";
		count--;
	}
};

int Person::count = 0; // static������ �Ҵ��� ó���� �������

int main() {
//Ŭ�������� ��������, ��ü ���� �Ҵ���� �ʰ� Ŭ������ ��� ��ü�� �����ϴ� ���
//��ü�� ������ => ��ü�� �������� �ʾƵ� ���� ����
//���� �޼ҵ� �ȿ����� �Ϲ� ����� ������ �� ����! (static ������� ���� ����)
	
	//static�� �ΰ��� ��� �� ����
	Person::static_mathod(); // Ŭ������ Ÿ�� Ȯ�� ����.
	
	Person p;
	p.static_mathod(); // ��ü�� Ÿ�� Ȯ�� ����

	Person p1;

	cout << Person::get_count() << "�� " << endl;
	// 2��

	Person* p3[5];
	for (int i = 0; i < 5; i++) {
		p3[i] = new Person();
	}
	cout << Person::get_count()<< "�� " << endl;
	// 7��

	for (int i = 0; i < 5; i++) {
		delete p3[i];
	}
	cout << Person::get_count() << "�� " << endl;
	// 2��

	//vector Ȱ��
	vector<Person*> people = { new Person(), new Person()};
	cout << Person::get_count() << "�� " << endl;

	people.push_back(new Person()); // �ѳ� �߰�
	cout << Person::get_count() << "�� " << endl;
	
	int size = people.size();
	for (int i = 0; i < size; i++) {
		delete people.at(i);
	}
	for (int i = 0; i < size; i++) {
		people.pop_back();
	}
	cout << Person::get_count() << "�� " << endl;
}