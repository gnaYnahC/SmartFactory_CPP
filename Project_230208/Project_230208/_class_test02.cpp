#include <iostream>
#include <string>
using namespace std;

// Charactor Ŭ���� ����
class Charactor {
	// ����, �̸�, ������ ���� ��� ����
	int level;
	string name;
	int item;

public:
	// ������
	Charactor(string name) {
		// this �����͸� ����� name ��� ������ ���ڷ� ���� name �� �Ҵ�
		this->name = name;
		level = 0; // ���� �ʱⰪ 0
		item = 0; // ������ ���� �ʱⰪ 0
	}

	// ĳ���� �̸� ���� �޼���
	void name_change(string name) {
		// this �����͸� ����� name ��� ������ ���ڷ� ���� name �� �Ҵ�
		this->name = name;
	}

	// ���� �� �޼���
	void level_up() {
		++level; // ���� 1 ����
		cout << "���� ��!!!!!!!!\n" << "���� ����: " << level << "\n";
	}

	// ������ ȹ�� �޼���
	void get_item() {
		item++; // ������ ���� 1 ����
		cout << "���� item ����: " << item << "\n";
	}

	// ������ ��� �޼���
	void set_item() {
		--item; // ������ ���� 1 ����
		cout << "������ ���! \n" << "���� item ����: " << item << "\n";
	}

	// ĳ���� ���� ��� �޼���
	void char_status() {
		cout << "�������� ĳ����: " << name << "\nĳ���� ����: " << level << "\n���� ������ ����: " << item << "\n";
	}
};

// ���� ĳ���� ���� �� ����
int main() {
    // ĳ���� ���� ������ ����
	string name;
	// ĳ���� ���ۿ� �ʿ��� ����
	int cnt;
	
    // ������ ĳ���� �� �Է�
	cout << "���� �Ǵ� ������ ĳ���� �� �Է�: ";
	cin >> name;
	
    // ĳ���� ��ü ����
	Charactor game(name);
	
	// ���� ����
	while(1) {
        // ���� Ű �Է�
		cout << "���� Ű �Է�: ";
		cin >> cnt;

        // ���� Ű�� ���� �б�
		switch (cnt)
		{
            // ���� ����
		case 0:
			return -1;

            // ĳ���� �� ����
		case 1:
			cout << "ĳ���� �� ����: ";
			cin >> name;
			game.name_change(name);
			break;

            // ĳ���� ���� ��
		case 2:
			game.level_up();
			break;

            // ������ ȹ��
		case 3:
			game.get_item();
			break;

            // ������ ����
		case 4:
			game.set_item();
			break;

            // ĳ���� ���� ���
		case 5:
			game.char_status();
			break;
		}
	}
}