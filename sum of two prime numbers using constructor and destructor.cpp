#include <iostream>
using namespace std;
class PrimeSumChecker {
private:
    int number;
    bool isPrime(int num) {
        if (num <= 1) return false;
        for (int i = 2; i <= num / 2; ++i) {
            if (num % i == 0) return false;
        }
        return true;
    }
    void checkSumOfPrimes() {
        bool found = false;
        for (int i = 2; i <= number / 2; ++i) {
            if (isPrime(i) && isPrime(number - i)) {
                cout << number << " can be expressed as the sum of " << i << " and " << (number - i) << " which a re both prime numbers." << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << number << " cannot be expressed as the sum of two prime numbers." << endl;
        }
    }
public:
    PrimeSumChecker(int num) : number(num) {
        checkSumOfPrimes();
    }
    ~PrimeSumChecker() {
        cout << "Object for number " << number << " is being destroyed." << endl;
    }
};
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    PrimeSumChecker checker(num);
    return 0;
}
 
