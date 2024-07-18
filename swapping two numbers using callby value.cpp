#include <iostream>
using namespace std;
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}
void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int a, b;
    cout << "Enter the value for a: ";
    cin >> a;
    cout << "Enter the value for b: ";
    cin >> b;
    cout << "The values before swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    swapByValue(a, b);
    cout << "The value after swapping for call by value:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    swapByReference(a, b);
    cout << "The value after swapping for call by reference:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}

