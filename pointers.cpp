#include<bits/stdc++.h>
using namespace std;

/*
int main(){
    string food="Tasfia";
    string* ptr=&food;

    cout<<food<<endl;// value of food
    cout<<&food<<endl;//memory add of food
    cout<<ptr<<endl;// memory add of food with pointer
    cout<<*ptr<<endl;

}
   
//---------------------------------
    int main(){
       int a=20;
       int* b=&a;

       cout<<a<<endl;
       cout<<&b<<endl;
       cout<<*b<<endl;
    }

    //-----------------------------------------
        */

int main(){
    string food="pizza";
    string* ptr=&food;

    cout<<food<<endl;

    cout<<&food<<endl;

    cout<<*ptr<<endl;

//----new pointer

*ptr="lubukhrea";

cout<<*ptr<<endl;

cout<<food<<endl;



}