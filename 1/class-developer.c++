#include <iostream>
using namespace std;
class AbstractEmployee
{
   virtual void AskForPromotion()=0;    // 1  Ask in class Employee
};
class Employee: AbstractEmployee{       
private:
    
    string Company;
    int Age;
    protected:
    string Name;
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
        if(age>=18)
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
    void AskForPromotion(){
        if(Age > 30)
        cout<<Name<<" got promoted! \n";
        else
        cout<<Name<<" sorry no promotion for you! \n";
    }
};
class Developer:public Employee {
    public:
     string FavProgrammingLanguage; 
     Developer(string name , string company, int age , string favProgrammingLanguage)
     :Employee(name, company, age)
     {
        FavProgrammingLanguage = favProgrammingLanguage;
     }
     void FixBug(){
        std::cout<<Name<<" fixed bug using "<< FavProgrammingLanguage<<std::endl;

     }
};

class Teacher:public Employee{
    public:
    string Subject;
    void PrepareLesson(){
        std::cout<<Name<<" is preparing "<< Subject << " lesson "<<std::endl;
    }
    Teacher(string name , string company, int age , string subject)
    :Employee(name,company,age)
    {
        Subject = subject;
    }
};
int main()
{
    
    Developer d = Developer ("Ahmed", "IT", 32,"c++");
    Teacher t= Teacher("Jack","Cool Scool",35,"History");
    t.PrepareLesson();
    t.AskForPromotion();

    

    

    return 0;
}