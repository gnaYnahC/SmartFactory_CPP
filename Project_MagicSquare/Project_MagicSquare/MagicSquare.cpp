#include <iostream>
#include <vector>

using namespace std;

// 입력값이 홀수인지 확인하는 함수
bool isOdd(int n) { return (n % 2 == 1); }

// 마방진 출력 함수
void printMagicSquare(vector<vector<int>> magicSquare) {
  int n = magicSquare.size();

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << magicSquare[i][j] << " ";
    }
    cout << endl;
  }
}

// 마방진 생성 함수
void generateMagicSquare(vector<vector<int>>& magicSquare, int n) {
  int x = n / 2;  // 열의 가운데
  int y = 0;      // 첫 번째 행
  magicSquare[y][x] = 1;

  for (int i = 2; i <= n * n; i++) {  // i=2 부터 증가
    // 오른쪽 대각선 위로 이동
    x = x + 1;
    y = y - 1;

    // 첫번째 행의 마지막 열에서는 우상단으로 이동하는 것이 아니라 바로
    // 아래칸으로 이동
    if (y < 0 && x >= n) {
      y = y + 2;
      x = x - 1;
    }

    // 첫번째 행에서 우상단으로 이동할 때는 마지막 행의 다음 열로 이동
    if (y < 0) {
      y = n - 1;  // 마지막 행으로 이동
    }

    // 마지막 열에서 우상단으로 이동할 때는 첫번째 열의 이전 행으로 이동
    if (x >= n) {
      x = 0;  // 첫번째 열로 이동
    }

    // 우상단으로 이동하는 도중 이미 칸이 채워져 있으면 바로 아래 칸으로 이동
    if (magicSquare[y][x] != 0) {
      y = y + 2;
      x = x - 1;
    }

    magicSquare[y][x] = i;  // 값이 비어있다면 i 저장
  }
}

int main() {
  int n;

  // 사용자로부터 마방진 크기 입력 받기
  cout << "만들고자 하는 마방진의 행 또는 열의 수를 홀수로 입력해주세요: ";
  cin >> n;

  // 입력값이 홀수인지 확인
  while (!isOdd(n)) {
    cout << "입력한 수가 홀수가 아닙니다. 홀수로 입력해주세요: ";
    cin >> n;
  }

  // 초기화
  vector<vector<int>> magicSquare(n, vector<int>(n));

  // 마방진 생성
  generateMagicSquare(magicSquare, n);

  // 마방진 출력
  cout << "마방진: " << endl;
  printMagicSquare(magicSquare);

  return 0;
}
