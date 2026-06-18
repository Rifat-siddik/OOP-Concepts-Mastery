#include<bits/stdc++.h>
using namespace std;

class Applince{
    public:
    virtual void trunon()=0;
// pure virtual function cause value 0
};

class fan : public Applince{
    public:
    void trunon() override{
        cout<<"fan on koro"<<endl;

    }
};

int main(){
    Applince* myapp = new fan();
    myapp->trunon();
    delete myapp;
}