#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    cout << "Введите число: ";
    cin >> n;
    if (n == 1 || n % 2 == 0 && n / 2 != 0) {
        cout << "Не простое число" << endl;
    } else {
        cout << "Простое число\n" << endl;
    }
    return 0;
}