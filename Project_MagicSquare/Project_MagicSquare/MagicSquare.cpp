#include <iostream>
#include <vector>

using namespace std;

// �Է°��� Ȧ������ Ȯ���ϴ� �Լ�
bool isOdd(int n) { return (n % 2 == 1); }

// ������ ��� �Լ�
void printMagicSquare(vector<vector<int>> magicSquare) {
  int n = magicSquare.size();

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << magicSquare[i][j] << " ";
    }
    cout << endl;
  }
}

// ������ ���� �Լ�
void generateMagicSquare(vector<vector<int>>& magicSquare, int n) {
  int x = n / 2;  // ���� ���
  int y = 0;      // ù ��° ��
  magicSquare[y][x] = 1;

  for (int i = 2; i <= n * n; i++) {  // i=2 ���� ����
    // ������ �밢�� ���� �̵�
    x = x + 1;
    y = y - 1;

    // ù��° ���� ������ �������� �������� �̵��ϴ� ���� �ƴ϶� �ٷ�
    // �Ʒ�ĭ���� �̵�
    if (y < 0 && x >= n) {
      y = y + 2;
      x = x - 1;
    }

    // ù��° �࿡�� �������� �̵��� ���� ������ ���� ���� ���� �̵�
    if (y < 0) {
      y = n - 1;  // ������ ������ �̵�
    }

    // ������ ������ �������� �̵��� ���� ù��° ���� ���� ������ �̵�
    if (x >= n) {
      x = 0;  // ù��° ���� �̵�
    }

    // �������� �̵��ϴ� ���� �̹� ĭ�� ä���� ������ �ٷ� �Ʒ� ĭ���� �̵�
    if (magicSquare[y][x] != 0) {
      y = y + 2;
      x = x - 1;
    }

    magicSquare[y][x] = i;  // ���� ����ִٸ� i ����
  }
}

int main() {
  int n;
<<<<<<< HEAD

  // ����ڷκ��� ������ ũ�� �Է� �ޱ�
  cout << "������� �ϴ� �������� �� �Ǵ� ���� ���� Ȧ���� �Է����ּ���: ";
  cin >> n;

  // �Է°��� Ȧ������ Ȯ��
  while (!isOdd(n)) {
    cout << "�Է��� ���� Ȧ���� �ƴմϴ�. Ȧ���� �Է����ּ���: ";
    cin >> n;
  }

  // �ʱ�ȭ
  vector<vector<int>> magicSquare(n, vector<int>(n));

  // ������ ����
  generateMagicSquare(magicSquare, n);

  // ������ ���
  cout << "������: " << endl;
  printMagicSquare(magicSquare);

  return 0;
}
=======
  cout << "������� �ϴ� �������� �� �Ǵ� ���� ���� Ȧ���� �Է����ּ���: ";
  cin >> n;
  while (n % 2 == 0) {
    cout << "�Է��� ���� Ȧ���� �ƴմϴ�. Ȧ���� �Է����ּ���: ";
    cin >> n;
  }
  // 2���� ���� �迭 ����
  vector<vector<int>> magicSquare(n, vector<int>(n));  // �ʱ�ȭ

  // 1�� ù ���� ����� ��ġ�Ѵ�.
  int x = n / 2;  //(���� ���)
  int y = 0;      // ù ��° ��
  magicSquare[y][x] = 1;

  for (int i = 2; i <= n * n; i++) {  // i=2 ���� ����

    // ������ �밢�� ���� �̵�
    x = x + 1;
    y = y - 1;

    if (y < 0 && x >= n) {  // ù��° ���� ������ �������� �������� �̵��ϴ�
                            // ���� �ƴ϶� �ٷ� �Ʒ�ĭ���� �̵�
      y = y + 2;
      x = x - 1;
    }

    if (y < 0) {  // ù��° �࿡�� �������� �̵��� ���� ������ ���� ���� ���� �̵�
      y = n - 1;  // ������ ������ �̵�
    }

    if (x >= n) {  // ������ ������ �������� �̵��� ���� ù��° ���� ����
                   // ������ �̵�
      x = 0;  // ù��° ���� �̵�
    }

    if (magicSquare[y][x] != 0) {  // �������� �̵��ϴ� ���� �̹� ĭ�� ä����
                                   // ������ �ٷ� �Ʒ� ĭ���� �̵�
      y = y + 2;
      x = x - 1;
    }

    magicSquare[y][x] = i;  // ���� ����ִٸ� i ����
  }

  // ������ ���
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << magicSquare[i][j] << "  ";
    }
    cout << endl;
  }
  return 0;
}
>>>>>>> 0e7450c2ed7d74db837057712a06ac7fe2d5bb45
