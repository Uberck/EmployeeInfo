#include <iostream>
#include <EmployeeInfo.h>

using namespace std;

int main(void) {

    // Store mappings in globally created unordered_map
    mapping[l] = "laborer";
    mapping[s] = "seceratory";
    mapping[a] = "accountant";
    mapping[m] = "manager";
    mapping[e] = "executive";
    mapping[r] = "researcher";

    // Local function variables to take inputs from user
    int empId;
    float empComp;
    char empType;
    string date;

    // Array of Employee objects
    Employee emp[3];

    // Take input from user and create appropriate objects
    cout << "Enter employee details for ";
    for (int i = 0; i < 3; i++) {
        cout << "Employee #" << i + 1 << "...";

        cout << "\nEmployee ID: ";
        cin >> empId;

        cout << "Employee Compensation: ";
        cin >> empComp;

        cout << "Employee Type: ";
        cin >> empType;

        cout << "Employee Hire Date: ";
        cin >> date;

        emp[i] = Employee(empId, empComp, (eType)empType, date);
        cout << '\n';
    }

    // Print values for created objects
    cout << "\nEmployee Details: \n";
    for (int i = 0; i < 3; i++) {
        emp[i].Display();
        cout << '\n';
    }
    // Pause the window
    system("pause");
    return 0;
}