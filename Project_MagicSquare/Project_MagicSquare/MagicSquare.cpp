#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n;
	cout << "������� �ϴ� �������� �� �Ǵ� ���� ���� Ȧ���� �Է����ּ���: ";
	cin >> n;
	while (n % 2 == 0) {
		cout << "�Է��� ���� Ȧ���� �ƴմϴ�. Ȧ���� �Է����ּ���: ";
		cin >> n;
		continue;
	}
	//2���� ���� �迭 ����
	vector<vector<int>> magicSquare(n, vector<int>(n)); // �ʱ�ȭ

	//1�� ù ���� ����� ��ġ�Ѵ�.
	int x = n / 2; //(���� ���)
	int y = 0; //ù ��° ��
	magicSquare[y][x] = 1;

	for (int i = 2; i <= n * n; i++) { // i=2 ���� ����

		// ������ �밢�� ���� �̵�
		x = x + 1;
		y = y - 1;

		if (y < 0 && x >= n) {//ù��° ���� ������ �������� �������� �̵��ϴ� ���� �ƴ϶� �ٷ� �Ʒ�ĭ���� �̵�
			y = y + 2;
			x = x - 1;
		}

		if (y < 0) { // ù��° �࿡�� �������� �̵��� ���� ������ ���� ���� ���� �̵�
			y = n - 1; //������ ������ �̵�
		}

		if (x >= n) {// ������ ������ �������� �̵��� ���� ù��° ���� ���� ������ �̵�
			x = 0; // ù��° ���� �̵�
		}

		if (magicSquare[y][x] != 0) { // �������� �̵��ϴ� ���� �̹� ĭ�� ä���� ������ �ٷ� �Ʒ� ĭ���� �̵�
			y = y + 2;
			x = x - 1;
		}

		magicSquare[y][x] = i; // ���� ����ִٸ� i ����
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