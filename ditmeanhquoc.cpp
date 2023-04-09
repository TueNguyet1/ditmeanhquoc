// Đây là câu lệnh để chửi anh Quốc

#include <iostream>
using namespace std;
int main() {
	cout << "Dit me anh Quoc";
	return 0;
}

// Đây là câu lệnh thứ 2 để chửi chết mẹ anh Quốc

#include <iostream>
using namespace std;
int main() {
    string name = "Quoc";
	cout << "Dit me anh " << name;
	return 0;
}

// Nhập tên của mình vào

#include <iostream>
using namespace std;
void show(string name) {
	cout << "Dit me anh " << name;
}

int main() {
	string name;
	cin >> name;
	show(name);
	return 0;
}
