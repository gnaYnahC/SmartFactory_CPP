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
		int ms_x = x + 1;
		int ms_y = y - 1;

		if (ms_y < 0 && ms_x >= n) {//ù��° ���� ������ �������� �������� �̵��ϴ� ���� �ƴ϶� �ٷ� �Ʒ�ĭ���� �̵�
			ms_y = ms_y + 2;
			ms_x = ms_x - 1;
		}

		if (ms_y < 0) { // ù��° �࿡�� �������� �̵��� ���� ������ ���� ���� ���� �̵�
			ms_y = n - 1; //������ ������ �̵�
		}

		if (ms_x >= n) {// ������ ������ �������� �̵��� ���� ù��° ���� ���� ������ �̵�
			ms_x = 0; // ù��° ���� �̵�
		}

		if (magicSquare[ms_y][ms_x] != 0) { // �������� �̵��ϴ� ���� �̹� ĭ�� ä���� ������ �ٷ� �Ʒ� ĭ���� �̵�
			ms_y = ms_y + 2;
			ms_x = ms_x - 1;
		}

		magicSquare[ms_y][ms_x] = i; // ���� ����ִٸ� i ����
		x = ms_x;
		y = ms_y;
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