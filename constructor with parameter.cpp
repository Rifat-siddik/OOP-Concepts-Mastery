#include<bits/stdc++.h>
using namespace std;

class Car{
    public:
    string brand;
    string model;
    int year;
    Car(string x,string y,int z){
        brand=x;
        model=y;
        year=z;
    }
};

int main(){
    Car mycar("gwb","q2",1999);
    Car hiscar("farari","x12",2020);

    cout<<mycar.brand<<"   "<<mycar.model<<"  "<<mycar.year<<endl;
        cout<<hiscar.brand<<"   "<<hiscar.model<<"  "<<hiscar.year<<endl;

}

/*
following class have brand, model and year attributes, and a constructor with different parameters. Inside the constructor we set the attributes equal to the constructor parameters (brand=x, etc).

When we call the constructor (by creating an object of the class), we pass parameters to the constructor, which will set the value of the corresponding attributes to the same:
*/