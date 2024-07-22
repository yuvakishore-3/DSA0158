#include <iostream>
#include <string>
using namespace std;
class Employee {
protected:
    string name;
    string emp_id;
    float basic_salary;
public:
    Employee(const string &emp_name, const string &id, float salary)
        : name(emp_name), emp_id(id), basic_salary(salary) {}
    void displayData() const {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << emp_id << endl;
        cout << "Basic Salary: " << basic_salary << endl;
    }
};
class Pay : public Employee {
public:
    Pay(const string &emp_name, const string &id, float salary)
        : Employee(emp_name, id, salary) {}
    float calculateGrossPay() const {
        float hra = 0.2 * basic_salary; 
        float da = 0.1 * basic_salary;  
        return basic_salary + hra + da;
    }
    float calculateNetPay() const {
        float gross_pay = calculateGrossPay();
        float tax = 0.05 * gross_pay; 
        return gross_pay - tax;
    }
    void displayPay() const {
        cout << "Gross Pay: " << calculateGrossPay() << endl;
        cout << "Net Pay: " << calculateNetPay() << endl;
    }
};
int main() {
    string name, emp_id;
    float salary;
    cout << "Enter employee name: ";
    getline(cin, name);
    cout << "Enter Employee ID: ";
    getline(cin, emp_id);
    cout << "Enter Employee Salary: ";
    cin >> salary;
    Pay employee(name, emp_id, salary);
    employee.displayData();
    employee.displayPay();
    return 0;
}

