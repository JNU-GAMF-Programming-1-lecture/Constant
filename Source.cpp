# include <iostream>
using namespace std;
const double PI = 3.1415;     // Capital letters are not compulsory
int main()
{
	int r;
	cout << "Radius" << endl;
	cin >> r;
	cout << "Perimeter of the circle: " <<2 * r * PI << endl;
	cout << "Area of the circle: " <<r * r * PI << endl;
	cout << "Surface of the sphere: " <<4*r * r * PI << endl;
	cout << "Volume of the sphere: "<<4.0/3.0*r*r* r*PI<< endl;
	return 0;
}
