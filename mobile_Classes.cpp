#include<bits/stdc++.h>
using namespace std;

class Mobile{
    public:
    string brand;
    int price;
};
int main(){
    Mobile myPhone;
    myPhone.brand="realme 60x";
    myPhone.price=10000;

    cout<<myPhone.brand<<endl;
    cout<<myPhone.price;
}