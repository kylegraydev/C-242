/* Write a program that prompts the user for the first name and last
name of an employee and a starting salary. Then give the employee a 5 percent raise,
and print out the name and salary information stored in the employee object. */

#include <iostream>
#include <string>

using namespace std;

class Employee{
public:
    Employee(string f, string l, int s){
        setfName(f);
        setlName(l);
        setSalary(s);

    }
    void setfName(string f){
        fName = f;
    }
    void setlName(string l){
        lName = l;
    }
    void setSalary(int s){
        salary = s;
    }

    string getfName(){
        return fName;
    }

    string getlName(){
        return lName;
    }

    int getSalary(){
        return salary;
    }

    int raise(){
        salary *= 1.05;
    }

private:
    string fName, lName;
    int salary;
};

int main() {
    string fN, lN;
    int sal;

    cout << "First Name: ";
    cin >> fN;
    cout << endl << "Last Name ";
    cin >>  lN;
    cout << endl << "Starting Salary: $";
    cin >> sal;
    Employee emp1(fN, lN, sal);
    emp1.raise();
    cout << " " << emp1.getfName() << " " << emp1.getlName() << " $" << emp1.getSalary();


    return 0;
}

