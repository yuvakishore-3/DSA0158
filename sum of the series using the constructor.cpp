#include <iostream>
using namespace std; 
class SeriesSum {
private:
    int limit;
    int sum;
public:
    SeriesSum(int n) : limit(n), sum(0) {
        for (int i = 1; i <= limit; ++i) {
            sum += i;
        }
    }
    void display() const {
        cout << "The sum of the series 1 + 2 + ... + " << limit << " is " << sum << endl;
    }
};
int main() {
    int n;
    cout << "Enter the limit of the series: ";
    cin >> n;
    SeriesSum seriesSum(n);
    seriesSum.display();
    return 0;
}

