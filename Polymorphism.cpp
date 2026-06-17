#include<bits/stdc++.h>
using namespace std;

class animal{//this is base class
    public:
    void animalsound(){
        cout<<"the animal make a sound"<<endl;
    }
};

class cow: public animal{
    public://derived class
    void animalsound(){
        cout<<"humbaaa humbaaaa"<<endl;

    }
};

class cat: public animal{
    public:
    void animalsound(){//derived class
        cout<<"the animal sound is mew mew meeuw"<<endl;
    }
};

int main(){
    animal myanimal;
    cow mycow;
    cat mycat;

    myanimal.animalsound();
    mycat.animalsound();
    mycow.animalsound()

}