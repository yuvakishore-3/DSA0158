#include <iostream>
using namespace std;
class Shape {
protected:
    float length, breadth;
public:
    void getData() {
        cout << "Enter Length: ";
        cin >> length;
        cout << "Enter Breadth: ";
        cin >> breadth;
    }
};
class Rectangle : public Shape {
public:
    float calculateArea() const {
        return length * breadth;
    }
};
class Cuboid : public Rectangle {
private:
    float height;
public:
    void getHeight() {
        cout << "Enter Height: ";
        cin >> height;
    }
    float calculateVolume() const {
        return length * breadth * height;
    }
    void displayResults() {
        cout << "Area of Rectangle: " << calculateArea() << endl;
        cout << "Volume of Cuboid: " << calculateVolume() << endl;
    }
};
int main() {
    Cuboid c;
    c.getData();
    c.getHeight();
    c.displayResults();
    return 0;
}

