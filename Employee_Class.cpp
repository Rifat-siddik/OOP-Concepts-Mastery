#include<bits/stdc++.h>
using namespace std;

class employee{
    public:
    int id;
    string name;
    string designation;
};

int main(){
    employee emp;
    emp.id =1232;
    emp.name="Rifat Siddik";
    emp.designation="Software Engineer";

    cout<<emp.id<<endl;
    cout<<emp.name<<endl;
    cout<<emp.designation;
}