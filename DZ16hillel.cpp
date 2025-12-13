#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Employee {
private:
    string name;
    double salary;

public:
    Employee(string Name, double Salary)
        : name(Name), salary(Salary) 
    {
    }

    virtual ~Employee() {}

    virtual void PrintInfo() const {
        cout << "Name: " << name << ", Salary $" << salary;
    }
};


class Manager : public Employee {
private:
    int teamSize;

public:
    Manager(string Name, double Salary, int TeamSize)
        : Employee(Name, Salary), teamSize(TeamSize) {
    }

    void PrintInfo() const override {
        Employee::PrintInfo();
        cout << ", Team Size: " << teamSize << endl;
    }
};


class Developer : public Employee {
private:
    string programmingLanguage;

public:
    Developer(string Name, double Salary, string ProgrammingLanguage)
        : Employee(Name, Salary), programmingLanguage(ProgrammingLanguage) {
    }

    void PrintInfo() const override {
        Employee::PrintInfo();
        cout << ", Programming Language: " << programmingLanguage << endl;
    }
};


void PrintAllEmployeesInfo(const vector<Employee*>& employees) {
    
    for (int i = 0; i < employees.size(); ++i)
    {
        const Employee* emp = employees[i];
        emp->PrintInfo();
    }
}

int main() {

    Employee* mgr = new Manager("Alice", 75000.0, 5);
    Employee* dev = new Developer("Bob", 65000.0, "C++");


    vector<Employee*> employees;
    employees.push_back(mgr);
    employees.push_back(dev);

    PrintAllEmployeesInfo(employees);


    return 0;
}