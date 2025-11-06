#include <bits/stdc++.h>
#include<string>
using namespace std;

class Box{
    float length;
    float breadth;
    float height;
public:
    Box(){
        length=1;
        breadth=1;
        height=1;
    }
    Box(float l){
        length=l;
        breadth=1;
        height=1;
    }
    Box(float l,float b,float h){
        length = l;
        breadth = b;
        height = h;
    }
    void display(){
        float volume = length*breadth*height;
        cout<<"The volume of the given Box is: "<<volume<<endl;
    }
};

int main() {
    Box b1;
    cout<<"Default box: ";
    b1.display();
    Box b2(4);
    cout<<"With parameterized length: ";
    b2.display();
    Box b3(3,4,5);
    cout<<"With parameters given: ";
    b3.display();
}

