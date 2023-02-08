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
		cout << "레벨 업!!!!!!!!\n" << "현재 레벨: " << level << "\n";
	}
	void get_item() {
		item++;
		cout << "현재 item 갯수: " << item << "\n";
	}
	void set_item() {
		--item;
		cout << "아이템 사용! \n" << "현재 item 갯수: " << item << "\n";
	}
	void char_status() {
		cout << "접속중인 캐릭터: " << name << "\n캐릭터 레벨: " << level << "\n보유 아이템 갯수: " << item << "\n";
	}
};

int main() {
	string name;
	int cnt;
	

	cout << "접속 또는 생성할 캐릭터 명 입력: ";
	cin >> name;
	Charactor game(name);
	
	while(1) {

		cout << "조작 키 입력: ";
		cin >> cnt;

		switch (cnt)
		{
		case 0:
			return -1;

		case 1:
			cout << "변경할 캐릭터 명: ";
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