#include <cmath>
#include <iostream>
#include "include/Triangle.h"

using namespace std;

int main() {

    double area = Triangle(10,10,10).getArea();
    cout << "The area is: " << area << endl;

    area = Triangle(20,20,30).getArea();
    cout << "The area is: " << area << endl;

    Triangle result = Triangle(10,10,10).scale(2);

    cout << result.getSide1() << endl;
    result.setSide1(30);
    cout << result.getSide1();


    
}
