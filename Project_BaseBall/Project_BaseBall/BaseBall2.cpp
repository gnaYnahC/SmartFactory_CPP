#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

const int NUMBER_OF_DIGITS = 3;  // 상수 선언
const int MIN_NUMBER = 1;
const int MAX_NUMBER = 9;

void generateRandomNumbers(int comp_num[]) {
  srand(time(NULL));  // 시간을 기준으로 난수 생성

  // 랜덤으로 NUMBER_OF_DIGITS개의 숫자를 뽑아 comp_num 배열에 저장 (중복 없이)
  auto generateNumber = []() {
    return rand() % (MAX_NUMBER - MIN_NUMBER + 1) + MIN_NUMBER;
  };
  bool found;
  for (int i = 0; i < NUMBER_OF_DIGITS; i++) {
    do {
      found = false;
      comp_num[i] = generateNumber();
      for (int j = 0; j < i; j++) {
        if (comp_num[j] == comp_num[i]) {
          found = true;
          break;
        }
      }
    } while (found);
  }
}

void playBaseball(int comp_num[]) {
  int user_num[NUMBER_OF_DIGITS] = {};  // 사용자가 숫자를 저장 배열
  int strike_count = 0;                 // 스트라이크 개수 저장 변수
  int ball_count = 0;                   // 볼 개수 저장 변수
  int count = 0;                        // 시도한 횟수를 저장할 변수

  cout << "숫자 야구 게임을 시작합니다!" << endl;
  while (true) {
    // 사용자에게 NUMBER_OF_DIGITS개의 숫자 입력 받음
    cout << MIN_NUMBER << "~" << MAX_NUMBER << " 사이의 숫자 "
         << NUMBER_OF_DIGITS << "개를 입력하세요 (이외의 숫자: 종료): ";
    cin >> user_num[0] >> user_num[1] >> user_num[2];

    // 입력한 숫자가 MIN_NUMBER~MAX_NUMBER 범위 내의 수인지 확인
    bool valid = true;
    for (int i = 0; i < NUMBER_OF_DIGITS; i++) {
      if (user_num[i] < MIN_NUMBER || user_num[i] > MAX_NUMBER) {
        valid = false;
        break;
      }
    }
    if (!valid) {
      // 게임 종료 안내 메시지 출력
      cout << "게임을 종료합니다." << endl;
      break;
    }

    // 스트라이크와 볼의 개수 계산
    strike_count = ball_count = 0;
    for (int i = 0; i < NUMBER_OF_DIGITS; i++) {
      if (user_num[i] == comp_num[i]) {
        strike_count++;
      } else {
        for (int j = 0; j < NUMBER_OF_DIGITS; j++) {
          if (i != j && user_num[i] == comp_num[j]) {
            ball_count++;
          }
        }
      }
    }

    // 시도한 횟수 증가 및 결과 출력
    count++;
    cout << "결과: " << strike_count << " 스트라이크, " << ball_count << " 볼"
         << endl;

    if (strike_count == NUMBER_OF_DIGITS) {
      // 축하 메시지와 시도한 횟수 출력
      cout << "축하합니다! " << count << "회만에 정답을 맞추셨습니다." << endl;
      break;
    }
  }
}

int main() {
  int comp_num[NUMBER_OF_DIGITS] = {};  // 컴퓨터가 숫자를 저장할 배열 선언

  generateRandomNumbers(comp_num);  // 컴퓨터 숫자 랜덤으로 생성

  playBaseball(comp_num);  // 숫자 야구 게임 실행

  return 0;
}
