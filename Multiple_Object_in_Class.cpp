#include<bits/stdc++.h>
using namespace std;

class car{
    public:
    string brand;
    string model;
    int year;
};

int main(){
    car obj1;
    obj1.brand="Toyota";
    obj1.model="234setr";
    obj1.year=2020;

    car obj2;
    obj2.brand="Honda";
    obj2.model="zxzz";
    obj2.year=2010;


    cout<<obj1.brand<<"   "<<obj1.model<<"   "<<obj1.year<<endl;
        cout<<obj2.brand<<"   "<<obj2.model<<"   "<<obj2.year<<endl;


}