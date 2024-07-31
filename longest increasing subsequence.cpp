#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;
int longestIncreasingSubsequence(const vector<int>& arr) {
    if (arr.empty()) return 0;
    int n = arr.size();
    vector<int> lis(n, 1); 
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (arr[i] > arr[j] && lis[i] < lis[j] + 1) {
                lis[i] = lis[j] + 1;
            }
        }
    }
    return *max_element(lis.begin(), lis.end());
}
int main() {
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(22);
    arr.push_back(9);
    arr.push_back(33);
    arr.push_back(21);
    arr.push_back(50);
    arr.push_back(41);
    arr.push_back(60);
    arr.push_back(80);

    cout << "Length of the longest increasing subsequence is: " 
         << longestIncreasingSubsequence(arr) << endl;

    return 0;
}

