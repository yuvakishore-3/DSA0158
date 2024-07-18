#include <iostream>
using namespace std;
class DivisibleByNine {
private:
    int count;
    int sum;
public:
    DivisibleByNine() : count(0), sum(0) {
        for (int i = 100; i <= 200; ++i) {
            if (i % 9 == 0) {
                ++count;
                sum += i;
            }
        }
    }
    ~DivisibleByNine() {   
    }
    int getCount() const {
        return count;
    }
    int getSum() const {
        return sum;
    }
};
int main() {
    DivisibleByNine divisibleByNine;
    cout << "Number of integers between 100 and 200 divisible by 9: " << divisibleByNine.getCount() << endl;
    cout << "Sum of integers between 100 and 200 divisible by 9: " << divisibleByNine.getSum() << endl;
    return 0;
}

