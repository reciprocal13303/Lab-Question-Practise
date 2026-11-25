#include<bits/stdc++.h>
using namespace std;

class Shape
{
protected:
    double dimension;
public:
    void getDimension()
    {
        cin>>dimension;

    }
    virtual double calculateArea()=0;
};
class Square : public Shape
{
public:

    double calculateArea()
    {
        return dimension*dimension;
    }

};
class Circle : public Shape
{
public:

    const double pi=3.1416;
    double calculateArea()
    {
        return pi*dimension*dimension;
    }

};

int main()
{
    Square s;
    Circle c;

    cout<<"Enter the length of square:  "<<endl;
    s.getDimension();
    cout<<"Enter the radius of the circle: "<<endl;
    c.getDimension();

    cout<<"The area of the square:  "<<s.calculateArea()<<endl;
    cout<<"The area of the circle:  "<<c.calculateArea()<<endl;
    return 0;

}
