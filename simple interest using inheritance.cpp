#include <iostream>
using namespace std;
class InputData {
protected:
    float principal;
    int years;
    float rate;
public:
    void getData() {
        cout << "Enter the principal Amount: ";
        cin >> principal;
        cout << "Enter the No. of years: ";
        cin >> years;
        cout << "Enter the rate of Interest (%): ";
        cin >> rate;
    }
};
class SimpleInterest : public InputData {
public:
    float calculateInterest() const {
        return (principal * years * rate) / 100;
    }
    void displayInterest() const {
        cout << "Simple Interest: " << calculateInterest() << endl;
    }
};
int main() {
    SimpleInterest si;
    si.getData();
    si.displayInterest();
    return 0;
}

