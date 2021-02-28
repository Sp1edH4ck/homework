#include <iostream>

using namespace std;

extern int a;
extern int b;
extern int c;
extern int d;

void change();

int main(int argc, char** argv) {
	change();
	cout << a*(b+(c/d)) << endl;
    return 0;
}