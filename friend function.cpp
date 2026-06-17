#include<bits/stdc++.h>
using namespace std;

class Employee {
 private:
 int salary;

 public:
 Employee(int s){
    salary=s;
 }

 friend void displaysalary (Employee emp);
};

void displaysalary(Employee emp){
    cout<<"salary: "<<emp.salary;
} 

int main(){
    Employee myjob(50000);
    displaysalary(myjob);
}