#include <iostream>
using namespace std;
class AbstractEmployee
{
    virtual void AskForPromotion() = 0; // 1  Ask in class Employee
};
class Employee : AbstractEmployee
{
private:
    string Name;
    string Company;
    int Age;

public:
    void setName(string name)
    { // Setter
        Name = name;
    }
    string getName()
    { // getter
        return Name;
    }

    void setCompany(string company)
    {
        Company = company;
    }
    string getCompany()
    {
        return Company;
    }
    int setAge(int age)
    {
        if (age >= 18)
            Age = age;
    }
    int getAge()
    {
        return Age;
    }

    void IntroduceYourelf()
    {
        cout << "Name: " << Name << endl;
        cout << "Company: " << Company << endl;
        cout << "Age: " << Age << endl;
    }
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
    void AskForPromotion()
    {
        if (Age > 30)
            cout << Name << " got promoted! \n";
        else
            cout << Name << " sorry no promotion for you! \n";
    }
};
int main()
{
    Employee employee1 = Employee("Abdallh", "USA C++", 26);
    Employee employee2 = Employee("Ahmed", "USA C++", 32);
    Employee employee3 = Employee("Ali", "USA C++", 28);
    Employee employee4 = Employee("Amir", "USA C++", 29);
    Employee employee5 = Employee("Ayman", "USA C++", 31);
    Employee employee6 = Employee("Sayed", "USA C++", 24);
    Employee employee7 = Employee("Sally", "USA C++", 27);
    Employee employee8 = Employee("Mohmed", "USA C++", 36);
    Employee employee9 = Employee("Mahmoued", "USA C++", 34);
    Employee employee10 = Employee("Zedan", "USA C++", 37);

    cout << "AskForPromotion : \n";
    cout << "\n";
    employee1.AskForPromotion();
    cout << "\n";
    employee2.AskForPromotion();
    cout << "\n";
    employee3.AskForPromotion();
    cout << "\n";
    employee4.AskForPromotion();
    cout << "\n";
    employee5.AskForPromotion();
    cout << "\n";
    employee6.AskForPromotion();
    cout << "\n";
    employee7.AskForPromotion();
    cout << "\n";
    employee8.AskForPromotion();
    cout << "\n";
    employee9.AskForPromotion();
    cout << "\n";
    employee10.AskForPromotion();
    cout << "\n";

    return 0;
}