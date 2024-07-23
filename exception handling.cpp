#include <iostream>
#include <stdexcept>  
using namespace std;
void divide(int numerator, int denominator) {
    if (denominator == 0) {
        throw runtime_error("Division by zero.");
    }
    cout << "Result: " << static_cast<double>(numerator) / denominator << endl;
}
int main() {
    int num1, num2;
    cout << "Enter numerator: ";
    cin >> num1;
    cout << "Enter denominator: ";
    cin >> num2;
    try {
        divide(num1, num2);
    } catch (const runtime_error& e) {
        cout << e.what() << endl;
    }
    return 0;
}

