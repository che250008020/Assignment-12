#include <bits/stdc++.h>
using namespace std;

class Rectangle{
    private:
        float length;
        float breadth;
    public:
        Rectangle(float l, float b): length(l), breadth(b) {};
        Rectangle(): length(1), breadth(1) {};
        
        void displayArea(){
            float area = length*breadth;
            cout<<"Area: "<<area<<endl;
        }
};

int main() {
    float l,b;
    cin >> l >> b;
    Rectangle r1(l,b);
    Rectangle r2;
    cout<<"For default constructor: ";
    r1.displayArea();
    cout<<"For parameterized constructor: ";
    r2.displayArea();
}
