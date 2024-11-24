#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;
template <typename T>
class Shape
{
protected:
    T dim1;

public:
    Shape(T d1):dim1(d1) {}

    virtual T area() const=0; //pure virtual function for area
};

template <typename T>
class Circle:public Shape<T>
{
public:
    Circle(T rad):Shape<T>(rad) {}

    T area() const override
    {
        return M_PI * this->dim1 * this->dim1;
    }
};

template <typename T>
class Cube:public Shape<T>
{
public:
    Cube(T side):Shape<T>(side) {}

    T area() const override
    {
        return 6*this->dim1*this->dim1;
    }

};

int main()
{
    int shapeType;
    cin>>shapeType;

    //Circle
    if(shapeType==1)
    {
        double radius;
        cin>>radius;

        Circle<double> circle(radius);

        cout<<"Circle Details: "<<endl;
        cout<<"Circle with radius: "<<radius<<endl;
        cout<<"Area: "<<fixed<<setprecision(4)<<circle.area()<<endl;
    }
    else if(shapeType==2)
    {
        double side;
        cin>>side;

        Cube<double> cube(side);

        cout<<"Cube Details:"<<endl;
        cout<<"Cube with side length:"<<side<<endl;
        cout << "Surface area: " << static_cast<int>(round(cube.area())) << endl;

    }
    else
    {
        cout << "Invalid shape type selected." << endl;
    }


    return 0;
}
