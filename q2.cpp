#include <bits/stdc++.h>
using namespace std;

class Complex{
    int real,img;
public:
    Complex(){
        real=0;
        img=0;
    }  
    Complex(int r){
        real = r;
        img = 0;
    }
    Complex(int r,int i){
        real = r;
        img = i;
    }
    void disNum(){
        cout<<"The number is "<<real<<"+"<<img<<"i"<<endl;
    }
};

int main() {
    Complex c1;
    cout<<"Default constructor: ";
    c1.disNum();
    Complex c2(3);
    cout<<"Constructor with real part only: ";
    c2.disNum();
    Complex c3(3,6);
    cout<<"Constructor with both parts: ";
    c3.disNum();
}

