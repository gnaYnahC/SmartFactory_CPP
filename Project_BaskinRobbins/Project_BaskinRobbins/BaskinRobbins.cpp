#include <iostream>
#include <cstdlib>  // rand() 사용을 위한 헤더파일
#include <ctime>    // srand() 사용을 위한 헤더파일

// using namespace std; 
// 코드를 작성할 때 편리하지만, 이름 충돌 문제가 발생할 수 있으므로 피하는 것이 좋다.
using std::cin;
using std::cout;
using std::endl;

const int MAX_NUMBER = 3;       // 입력 가능한 숫자의 최댓값
const int WINNING_NUMBER = 31;  // 승리하기 위해 가져야 하는 숫자

int main() {
  int currentCount = 0;
  bool win = true;         // 승자
  bool isUserTurn = true;  // false: 컴퓨터, true: 사용자

  srand((unsigned int)time(NULL));  // rand() 함수를 사용하기 전에 한 번만 호출

  while (currentCount < WINNING_NUMBER) {
    int num = 0;

    if (isUserTurn) {
      cout << "1에서 " << MAX_NUMBER << "까지의 숫자를 입력하세요: ";
      cin >> num;
      while (num < 1 ||
             num > MAX_NUMBER) {  // 입력값이 유효한 범위 내에 있는지 확인
        cout << "잘못된 입력입니다!!\n1에서 " << MAX_NUMBER
             << "까지의 숫자를 입력하세요: ";
        cin >> num;
      }
      isUserTurn = false;
    } else {
      num = rand() % MAX_NUMBER + 1;
      cout << "컴퓨터 입력: ";
      cout << num << endl;
      isUserTurn = true;
    }

    currentCount += num;
    cout << currentCount << endl;
  }
  cout << endl;
  isUserTurn ? cout << "심판: 컴퓨터가 31을 말해버렸습니다!!\n사용자의 승리!"
             : cout << "심판 : 사용자가 31을 말해버렸습니다!!\n컴퓨터의 승리!";

  return 0;
}