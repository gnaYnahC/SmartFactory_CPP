#include <iostream>
<<<<<<< HEAD
#include <cstdlib>  // rand() ����� ���� �������
#include <ctime>    // srand() ����� ���� �������
=======
// rand()���
#include <cstdlib>
>>>>>>> 0e7450c2ed7d74db837057712a06ac7fe2d5bb45

// using namespace std; 
// �ڵ带 �ۼ��� �� ��������, �̸� �浹 ������ �߻��� �� �����Ƿ� ���ϴ� ���� ����.
using std::cin;
using std::cout;
using std::endl;

const int MAX_NUMBER = 3;       // �Է� ������ ������ �ִ�
const int WINNING_NUMBER = 31;  // �¸��ϱ� ���� ������ �ϴ� ����

int main() {
<<<<<<< HEAD
  int currentCount = 0;
  bool win = true;         // ����
  bool isUserTurn = true;  // false: ��ǻ��, true: �����

  srand((unsigned int)time(NULL));  // rand() �Լ��� ����ϱ� ���� �� ���� ȣ��

  while (currentCount < WINNING_NUMBER) {
    int num = 0;

    if (isUserTurn) {
      cout << "1���� " << MAX_NUMBER << "������ ���ڸ� �Է��ϼ���: ";
      cin >> num;
      while (num < 1 ||
             num > MAX_NUMBER) {  // �Է°��� ��ȿ�� ���� ���� �ִ��� Ȯ��
        cout << "�߸��� �Է��Դϴ�!!\n1���� " << MAX_NUMBER
             << "������ ���ڸ� �Է��ϼ���: ";
        cin >> num;
      }
      isUserTurn = false;
    } else {
      num = rand() % MAX_NUMBER + 1;
      cout << "��ǻ�� �Է�: ";
      cout << num << endl;
      isUserTurn = true;
    }

    currentCount += num;
    cout << currentCount << endl;
  }
  cout << endl;
  isUserTurn ? cout << "����: ��ǻ�Ͱ� 31�� ���ع��Ƚ��ϴ�!!\n������� �¸�!"
             : cout << "���� : ����ڰ� 31�� ���ع��Ƚ��ϴ�!!\n��ǻ���� �¸�!";

=======
  int num = 0;
  int count = 0;
  bool winn = true;  // ����
  bool turn = true;  // false: �����, true: ��ǻ��

  while (count < 31) {
    if (turn) {
      cout << "1���� 3������ ���ڸ� �Է��ϼ���: ";
      cin >> num;
      if (num < 1 || num > 3) {
        cout << "����: �߸��� �Է��Դϴ�!!\n1���� 3������ ���ڸ� �Է��ϼ���: ";
        cin >> num;
      }
      turn = false;
    }

    else {
      num = rand() % 3 + 1;
      cout << "��ǻ�� �Է�: ";
      cout << num << endl;
      turn = true;
    }

    for (int i = 0; i < num; i++) {
      count += 1;
      if (count > 31) {
        break;
      }
      cout << count << endl;
    }
  }
  cout << endl;
  turn ? cout << "����: ��ǻ�Ͱ� 31�� ���ع��Ƚ��ϴ�!!\n������� �¸�!"
       : cout << "���� : ����ڰ� 31�� ���ع��Ƚ��ϴ�!!\n��ǻ���� �¸�!";

>>>>>>> 0e7450c2ed7d74db837057712a06ac7fe2d5bb45
  return 0;
}