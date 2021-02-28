#include <iostream>

using namespace std;

int main() {
	int a = 10; //значение которое можно изменять для выполнения условия
	int b = 21;
	if (a > b) {
		cout << sizeof((a-b)*2);
	} else {
		cout << sizeof(b-a);
	}
	return 0;
}