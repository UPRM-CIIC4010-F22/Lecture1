#include <cmath>

using namespace std;

class Triangle {
public:
    int side1;
    int side2;
    int side3;

    Triangle(int side1, int side2, int side3) {
        this->side1 = side1;
        this->side2 = side2;
        this->side3 = side3;
    }

    double getArea() {
        double s = (this->side1 + this->side2 + this->side3) / 2.0;
        double area = sqrt(s * (s - this->side1) * (s - this->side2) * (s - this->side3));
        return area;
    }

    bool hasLargerArea(Triangle t2) {

        return (this->getArea() > t2.getArea());
    }

    static double sumOfAreas(Triangle triangles[], int size) {

        double result = 0;
        for (int i = 0; i < size; i++) {
            result += triangles[i].getArea();
        }
        return result;
    }

    Triangle scale(double scale) {

        return Triangle(this->side1 * scale, this->side2 * scale, this->side3 * scale);
    }

};