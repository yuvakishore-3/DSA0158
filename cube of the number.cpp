#include <iostream>
class Cube {
private:
    int value;
public:
    Cube(int v) : value(v) {}

    ~Cube() {
        std::cout << "Cube of " << value << " is " << (value * value * value) << std::endl;
    }
};
int main() {
    int n;
    std::cout << "Enter an integer: ";
    std::cin >> n;
    for (int i = 1; i <= n; ++i) {
        Cube c(i);
    }
    return 0;
}

