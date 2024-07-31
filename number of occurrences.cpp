#include <iostream>
using namespace std;
int countOccurrences(int arr[], int size, int value) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == value) {
            count++;
        }
    }
    return count;
}
int main() {
    int arr[] = {1, 2, 3, 2, 4, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int value = 2;
    cout << "Number of occurrences of " << value << ": " << countOccurrences(arr, size, value) <<endl;
    return 0;
}

