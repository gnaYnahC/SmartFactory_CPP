#include <iostream>
using namespace std;

// Rectangle 클래스 정의
class Rectangle {
private:
    // 필드: width, height (private 접근제한)
    double width, height;

public:
    // 생성자: width, height 설정
    Rectangle(double w, double h) : width(w), height(h) {}

    // 메소드: 사각형의 넓이 계산
    double area() {
        return width * height;
    }
};

int main() {
    double w, h;
    // 사용자로부터 width, height 입력 받음
    cout << "밑변 길이: ";
    cin >> w ;
    cout << "높이 길이: ";
    cin >> h;

    // 객체 생성
    Rectangle rect(w, h);
    // 사각형의 넓이 출력
    cout << "사각형의 넓이: " << rect.area() << endl;

    return 0;
}
