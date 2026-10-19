
#include <iostream>
using namespace std;

class Employee {
	//Encapsulation
private:
    string employee_name;
    int employee_Id;
    double basic_salary;

public:
    void setEmployeeDetails() {
        cout << "Enter Employee Name: ";
        cin >> employee_name;
        
        cout << "Enter Employee ID: ";
        cin >> employee_Id;
        
        cout << "Enter Basic Salary: ";
        cin >> basic_salary;
    }

    
    double calculateSalary() {
        return basic_salary + (0.10 * basic_salary);
    }


    void displayEmployeeDetails() {
        cout << "\n------ Employee Details -----" << endl;
        cout << "Name: " << employee_name << endl;
        cout << "Employee ID: " << employee_Id << endl;
        cout << "Basic Salary: KSh " << basic_salary << endl;
        cout << "Net Salary (with 10% Allowance): KSh " << calculateSalary() << endl;
    }
};

int main() {
    Employee emp1;

    cout << "--- Enter Employee Information ---" << endl;
    emp1.setEmployeeDetails();
    emp1.displayEmployeeDetails();

    return 0;
}