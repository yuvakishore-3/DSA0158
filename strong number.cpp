#include <iostream>
using namespace std;
int factorial(int n) {
    int fact = 1;
    for (int i = 2; i <= n; ++i) fact *= i;
    return fact;
}
bool isStrong(int num) {
    int sum = 0, temp = num;
    while (temp) {
        sum += factorial(temp % 10);
        temp /= 10;
    }
    return sum == num;
}
int main() {
    int num = 145; 
    cout << (isStrong(num) ? "Strong" : "Not Strong") << endl;
    return 0;
}

