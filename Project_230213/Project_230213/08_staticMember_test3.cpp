#include <iostream>
#include <vector>

using namespace std;

class Snack {
protected:
	string name;
	static int count;
public:
	Snack() {
		count++;
	}
	static int get_count() {
		return count;
	}
	virtual void showInfo() { // ���� �Լ��� ����
		cout << "error" << endl;
	}
};

int Snack::count = 0;

class Candy : public Snack {
	string taste;
public:
	Candy(string taste) {
		this->name = "����";
		this->taste = taste;
	}
	void showInfo() { // �������̵�
		cout << taste << " �� " << name << endl;
	}
};

class Chocolate : public Snack {
	string shape;
public:
	Chocolate(string shape) {
		this->name = "���ݸ�";
		this->shape = shape;
	}
	void showInfo() {
		cout << shape << " ��� " << name << endl;
	}
};
int main() {
	vector<unique_ptr<Snack>> snackBasket;

	while (true) {
		int number;
		cout << "���� �ٱ��Ͽ� �߰��� ������ ���ÿ�(1: ����, 2: ���ݸ�, 0: ����): ";
		cin >> number;

		if (cin.fail()) {
			cin.clear();
			cin.ignore(10000, '\n');
			cout << "�߸��� �Է��Դϴ�. ���� 0, 1, 2 �߿��� �������ּ���." << endl;
			continue;
		}

		if (number == 0) {
			break;
		}
		else if (number == 1) {
			string taste;
			cout << "���� �Է��ϼ���: ";
			cin >> taste;

			if (cin.fail()) {
				cin.clear();
				cin.ignore(10000, '\n');
				cout << "�߸��� �Է��Դϴ�. ���ڿ��� �ٽ� �Է����ּ���." << endl;
				continue;
			}

			snackBasket.push_back(make_unique<Candy>(taste));
		}
		else if (number == 2) {
			string shape;
			cout << "����� �Է��ϼ���: ";
			cin >> shape;

			if (cin.fail()) {
				cin.clear();
				cin.ignore(10000, '\n');
				cout << "�߸��� �Է��Դϴ�. ���ڿ��� �ٽ� �Է����ּ���." << endl;
				continue;
			}

			snackBasket.push_back(make_unique<Chocolate>(shape));
		}
		else
		{
			cout << "�߸��� �Է��Դϴ�. ���� 0, 1, 2 �߿��� �������ּ���." << endl;
			continue;
		}
	}

	for (const auto& snack : snackBasket) {
		snack->showInfo();
	}
	snackBasket.clear();

	return 0;
}

//int main() {
//	vector<Snack*> snackBasket; // �����ͷ� ����
//
//	while (true) {
//		int number;
//		cout << "���� �ٱ��Ͽ� �߰��� ������ ���ÿ�(1: ����, 2: ���ݸ�, 0: ����): ";
//		cin >> number;
//
//		if (cin.fail()) { // �Է��� �߸��Ǿ��� ��
//			cin.clear(); // �Է� ��Ʈ���� ���� �÷��׸� ����
//			cin.ignore(10000, '\n'); // �Է� ���۸� ���
//			cout << "�߸��� �Է��Դϴ�. ���� 0, 1, 2 �߿��� �������ּ���." << endl;
//			continue; // �ٽ� �Է� ����
//		}
//
//		if (number == 0) { // 0�� �Է����� ��
//			break; // �ݺ����� �����ϰ� ���� ó���� ����
//		}
//		else if (number == 1) { // 1�� �Է����� ��
//			string taste;
//			cout << "���� �Է��ϼ���: ";
//			cin >> taste;
//
//			if (cin.fail()) { // �Է��� �߸��Ǿ��� ��
//				cin.clear(); // �Է� ��Ʈ���� ���� �÷��׸� ����
//				cin.ignore(10000, '\n'); // �Է� ���۸� ���
//				cout << "�߸��� �Է��Դϴ�. ���ڿ��� �ٽ� �Է����ּ���." << endl;
//				continue; // �ٽ� �Է� ����
//			}
//
//			snackBasket.push_back(new Candy(taste)); // Candy ��ü�� �����ϰ� ���Ϳ� ����
//		}
//		else if (number == 2) { // 2�� �Է����� ��
//			string shape;
//			cout << "����� �Է��ϼ���: ";
//			cin >> shape;
//
//			if (cin.fail()) { // �Է��� �߸��Ǿ��� ��
//				cin.clear(); // �Է� ��Ʈ���� ���� �÷��׸� ����
//				cin.ignore(10000, '\n'); // �Է� ���۸� ���
//				cout << "�߸��� �Է��Դϴ�. ���ڿ��� �ٽ� �Է����ּ���." << endl;
//				continue; // �ٽ� �Է� ����
//			}
//
//			snackBasket.push_back(new Chocolate(shape)); // Chocolate ��ü�� �����ϰ� ���Ϳ� ����
//		}
//		else
//		{
//			cout << "�߸��� �Է��Դϴ�. ���� 0, 1, 2 �߿��� �������ּ���." << endl;
//			continue; // �ٽ� �Է� ����
//		}
//	}// snackBasket�� ����� ��ü�� ���� ���
//	for (Snack* snack : snackBasket) { // ������ ��� ��ҿ� ���� �ݺ�
//		snack->showInfo(); // Snack��showInfo()�� ���� �Լ��� �����Ͽ� ��ӹ��� Candy�� Chocolate�� showInfo()�� ȣ���
//		delete snack; // �������� �Ҵ��� �޸𸮸� ����
//	}
//	snackBasket.clear(); // ���͸� ���
//
//	return 0;
//}