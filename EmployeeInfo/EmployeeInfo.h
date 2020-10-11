// Employee class array - https://rb.gy/xcceks
#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

// Enum eType that can only have some predefined values
enum eType {
  l = 'l', s = 's', a = 'a', m = 'm', e = 'e', r = 'r'
};

// Unordered map for storing the mapping between enum type and string
unordered_map < eType, string > mapping;

// Date class
class Date {

  // Private date data members
  private:
    int day, month, year;

  // Public methods
  public:
    Date() {

    }
  // Parameterized constructor
  // Takes date as input in the form of a string
  Date(string date) {

    // Create date
    // Split date string using a delimeter '/' and store the day, month, year seperatley
    string delim = "/";

    // Splitting day part
    int pos = date.find(delim);
    string token = date.substr(0, pos);
    date.erase(0, pos + 1);
    this -> day = stoi(token);

    // Splitting month part
    pos = date.find(delim);
    token = date.substr(0, pos + 1);
    date.erase(0, pos + 1);
    this -> month = stoi(token);

    // Remainder for year part
    this -> year = stoi(date);
  }

  // Setter methods to update values
  // Sets day
  void setDay(int day) {
    this -> day = day;
  }

  // Sets month
  void setMonth(int month) {
    this -> month = month;
  }

  // Sets year
  void setYear(int year) {
    this -> year = year;
  }

  // Sets all three parts of date
  void setDayMonthYear(int day, int month, int year) {
    this -> day = day;
    this -> month = month;
    this -> year = year;
  }

  // Date display function
  void displayDate() {
    cout << this -> day << "/" << this -> month << "/" << this -> year << '\n';
  }
};

// Employee class extends Date class publically.
class Employee: public Date {

  // Private data members.
  private: int empId;
  float empComp;
  eType empType;

  // Public methods
  public: Employee(): Date() {

  }
  // Parameterized constructor
  Employee(int empId, float empComp, eType empType, string date): Date(date) {
    this -> empId = empId;
    this -> empComp = empComp;
    this -> empType = empType;
  }

  // Setter methods to update input values.
  // Sets the ID
  void setId(int empId) {
    this -> empId = empId;
  }

  // Sets compensation
  void setComp(float empComp) {
    this -> empComp = empComp;
  }

  // Sets the Employee type
  void setType(eType empType) {
    this -> empType = empType;
  }

  // Sets the Employee ID, Employee compensation, and Employee type
  void setIdCompType(int empId, float empComp, eType empType) {
    this -> empId = empId;
    this -> empComp = empComp;
    this -> empType = empType;
  }

  // Method to display array
  void Display() {
    cout << "Join date: ";
    this -> displayDate();
    cout << "Employee ID: " << this -> empId << '\n';
    cout << "Employee Compensation: " << this -> empComp << '\n';
    cout << "Employee Type: " << mapping[this -> empType] << '\n';
  }
};