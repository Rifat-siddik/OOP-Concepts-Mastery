#include<bits/stdc++.h>
using namespace std;

class Myclass{
    public:
    void mymethod();
};
void Myclass::mymethod(){
    cout<<"This is the only way";
}

int main(){
    Myclass myjob;
    myjob.mymethod();
}

/*
#include<bits/stdc++.h>
using namespace std;

class Myclass {
    public:
    // ক্লাসের ভেতরে শুধু ফাংশনটি ঘোষণা (Declare) করা হলো
    void mymethod(); 
};

// ক্লাসের বাইরে Scope Resolution Operator (::) দিয়ে ফাংশনটি লেখা হলো
void Myclass::mymethod() {
    cout << "the rifat" << endl;
}

int main() {
    Myclass myObj;
    myObj.mymethod(); // ফাংশনটি কল করা হলো
    return 0;
}

*/