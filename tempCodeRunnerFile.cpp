#include<bits/stdc++.h>
using namespace std;

class car{

    public:
    string fruits;
    string vegetable;
    int price ;
};

int main(){
    car mycar;

    car goru;

    mycar.fruits="kola";
    mycar.vegetable="begun";
    mycar.price=10;


    goru.fruits="gash";
    goru.price=23;
    cout<<goru.fruits<<"  "<<goru.price<<endl;

    cout<<mycar.fruits<< "  "<<mycar.vegetable<<"   "<<mycar.price;
}