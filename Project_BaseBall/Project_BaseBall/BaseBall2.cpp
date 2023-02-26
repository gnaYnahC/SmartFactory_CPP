#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

const int NUMBER_OF_DIGITS = 3;  // ��� ����
const int MIN_NUMBER = 1;
const int MAX_NUMBER = 9;

void generateRandomNumbers(int comp_num[]) {
  srand(time(NULL));  // �ð��� �������� ���� ����

  // �������� NUMBER_OF_DIGITS���� ���ڸ� �̾� comp_num �迭�� ���� (�ߺ� ����)
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
  int user_num[NUMBER_OF_DIGITS] = {};  // ����ڰ� ���ڸ� ���� �迭
  int strike_count = 0;                 // ��Ʈ����ũ ���� ���� ����
  int ball_count = 0;                   // �� ���� ���� ����
  int count = 0;                        // �õ��� Ƚ���� ������ ����

  cout << "���� �߱� ������ �����մϴ�!" << endl;
  while (true) {
    // ����ڿ��� NUMBER_OF_DIGITS���� ���� �Է� ����
    cout << MIN_NUMBER << "~" << MAX_NUMBER << " ������ ���� "
         << NUMBER_OF_DIGITS << "���� �Է��ϼ��� (�̿��� ����: ����): ";
    cin >> user_num[0] >> user_num[1] >> user_num[2];

    // �Է��� ���ڰ� MIN_NUMBER~MAX_NUMBER ���� ���� ������ Ȯ��
    bool valid = true;
    for (int i = 0; i < NUMBER_OF_DIGITS; i++) {
      if (user_num[i] < MIN_NUMBER || user_num[i] > MAX_NUMBER) {
        valid = false;
        break;
      }
    }
    if (!valid) {
      // ���� ���� �ȳ� �޽��� ���
      cout << "������ �����մϴ�." << endl;
      break;
    }

    // ��Ʈ����ũ�� ���� ���� ���
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

    // �õ��� Ƚ�� ���� �� ��� ���
    count++;
    cout << "���: " << strike_count << " ��Ʈ����ũ, " << ball_count << " ��"
         << endl;

    if (strike_count == NUMBER_OF_DIGITS) {
      // ���� �޽����� �õ��� Ƚ�� ���
      cout << "�����մϴ�! " << count << "ȸ���� ������ ���߼̽��ϴ�." << endl;
      break;
    }
  }
}

int main() {
  int comp_num[NUMBER_OF_DIGITS] = {};  // ��ǻ�Ͱ� ���ڸ� ������ �迭 ����

  generateRandomNumbers(comp_num);  // ��ǻ�� ���� �������� ����

  playBaseball(comp_num);  // ���� �߱� ���� ����

  return 0;
}
