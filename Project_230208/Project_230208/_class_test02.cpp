#include <iostream>
#include <string>
using namespace std;

class Charactor {
	int level;
	string name;
	int item;
public:

	Charactor(string name) {
		this->name = name;
		level = 0;
		item = 0;
	}

	void name_change(string name) {
		this->name = name;
	}
	void level_up() {
		++level;
		cout << "���� ��!!!!!!!!\n" << "���� ����: " << level << "\n";
	}
	void get_item() {
		item++;
		cout << "���� item ����: " << item << "\n";
	}
	void set_item() {
		--item;
		cout << "������ ���! \n" << "���� item ����: " << item << "\n";
	}
	void char_status() {
		cout << "�������� ĳ����: " << name << "\nĳ���� ����: " << level << "\n���� ������ ����: " << item << "\n";
	}
};

int main() {
	string name;
	int cnt;
	

	cout << "���� �Ǵ� ������ ĳ���� �� �Է�: ";
	cin >> name;
	Charactor game(name);
	
	while(1) {

		cout << "���� Ű �Է�: ";
		cin >> cnt;

		switch (cnt)
		{
		case 0:
			return -1;

		case 1:
			cout << "������ ĳ���� ��: ";
			cin >> name;
			game.name_change(name);
			break;

		case 2:
			game.level_up();
			break;

		case 3:
			game.get_item();
			break;

		case 4:
			game.set_item();
			break;

		case 5:
			game.char_status();
			break;
		}
	}

}