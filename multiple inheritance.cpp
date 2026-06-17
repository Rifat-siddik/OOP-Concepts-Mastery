#include<bits/stdc++.h>
using namespace std;

class Myclass{
    // base class
    public:
    void myfunction(){
        cout<<" one child and mother father "<<endl;
    }
};

class Myothersclass{
    // another base class
    public:
    void myotherfunction(){
        cout<<"it is another base class "<<endl;
    }
};

class Mychildclass: public Myclass,public Myothersclass{
// child class
};

int main(){
    Mychildclass myjob;
    myjob.myfunction();
    myjob.myotherfunction();
}
