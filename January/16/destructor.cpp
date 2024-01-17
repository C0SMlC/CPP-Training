#include <iostream>
#include <vector>

using namespace std;

class Shape
{
public:
    Shape()
    {
        cout << "Shape constructor called" << endl;
    }

    virtual ~Shape()
    {
        cout << "Shape destructor called" << endl;
    }

    virtual void draw() = 0;
};

class Circle : public Shape
{
public:
    Circle()
    {
        cout << "Circle constructor called" << endl;
    }

    ~Circle() override
    {
        cout << "Circle destructor called" << endl;
    }

    void draw() override
    {
        cout << "Drawing a circle" << endl;
    }
};

class Rectangle : public Shape
{
public:
    Rectangle()
    {
        cout << "Rectangle constructor called" << endl;
    }

    ~Rectangle() override
    {
        cout << "Rectangle destructor called" << endl;
    }

    void draw() override
    {
        cout << "Drawing a rectangle" << endl;
    }
};

int main()
{
    vector<Shape *> shapes;
    shapes.push_back(new Circle());
    shapes.push_back(new Rectangle());

    for (auto shape : shapes)
    {
        shape->draw();
        delete shape;
    }

    return 0;
}