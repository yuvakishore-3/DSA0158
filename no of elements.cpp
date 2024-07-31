#include <iostream>
#include <string>
using namespace std;
int countElements(const string& str) {
    return str.size();
}
int main() {
    string input = "Hello";
    cout << "Number of elements in the string: " << countElements(input) <<endl;
    return 0;
}

