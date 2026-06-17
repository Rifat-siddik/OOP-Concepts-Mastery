#include<bits/stdc++.h>
using namespace std;

class Myclass{// it mase class, parent
    public:
    void myfunction(){
        cout<<"class child class  dada class ";

    }
};

class Mychild:public Myclass{// child class
};
class MyNaticlass: public Mychild{
};

int main(){
    MyNaticlass mydada;
    mydada.myfunction();
}

// sei mama seii.......