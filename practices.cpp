#include<bits/stdc++.h>
using namespace std;

class car{
public:
int sarary(int discount); 
};

int car::sarary(int discount){
    return discount;
}

int main()
{
    car mycar;
   cout<< mycar.sarary(1234);
}