#include <iostream>
using namespace std;

// Rectangle Ŭ���� ����
class Rectangle {
private:
    // �ʵ�: width, height (private ��������)
    double width, height;

public:
    // ������: width, height ����
    Rectangle(double w, double h) : width(w), height(h) {}

    // �޼ҵ�: �簢���� ���� ���
    double area() {
        return width * height;
    }
};

int main() {
    double w, h;
    // ����ڷκ��� width, height �Է� ����
    cout << "�غ� ����: ";
    cin >> w ;
    cout << "���� ����: ";
    cin >> h;

    // ��ü ����
    Rectangle rect(w, h);
    // �簢���� ���� ���
    cout << "�簢���� ����: " << rect.area() << endl;

    return 0;
}
