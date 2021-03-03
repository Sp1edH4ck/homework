#include <iostream>
 
using namespace std;
 
int main() {
    int a;
    int b;
    cout << "Введите 1 число: ";
    cin >> a;
    cout << "Введите 2 число: ";
    cin >> b;
    if (a+b == 10 || a == 10 || b == 10) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}