#include <ctime>
#include <iostream>

using namespace std;

bool isDuplicated(int arr[], int size, int num) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == num) {
      return true;
    }
  }
  return false;
}

void calculateRank(int count) {
  int rank = 7 - count;
  cout << "맞춘 개수: " << count << endl;
  cout << rank << "등 입니다! 축하합니다" << endl;
}

int main() {
  srand(time(NULL));

  const int NUMBER = 6;
  int comp_num[NUMBER] = {};
  int user_num[NUMBER] = {};

  // 컴퓨터가 1~25 중 중복 없이 6개의 수를 무작위로 선택
  for (int i = 0; i < NUMBER; i++) {
    comp_num[i] = rand() % 25 + 1;
    // 중복된 숫자가 선택되었을 경우 i를 감소시켜서 다시 무작위 수를 선택하도록 함
    for (int j = 0; j < i; j++) {
      if (comp_num[i] == comp_num[j]) {
        i--;
        break;
      }
    }
  }

  // 플레이어로부터 1~25 중 중복 없이 6개의 수를 입력받아 user_num 배열에 저장
  cout << "6가지의 1~25까지의 숫자를 입력해주세요" << endl;

  for (int i = 0; i < NUMBER; i++) {
    cout << i + 1 << "번째 숫자를 입력하세요 : ";
    cin >> user_num[i];
    if (user_num[i] > 25 || user_num[i] < 1) {  // 범위 지정 1~25
      cout << "범위를 벗어난 숫자입니다. 다시 입력해주세요." << endl;
      i--;
      continue;
    }
    if (isDuplicated(user_num, i, user_num[i])) {  // 중복 확인
      cout << "중복된 숫자입니다. 다시 입력해주세요." << endl;
      i--;
      continue;
    }
  }

  // comp_num에 저장된 숫자를 출력, 플레이어가 맞춘 숫자의 개수에 따라 등수를 출력
  cout << "----------------------------------------" << endl;
  cout << "당첨번호: ";
  int count = 0;
  for (int i = 0; i < NUMBER; i++) {
    cout << comp_num[i] << " ";
    // 컴퓨터가 선택한 숫자와 플레이어가 선택한 숫자를 비교하여 맞춘 숫자의 개수를 카운트
    for (int j = 0; j < NUMBER; j++) {
      if (comp_num[i] == user_num[j]) {
        count++;
        break;
      }
    }
  }
  cout << endl << endl;
  calculateRank(count);

  return 0;
}