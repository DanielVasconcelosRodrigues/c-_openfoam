#include <iostream>
using namespace std;

int addition(int& a, int& b)
{
	int a,b,c;
	c=a+b;
	return c;
}


int main()
{
	int a,b;
	a=3;
	b=5;
	cout << addition(3,5) << endl;
	return 0;
}