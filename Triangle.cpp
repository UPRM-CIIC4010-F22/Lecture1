#include "Triangle.h"

Triangle::Triangle(int side1, int side2, int side3) {
    this->side1 = side1;
    this->side2 = side2;
    this->side3 = side3;
}

double Triangle::getArea() {
    double s = (this->side1 + this->side2 + this->side3) / 2.0;
    double area = sqrt(s * (s - this->side1) * (s - this->side2) * (s - this->side3));
    return area;
}

bool Triangle::hasLargerArea(Triangle t2) {
    return (this->getArea() > t2.getArea());
}

double Triangle::sumOfAreas(Triangle triangles[], int size) {
    double result = 0;
    for (int i = 0; i < size; i++) {
        result += triangles[i].getArea();
    }
    return result;
}

Triangle Triangle::scale(double scale) {
    return Triangle(this->side1 * scale, this->side2 * scale, this->side3 * scale);
}