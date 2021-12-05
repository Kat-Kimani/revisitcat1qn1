#include<iostream>
using namespace std;

int main() {
	double const pi = 3.141592;
	double radius, height;
    double area, volume;
	
	//double num = 2;

	cout << "Find the area and the volume of a cylinder " << endl;
	cout << "Please key in the radius and height of the triangle : " << endl;
	cin >> radius >> height;

	//double num1 = (2 * pi * radius * height);
	//double num2 = (2 * pi * radius * radius);
	//area = num1 + num2;
	area = (2 * pi * radius * height) + (2 * pi * radius * radius);
	volume = (pi * radius * radius * height);

	cout << "The area of the cylinder is " << area << endl;
	cout << "The Volume of a cylinder is " << volume << endl;

	return 0;
}