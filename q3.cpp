#include <bits/stdc++.h>
#include<string>
using namespace std;

class Car{
    string brand;
    float price;
public:
    Car(string b, float p){
        brand = b;
        price = p;
    }
    void display(){
        cout<<"The car is of brand: "<<brand<<" and has a price of: "<<price<<endl;
    }
};

int main() {
    Car c1("Suzuki",300000);
    cout<<"Car 1: ";
    c1.display();
    Car c2("Hyundai",400000);
    cout<<"Car 2: ";
    c2.display();
}
