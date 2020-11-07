#include <iostream>
#include "rectangle.cpp"
using namespace std;

int main(){
	int length = 8;
	int width = 2;
	Rectangle* example = new Rectangle(8, 2);
	cout << "Rectangle of length: " << length << " and width: " << width << ":" <<endl;
	cout << "Area: " << example->area() << endl;
	cout << "Perimeter: " << example->perimeter() << endl;

	return 0;
}
