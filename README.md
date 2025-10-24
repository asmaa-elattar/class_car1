# Class Car in C++
##  Description
This is a simple C++ program that demonstrates the concept of Object-Oriented Programming (OOP).  
It defines a car class with three attributes:
- brand
- model
- color

The program creates three different car objects and displays their details using a member function.

---

## Code Exampl
#include <iostream>
using namespace std;
class car {
public:
    string brand;
    string model;
    string color;
    void displayinfo() {
        cout << "brand: " << brand << endl;
        cout << "model: " << model << endl;
        cout << "color: " << color << endl;
    }
};

int main() {
    car mycar1;
    mycar1.brand = "BMW";
    mycar1.model = "x5";
    mycar1.color = "black";
    cout << "mycar1" << endl;
    mycar1.displayinfo();
    cout << "---------------" << endl;
    car mycar2;
    mycar2.brand = "Toyota";
    mycar2.model = "corolla";
    mycar2.color = "white";
    cout << "mycar2" << endl;
    mycar2.displayinfo();
    cout << "---------------" << endl;
    car mycar3;
    mycar3.brand = "Mercedes";
    mycar3.model = "c200";
    mycar3.color = "white";
    cout << "mycar3" << endl;
    mycar3.displayinfo();
    return 0;
}
 Concepts Used
 • Class and Object
 • Public attributes
 • Member function
 • Basic input/output in C++
 
 Output Example
mycar1
brand: BMW
model: x5
color: black
---------------
mycar2
brand: Toyota
model: corolla
color: white
---------------
mycar3
brand: Mercedes
model: c200
color: white
