#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	
	//increment dan decrement

	/*Increment ada 2 : preincrement dan postincrement*/

	int a = 5;
	int b = 5;

	//postincrement
	cout << a << endl;
	cout << a++ << endl; // diprint a dlu baru ditambah satu ,a++ = a + 1
	cout << a << endl;

	cout << endl;

	//preincrement
	cout << b << endl;
	cout << ++b << endl;// di print tambah satu dlu , b++ = 1 + b
	cout << b << endl;

	cout << endl;

	//predecrement
	cout << a << endl;
	cout << a-- << endl; // diprint a dlu baru dikurang satu ,a-- = a - 1
	cout << a << endl;

	cout << endl;

	//postdecrement
	cout << b << endl;
	cout << --b << endl; // diprint b dlu baru dikurang satu ,--b = b - 1
	cout << b << endl;
	

	cin.get();
	cin.get();
	return 0;
}
