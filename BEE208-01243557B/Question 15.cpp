#include <iostream>
using namespace std;

int main() {
	float a, b;
	
	cout << "Enter two floating-point number: ";
	cin >> a >> b;
	
	cout  << "Larger number = " << (a >  b ? a : b);
	
	return 0;
}
