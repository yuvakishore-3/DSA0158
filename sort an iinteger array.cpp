#include <iostream>
#include <algorithm> 
using namespace std;
void sortArray(int arr[], int size) {
    sort(arr, arr + size);
}
void sortArray(double arr[], int size) {
    sort(arr, arr + size);
}
int main() {
    int intArray[] = {5, 2, 9, 1, 5, 6};
    int intSize = sizeof(intArray) / sizeof(intArray[0]);
    double doubleArray[] = {3.2, 1.5, 4.7, 1.2, 0.9};
    int doubleSize = sizeof(doubleArray) / sizeof(doubleArray[0]);
    sortArray(intArray, intSize);
    cout << "Sorted integer array: ";
    for (int i = 0; i < intSize; ++i) {
        cout << intArray[i] << " ";
    }
    cout << endl;
    sortArray(doubleArray, doubleSize);
    cout << "Sorted double array: ";
    for (int i = 0; i < doubleSize; ++i) {
        cout << doubleArray[i] << " ";
    }
    cout << endl;
    return 0;
}

