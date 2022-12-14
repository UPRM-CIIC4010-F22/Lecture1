#pragma once

#include <cmath>

using namespace std;

class Triangle {
private:
    int side1;
    int side2;
    int side3;

public:

    Triangle(int side1, int side2, int side3);

    int getSide1() { return side1; }
    int getSide2() { return side2; }
    int getSide3() { return side3; }

    void setSide1(int side1){ this->side1 = side1; }
    void setSide2(int side2){ this->side2 = side2; }
    void setSide3(int side3){ this->side3 = side3; }

    double getArea();
    bool hasLargerArea(Triangle t2);
    static double sumOfAreas(Triangle triangles[], int size);
    Triangle scale(double scale);

};