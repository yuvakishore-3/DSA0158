#include <iostream>
using namespace std;  
int main() {
    int marks[5];
    int total = 0;
    float average;
    float percentage;
    string grade;
    cout << "Please Enter the marks of five subjects:" << endl;
    for (int i = 0; i < 5; ++i) {
        cin >> marks[i];
        total += marks[i];
    }
    average = total / 5.0;
    percentage = (total / 500.0) * 100;
    if (percentage > 75) {
        grade = "Distinction";
    } else if (percentage >= 60 && percentage < 75) {
        grade = "First Division";
    } else if (percentage >= 50 && percentage < 60) {
        grade = "Second Division";
    } else if (percentage >= 40 && percentage < 50) {
        grade = "Third Division";
    } else {
        grade = "Fail";
    }
    cout << "Total Marks      = " << total << endl;
    cout << "Average Marks    = " << average << endl;
    cout << "Marks Percentage = " << percentage << endl;
    cout << "Grade            = " << grade << endl;
    return 0;
}

