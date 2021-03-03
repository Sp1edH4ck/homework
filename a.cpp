#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int a = 8;
	int b = 12;
	if (a+b <= 20 && a+b >= 10) {
		cout << "true" << endl;
	} else {
		cout << "false" << endl;
	}
    return 0;
}