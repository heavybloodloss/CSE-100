#include <iostream>
#include <cmath>
using namespace std;
double getRadius();
double findCircumference(double circumference);
double findArea(double area);


int main()
{
double radius,      //the radius of the circle
area,               //the area of the circle
circumference;      //the circumference of the circle

//gets the valuse of the radius from the user
radius = getRadius();

//determine the area and circumference
area = findArea(radius);
circumference = findCircumference(radius);

//output the results
cout << "A cicle of radius " << radius << " has an area of: " << area << endl;
cout << "and the circumference of: " << circumference << endl;


	system("pause");
	return 0;
}
double getRadius()
{
	double r = 0;
	cout << "What is the radius of the circle?" << endl;
	cin >> r;
	return r;
}
double findArea(double radius)
{
	double area;
	area = 3.14159*radius*radius;
	return area;
}
double findCircumference(double radius)
{
	double circumference;
	circumference = 2 * 3.14159*radius;
	return circumference;
}