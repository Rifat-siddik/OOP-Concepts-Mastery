#include<bits/stdc++.h>
using namespace std;

class Employee{
    private://private variable
    int salary;

    public:
    void setsalary(int s){
        salary=s;//setter
    }
    int getsalary(){
        return salary;//getter
    }
};

int main(){
    Employee myjob;
    myjob.setsalary(40000);
    cout<<myjob.getsalary();
}