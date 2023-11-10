#include<iostream>
using namespace std;

class Employee{

    public:
    string name;
    string department;

    void set_Salary(int s){
        salary=s;
    }

    int get_Salary(){
        return salary;
    }

    Employee(string aName, string aDepartment){
    aName=name;
    aDepartment=department;
    }

    private:
    int salary;
    
};
int main()
{
    //  GETTERS AND SETTERS IN CPP
    Employee em1("Priyanshu Tadhiyal", "Consultancy");
    em1.set_Salary(50000);
    cout<<em1.get_Salary()<<endl;
    return 0;
    
}