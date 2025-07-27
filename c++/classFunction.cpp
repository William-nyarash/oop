#include<iostream>

using namespace std;

class  triangle {

	int height, base;
	public:
	void get_data();int area();
};

void triangle::get_data() {
cout <<"Enter the base : " ; cin>> base;
cout<<"Enter the height of the triangle: "; cin>> height;
}

int triangle::area() {
// calculate the area of the triangle

return  0.5 * base * height;
}

int main () {

triangle t;

t.get_data();
cout<<"Area of rectangle is:  "<<t.area() <<endl;

return 0;
}
