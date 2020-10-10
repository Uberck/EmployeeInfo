#include <iostream>
#include <EmployeeInfo.h>

using namespace std;

int main() {
    int enumber, day, month, year, etype;
    float total;
    Employee emp1[30], emp2[30], emp3[30]; //began designing the array but ran out of time, using a for loop to print one set of data
    enum types {
        laborer,
        secretary,
        manager,
        accountant,
        executive,
        researcher
    };
    cout << "Enter the details for Employee #1" << endl;
    cout << "Enter the employee number: ";
    //emp1->entData();
    cin >> enumber;
    for (int e = 0; e < enumber; e++) {
        cout << "Enter type of employee: " << endl;
        cout << "1-Laborer\n";
        cout << "2-Secetary\n";
        cout << "3-Manager\n";
        cout << "4-Accountant\n";
        cout << "5-Executive\n";
        cout << "6-Researcher\n";
        cout << ": ";
        cin >> etype;

        cout << "Enter hire date below::" << endl;
        cout << "Enter Day: ";
        cin >> day;
        cout << "Enter Month: ";
        cin >> month;
        cout << "Enter Year: ";
        cin >> year;
        cout << "Enter Salary: ";
        cin >> total;

        emp1[e].days(day);
        emp1[e].months(month);
        emp1[e].years(year);
        emp1[e].show(etype);

        return 0;
    }
}