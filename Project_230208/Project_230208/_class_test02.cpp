#include <iostream>
#include <string>
using namespace std;

// Charactor 클래스 선언
class Charactor {
	// 레벨, 이름, 아이템 개수 멤버 변수
	int level;
	string name;
	int item;

public:
	// 생성자
	Charactor(string name) {
		// this 포인터를 사용해 name 멤버 변수에 인자로 받은 name 값 할당
		this->name = name;
		level = 0; // 레벨 초기값 0
		item = 0; // 아이템 개수 초기값 0
	}

	// 캐릭터 이름 변경 메서드
	void name_change(string name) {
		// this 포인터를 사용해 name 멤버 변수에 인자로 받은 name 값 할당
		this->name = name;
	}

	// 레벨 업 메서드
	void level_up() {
		++level; // 레벨 1 증가
		cout << "레벨 업!!!!!!!!\n" << "현재 레벨: " << level << "\n";
	}

	// 아이템 획득 메서드
	void get_item() {
		item++; // 아이템 개수 1 증가
		cout << "현재 item 갯수: " << item << "\n";
	}

	// 아이템 사용 메서드
	void set_item() {
		--item; // 아이템 개수 1 감소
		cout << "아이템 사용! \n" << "현재 item 갯수: " << item << "\n";
	}

	// 캐릭터 정보 출력 메서드
	void char_status() {
		cout << "접속중인 캐릭터: " << name << "\n캐릭터 레벨: " << level << "\n보유 아이템 갯수: " << item << "\n";
	}
};

// 게임 캐릭터 생성 및 조작
int main() {
    // 캐릭터 명을 저장할 변수
	string name;
	// 캐릭터 조작에 필요한 변수
	int cnt;
	
    // 접속할 캐릭터 명 입력
	cout << "접속 또는 생성할 캐릭터 명 입력: ";
	cin >> name;
	
    // 캐릭터 객체 생성
	Charactor game(name);
	
	// 게임 루프
	while(1) {
        // 조작 키 입력
		cout << "조작 키 입력: ";
		cin >> cnt;

        // 조작 키에 따른 분기
		switch (cnt)
		{
            // 게임 종료
		case 0:
			return -1;

            // 캐릭터 명 변경
		case 1:
			cout << "캐릭터 명 변경: ";
			cin >> name;
			game.name_change(name);
			break;

            // 캐릭터 레벨 업
		case 2:
			game.level_up();
			break;

            // 아이템 획득
		case 3:
			game.get_item();
			break;

            // 아이템 장착
		case 4:
			game.set_item();
			break;

            // 캐릭터 정보 출력
		case 5:
			game.char_status();
			break;
		}
	}
}