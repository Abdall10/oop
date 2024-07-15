#include <iostream>
using namespace std;
class Employee
{       
public:  
    string Name;
    string Company;
    int Age;
    double Salary;
    string level;

    void IntroduceYourelf()
    { // function have Name , Company, Age, Salary and level
        cout << "Name: " << Name << endl;
        cout << "Company: " << Company << endl;
        cout << "Age: " << Age << endl;
        cout << "Salary: " << Salary << " $" << endl;
        cout << "level: "<< level <<endl  ;
    }
    Employee(string name , string company, int age, double salary, string le ) {
        Name = name;
        Company = company;
        Age = age;
        Salary = salary;
        level = le;
    }
};
int main()
{
    cout << "\nMember 1 :" << endl;
    Employee employee1 = Employee("Abdallh","USA C++", 26, 3000, "emboyee");
    employee1.IntroduceYourelf();

    cout << "\nMember 2 :" << endl;
    Employee employee2 = Employee("Ahmed","USA C++", 27, 3500, "employee");
    employee1.IntroduceYourelf();

    return 0;
}