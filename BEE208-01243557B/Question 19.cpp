#include <iostream>
#include <cmath>
using namespace std;

int main() {
	long long binary;
	int decimal = 0, i = 0, remainder;
	
	cout << "Enter a binary number: ";
	cin >> binary;
	
	long long temp = binary;
	
	while (temp != 0) { remainder = temp % 10; decimal += remainder * pow(2, i); temp /= 10; i++;
}
cout << "Decimal = " << decimal << endl;
cout << "Octal = " << oct << decimal << endl;
cout << "Hexadecimal = " << hex << decimal << endl;
return 0;
}

	
		
	

