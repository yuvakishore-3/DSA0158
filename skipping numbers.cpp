#include <iostream>
using namespace std;
class Number {
protected:
    int M, N;
public:
    Number(int start, int end) : M(start), N(end) {}
};
class Skipper : public Number {
    int K;
public:
    Skipper(int start, int end, int skip) : Number(start, end), K(skip) {}

    void printNumbers() const {
        for (int num = M; num <= N; num += K) {
            cout << num;
            if (num + K <= N) cout << ", ";
        }
        cout << endl;
    }
};
int main() {
    int M = 50, N = 100, K = 7;
    Skipper skipper(M, N, K);
    skipper.printNumbers();
    return 0;
}

