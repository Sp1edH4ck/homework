#include <iostream>
 
using namespace std;
 
int main() {
    int a;
    cout << "Ведите год: ";
    cin >> a;
    if (a% 400 == 0) {
        cout << "Год високосный!" << endl;
    } else if (a% 100 == 0) {
        cout << "Год невисокосный!" << endl;
    } else if (a% 4 == 0) {
        cout << "Год високосный!" << endl;
    } else {
        cout << "Год невисокосный!" << endl;
    }
    return 0;
}