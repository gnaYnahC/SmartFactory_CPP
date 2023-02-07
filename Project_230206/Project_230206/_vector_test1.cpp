//#include <iostream>
//#include <vector>
////벡터를 이용하여 배열 1 실습 하기
//int main() {
//	std::cout << "벡터 실습1: 배열실습1을 벡터로 작성하기";
//	int x,y;
//	int sum = 0;
//	while (1) {
//		std::cout << "x를 입력하세요: ";
//		std::cin >> x;
//		std::cout << "y를 입력하세요: ";
//		std::cin >> y;
//		if (x < 0 || y < 0) {
//			std::cout << "x와 y모두 양수를 입력해주세요." << "\n";
//		}
//		else {
//			break;
//		}
//	}
//
//	std::vector<std::vector<int>> v;
//	v.assign(x, std::vector<int>(y)); 
//
//	for (int i = 0; i < v.size(); i++) { 
//		for (int j = 0; j < v.at(i).size(); j++) { 
//			v.at(i).at(j) = sum++;
//			std::cout << v.at(i).at(j) << " ";
//		}
//		std::cout << std::endl;
//	}
//}

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int x, y;

    // x와 y를 입력받는 부분
    while (true) {
        cout << "x를 입력하세요: ";
        cin >> x;
        cout << "y를 입력하세요: ";
        cin >> y;

        // x와 y가 양수인지 확인하는 부분
        if (x > 0 && y > 0) {
            break;
        }
        else {
            cout << "x와 y모두 양수를 입력해주세요" << endl;
        }
    }

    // 2차원 벡터 arr을 x * y 크기로 선언
    vector<vector<int>> arr(x, vector<int>(y, 0));

    // arr[0][0]부터 arr[x-1][y-1]까지 순서대로 1부터 x * y까지 값을 저장
    int cnt = 1;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            arr[i][j] = cnt++;
        }
    }

    // arr[0][0]부터 arr[x-1][y-1]까지 출력
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}