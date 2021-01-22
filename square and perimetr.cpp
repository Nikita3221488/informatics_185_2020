#include <iostream>
#include <cmath>
using namespace std; 

void perimetr(float a, float b, float c, float d) {
	cout << "It's perimetr of your trapezoid:  " << a + b + c + d << endl;
}
 
void perimetr(float pi, float r) {
	cout << "That's perimetr of your circle: " << 2 * pi * r << endl;
}

void perimetr(float a) {
	cout << "Here is perimetr of your square: " << 4 * a << endl;
}

void square(float a, float b, float h) {
	cout << "It's square of your trapezoid: " << ((a + b) / 2) * h << endl; 
}

void square(float pi, float r) {
	cout << "It's square of your circle: " << pi * pow(r, 2) << endl; 
}

void square(float a) {
	cout << "It's square of your square: " << pow(a, 2) << endl; 
}

int main() {
	const float pi = 3.14; 

	perimetr(4, 10, 5, 5);
	perimetr(pi, 5);
	perimetr(2);
	square(4, 10, 4);
	square(pi, 5);
	square(5);

	return 0;
}