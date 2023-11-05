#include <iostream>
#include <algorithm>

#include "fraction.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
    fraction a, b;
	
    cout << "ISTREAM EXAMPLE" << endl;
	cin >> a >> b;
    
	cout << "OSTREAM EXAMPLE" << endl;
	cout << a << " " << b << endl;
    
	cout << "SUM EXAMPLE" << endl;
	cout << "a+b: " << a+b << endl;
    
	cout << "SUB EXAMPLE" << endl;
	cout << "a-b: " << a-b << endl;
    
	cout << "MUL EXAMPLE" << endl;
	cout << "a*b: " << a*b << endl;
    
	cout << "DIV EXAMPLE" << endl;
	cout << "a/b: " << a/b << endl;
    
	cout << "INT DIV EXAMPLE" << endl;
	cout << "1480/b: " << 1480/b << endl;
    
	cout << "DIV WITH INT EXAMPLE" << endl;
	cout << "b/1480: " << b/1480 << endl;
    
	cout << "INT MULLTIPLY EXAMPLE" << endl;
	cout << "1480*b: " << 1480*b << endl;
    
	cout << "MULLTIPLY INT EXAMPLE" << endl;
	cout << "b*1480: " << b*1480<< endl;
    
	cout << "DOUBLE EXAMPLE" << endl;
	cout << double(b) << endl;
    
	return 0;
}