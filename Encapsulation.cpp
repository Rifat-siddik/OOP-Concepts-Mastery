/*
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
*/
//------------------------------


#include<bits/stdc++.h>
using namespace std;

class student{
    private:
    double gpa;//private

    public:
    void setgpa(double g){//setter
        if(g>=0.0 && g<-4.0){
            gpa=g;
        }else{
            cout<<"invalid GPA input! setting default to it"<<endl;
            gpa=0.0;
        }
    }

    double getgpa(){//getter
        return gpa;
    }
};


int main(){
    student student1;
    student1.setgpa(3.30);

    cout<<"student gpa: "<<student1.getgpa()<<endl;

    student1.setgpa(5.5);

    cout<<"student gpa if invalid : "<<student1.getgpa()<<endl;

    
}


