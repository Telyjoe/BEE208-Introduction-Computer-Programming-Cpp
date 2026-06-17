#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    if (num > 0 && (num & (num - 1) ) == 0)
    
        cout << "Number is a power of 2";
    else
	    cout << "Number is not a power of 2";
		    
        return 0;
}

