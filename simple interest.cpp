#include <iostream>
using namespace std; 
const double SENIOR_CITIZEN_RATE = 0.12;
const double REGULAR_RATE = 0.10;
void getInputs(double &principal, int &years, bool &isSeniorCitizen) {
    char senior;
    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Enter the number of years: ";
    cin >> years;
    cout << "Is customer senior citizen (y/n): ";
    cin >> senior;
    isSeniorCitizen = (senior == 'y' || senior == 'Y');
}
double calculateInterest(double principal, int years, bool isSeniorCitizen) {
    double rate = isSeniorCitizen ? SENIOR_CITIZEN_RATE : REGULAR_RATE;
    return principal * rate * years;
}
int main() {
    double principal;
    int years;
    bool isSeniorCitizen;
    getInputs(principal, years, isSeniorCitizen);
    double interest = calculateInterest(principal, years, isSeniorCitizen);
    cout << "Interest: " << interest << endl;
    return 0;
}

