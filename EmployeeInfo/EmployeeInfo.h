// Employee class array - https://rb.gy/xcceks
#include <iostream>

using namespace std;

class Employee {
private:
    int enumber, day, month, year;
    float total;

public:
    int etype;
    Employee() {
        day = 0;
        month = 0;
        year = 0;
        etype;
    }

    void months(int m) {
        month = m;
        if (month > 12) {
            year = year + 1;
            month = month - 12;
        }
    }

    void days(int d) {
        day = d;
        if (day > 30) {
            month = month + 1;
            day = day - 12;
        }
    }

    void years(int y) {
        year = year + y;
    }

    // For array implementation
    /* void entData() {
        cout << "Enter the employee number: ";
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

        }
    } */

    void show(int etype) {
        cout << "Employee summary: " << endl;
        if (etype == 1) {
            cout << "Title: Laborer" << endl;
        }
        if (etype == 2) {
            cout << "Title: Secetry" << endl;
        }
        if (etype == 3) {
            cout << "Title: Manager" << endl;
        }
        if (etype == 4) {
            cout << "Title: Accountant" << endl;
        }
        if (etype == 5) {
            cout << "Title: Executive" << endl;
        }
        if (etype == 6) {
            cout << "Title: Researcher" << endl;
        }
        cout << "Date of Hire:" << endl;
        cout << day << "/" << month << "/" << year << endl;
    }
};