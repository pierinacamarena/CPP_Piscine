/* C++ Program to demonstrate use of left shift
operator */
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	// a = 5(00000101), b = 9(00001001)
	// unsigned char a = 5, b = 9;

	const int	n = 10;
	const float f = 42.42f;
	int	value;
	int	new_value;

	value = n * (1 << 8);
	cout <<"value is " << value << endl;
	new_value = value >> 8;
	cout <<"new_value is " << new_value << endl;


	// this->_value = roundf(f * (1 << this->_nbBits))

	value = roundf(f * (1 << 8));
	cout <<"fvalue is " << value << endl;
	new_value = (float)(value) / (1 << 8);
	cout <<"fnew_value is " << new_value << endl;


	// return ((float)(this->_value / (float)(1 << this->_nbBits)));


	return 0;
}

// This code is contributed by shivanisinghss2110
