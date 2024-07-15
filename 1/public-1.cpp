#include <iostream>
using namespace std;
class Employee
{       // The clas have private , protected and public .
public: // I used public
    string Name;
    string Company;
    int Age;
    double Salary;
    string level;

    void IntroduceYourelf()
    { // function have Name , Company and Age
        cout << "Name: " << Name << endl;
        cout << "Company: " << Company << endl;
        cout << "Age: " << Age << endl;
        cout << "Salary: " << Salary << " $" << endl;
        cout << "level: "<< level <<endl  ;
    }
};
int main()
{
    cout << "\nMember 1 :" << endl;
    Employee employee1;
    employee1.Name = "Abdallh";
    employee1.Company = "USA C++";
    employee1.Age = 26;
    employee1.Salary = 3000;
    employee1.level = "Employee";
    employee1.IntroduceYourelf();

    cout << "\nMember 2 :" << endl;
    Employee employee2;
    employee2.Name = "Ahmed";
    employee2.Company = "USA C++";
    employee2.Age = 25;
    employee2.Salary = 3500;
    employee2.level = " Employee";
    employee2.IntroduceYourelf();

    cout << "\nMember 3 :" << endl;
    Employee employee3;
    employee3.Name = "john";
    employee3.Company = "USA C++";
    employee3.Age = 27;
    employee3.Salary = 3950.5;
    employee3.level = " Employee";
    employee3.IntroduceYourelf();

    cout << "\nMember 4 :" << endl;
    Employee employee4;
    employee4.Name = "Ali";
    employee4.Company = "USA C++";
    employee4.Age = 28;
    employee4.Salary = 4000.5;
    employee4.level = " Employee";
    employee4.IntroduceYourelf();

    cout << "\nMember 5 :" << endl;
    Employee employee5;
    employee5.Name = "Sayed";
    employee5.Company = "USA C++";
    employee5.Age = 29;
    employee5.Salary = 4549.99;
    employee5.level = " Management";
    employee5.IntroduceYourelf();

    cout << "\nMember 6 :" << endl;
    Employee employee6;
    employee6.Name = "Mohamed";
    employee6.Company = "USA C++";
    employee6.Age = 35;
    employee6.Salary = 10000;
    employee6.level = " Management";
    employee6.IntroduceYourelf();

    return 0;
}