#include <iostream>
using namespace std;
class Employee
{       
private:
    string Name;
    string Company;
    int Age;
public:  
    void setName(string name){ // Setter
        Name = name;
    }
    string getName(){ // getter
        return Name;
    }

    void setCompany(string company){
        Company = company;
    }
    string getCompany(){
        return Company;
    }
     int setAge(int age){
        if(age >= 18)
        Age = age;
    }
    int getAge(){
        return Age;
    }
    

    void IntroduceYourelf()
    { 
        cout << "Name: " << Name << endl;
        cout << "Company: " << Company << endl;
        cout << "Age: " << Age << endl;

    }
    Employee(string name , string company, int age) {
        Name = name;
        Company = company;
        Age = age;

    }
};
int main()
{
    cout << "\nMember 1 :" << endl;
    Employee employee1 = Employee("Abdallh","USA C++", 26);
    employee1.IntroduceYourelf();

    cout << "\nMember 2 :" << endl;
    Employee employee2 = Employee("Ahmed","USA C++", 27);
    employee1.IntroduceYourelf();

    employee1.setAge(15);
    cout<<employee1.getName()<<" is "<<employee1.getAge()<<" years old \n";

    return 0;
}