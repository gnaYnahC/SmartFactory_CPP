#include <iostream>

using namespace std;

class Elec { //�߻� Ŭ����
public:
	virtual void on() = 0; // �߻�޼ҵ�
	virtual void off() = 0;
};

class TV : public Elec{
	//�θ�Ŭ�������� ��ӹ��� ���������Լ�(�߻�)�� �������� ���� ���,
	//�ڽ� Ŭ���� ���� �߻�Ŭ������ �ȴ�.
	//��� ���������Լ��� ���� ����� �Ѵ�.

public:
	void on() {
		cout << "TV On" << endl;
	}
	void off() {
		cout << "TV Off" << endl;
	}
	// �ϸ� �޼ҵ尡 �־ �߻�޼ҵ尡 ������ �߻�Ŭ�����̴�.
	void test() {
		cout << "test" << endl;
	}
};

class Radio :public Elec {

public:
	void on() {
		cout << "���� On" << endl;
	}
	void off() {
		cout << "���� Off" << endl;
	}
};


int main() {
	//�߻�Ŭ�����δ� �ν��Ͻ�(��ü) ���� �Ұ�
	//Elec e;

	//�θ�Ŭ�������� ��ӹ��� ���������Լ�(�߻�)�� �������� ���� ���,
	//�ڽ� Ŭ���� ���� �߻�Ŭ������ �ȴ�.
	//TV tv;
	TV tv;
	tv.on();
	tv.off();
	tv.test();

	Radio rd;
	rd.on();
	rd.off();


}