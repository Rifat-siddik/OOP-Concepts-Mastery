#include<bits/stdc++.h>
using namespace std;

class vehicle{//base
    public:
    string brand ="toyota";
    void honk(){
        cout<<"turt, tata"<<endl;
    }
};

class Car:public vehicle{
    public://child
    string model="mustering";
};

int main(){
    Car mycar;
    mycar.honk();
    cout<<mycar.brand+"    "+mycar.model;
}