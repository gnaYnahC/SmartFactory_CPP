#include <ctime>
#include <iostream>

using namespace std;
<<<<<<< HEAD

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
  cout << "���� ����: " << count << endl;
  cout << rank << "�� �Դϴ�! �����մϴ�" << endl;
}
=======
>>>>>>> 0e7450c2ed7d74db837057712a06ac7fe2d5bb45

int main() {
  srand(time(NULL));

  const int NUMBER = 6;
  int comp_num[NUMBER] = {};
  int user_num[NUMBER] = {};

<<<<<<< HEAD
  // ��ǻ�Ͱ� 1~25 �� �ߺ� ���� 6���� ���� �������� ����
  for (int i = 0; i < NUMBER; i++) {
    comp_num[i] = rand() % 25 + 1;
    // �ߺ��� ���ڰ� ���õǾ��� ��� i�� ���ҽ��Ѽ� �ٽ� ������ ���� �����ϵ��� ��
    for (int j = 0; j < i; j++) {
      if (comp_num[i] == comp_num[j]) {
        i--;
        break;
      }
    }
  }
=======
	/*int number = 6;
	int comp_num[6] = {};
	int user_num[6] = {};*/
	
	const int number = 6;
	int comp_num[number] = {};
	int user_num[number] = {};

>>>>>>> 0e7450c2ed7d74db837057712a06ac7fe2d5bb45

  // �÷��̾�κ��� 1~25 �� �ߺ� ���� 6���� ���� �Է¹޾� user_num �迭�� ����
  cout << "6������ 1~25������ ���ڸ� �Է����ּ���" << endl;

  for (int i = 0; i < NUMBER; i++) {
    cout << i + 1 << "��° ���ڸ� �Է��ϼ��� : ";
    cin >> user_num[i];
    if (user_num[i] > 25 || user_num[i] < 1) {  // ���� ���� 1~25
      cout << "������ ��� �����Դϴ�. �ٽ� �Է����ּ���." << endl;
      i--;
      continue;
    }
    if (isDuplicated(user_num, i, user_num[i])) {  // �ߺ� Ȯ��
      cout << "�ߺ��� �����Դϴ�. �ٽ� �Է����ּ���." << endl;
      i--;
      continue;
    }
  }

  // comp_num�� ����� ���ڸ� ���, �÷��̾ ���� ������ ������ ���� ����� ���
  cout << "----------------------------------------" << endl;
  cout << "��÷��ȣ: ";
  int count = 0;
  for (int i = 0; i < NUMBER; i++) {
    cout << comp_num[i] << " ";
    // ��ǻ�Ͱ� ������ ���ڿ� �÷��̾ ������ ���ڸ� ���Ͽ� ���� ������ ������ ī��Ʈ
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