
#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
using namespace std;

// Base class
class Shape {
public:
    virtual double Area() const = 0; // Pure virtual function for area
    virtual ~Shape() = default;
};

// Circle class
class Circle : public Shape {
private:
    double x, y, r;
public:
    Circle(double x, double y, double r) : x(x), y(y), r(r) {}
    double Area() const override {
        return M_PI * r * r;
    }
};

// Rectangle class
class Rectangle : public Shape {
private:
    double x1, y1, x2, y2;
public:
    Rectangle(double x1, double y1, double x2, double y2) : x1(x1), y1(y1), x2(x2), y2(y2) {}
    double Area() const override {
        return abs((x2 - x1) * (y1 - y2));
    }
};

// Triangle class
class Triangle : public Shape {
private:
    double x1, y1, x2, y2, x3, y3;
public:
    Triangle(double x1, double y1, double x2, double y2, double x3, double y3)
        : x1(x1), y1(y1), x2(x2), y2(y2), x3(x3), y3(y3) {}
    double Area() const override {
        return abs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0);
    }
};

int main() {
    int q;
    cin >> q;
    vector<double> results;
    
    for (int i = 0; i < q; ++i) {
        int shapeType;
        cin >> shapeType;
        
        if (shapeType == 1) { // Circle
            double x, y, r;
            cin >> x >> y >> r;
            Circle circle(x, y, r);
            results.push_back(circle.Area());
        } 
        else if (shapeType == 2) { // Rectangle
            double x1, y1, x2, y2;
            cin >> x1 >> y1 >> x2 >> y2;
            Rectangle rectangle(x1, y1, x2, y2);
            results.push_back(rectangle.Area());
        } 
        else if (shapeType == 3) { // Triangle
            double x1, y1, x2, y2, x3, y3;
            cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
            Triangle triangle(x1, y1, x2, y2, x3, y3);
            results.push_back(triangle.Area());
        }
    }
    
    // Output the results with precision of two decimal places
    cout << fixed << setprecision(2);
    for (double area:results) {
        cout << area << endl;
    }
    
    return 0;
}

 
