#include<iostream>

using namespace std;
class inlineFunction {

	public:
		inline  float area(float length, float width) {
		return length * width;
	}

};


int main() {
	inlineFunction  A;
	
	cout<<"the area  is: "<< A.area(23.3, 32.0) << endl;

	return 0 ;
}
