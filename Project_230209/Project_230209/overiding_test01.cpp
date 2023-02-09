# include <iostream>
using namespace std;

class Student {
protected:
	string name;
	string school;
	string stu_id;
	int age;

public:
	void lunch() {
		cout << "점심은 학쉭~~ \n";
	}
};


class Sin : public Student {
public:
	Sin() {
		this->school = "떡잎유치원";
		this->stu_id = "190119";
		this->age = 5;
	}

	void lunch(string name) {
		cout << "이름: " << name << endl << "학교: " << school << endl
			<< "학번: " << stu_id << endl << "나이: " << age << endl << "점심은 피자스쿨!! \n";
	}
};


class Kim : public Student {
public:
	Kim() {
		this->school = "떡잎유치원";
		this->stu_id = "191019";
		this->age = 5;
	}

	void lunch(string name) {
		cout << "이름: " << name << endl << "학교: " << school << endl 
			<< "학번: "<< stu_id <<endl << "나이: " << age << endl << "점심은 도시락!! \n";
	}
};


int main() {
	string name;

	Sin a;
	Kim k;

	cout << "이름 입력: ";
	cin >> name;

	if (name == "김철수") {
		k.lunch(name);
	}
	else if (name == "신짱구") {
		a.lunch(name);
	}
}