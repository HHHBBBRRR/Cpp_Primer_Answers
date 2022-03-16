#include<iostream>

using std::cin;
using std::cout;
using std::endl;

void swap(int& a, int& b)
{
	int temp = b;
	b = a;
	a = temp;
}
