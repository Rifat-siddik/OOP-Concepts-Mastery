#include<bits/stdc++.h>
using namespace std;

class Car{
    public:
    string brand;
    string model;
    int price;

    Car(string a,string b,int c);
};

Car::Car(string a,string b,int c){
    brand=a;
    model=b;
    price=c;
}

int main(){
    Car mycar("BWm","paikhana",2334532);
    Car Hiscar("sfj","slkjgldkfjg",3456634);

    cout<<mycar.brand<<"    "<<mycar.model<<mycar.price<<endl;
        cout<<mycar.brand<<"    "<<mycar.model<<mycar.price<<endl;

}