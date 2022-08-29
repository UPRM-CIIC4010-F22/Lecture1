#include <cmath>
#include <iostream>

using namespace std;

double getArea(int s1, int s2, int s3) {
    double s = (s1 + s2 + s3) / 2.0;
    double area = sqrt(s * (s - s1) * (s - s2) * (s - s3));  
    return area;  
}

int main() {

    int area = getArea(10,10,10);
    cout << "The area is: " << area << endl;

    area = getArea(20,20,30);
    cout << "The area is: " << area << endl;
}
