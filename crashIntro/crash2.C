#include <iostream>
using namespace std;

#define PI 3.14159
#define NewLine '\n'

int main()
{
		const float pi=3.14159;
		float r=1.0;
		double area_circle, area_circle2;
		area_circle=pi*r*r;
		area_circle2=PI*r*r;
		cout << area_circle << NewLine;
		cout << area_circle2 << NewLine;
		return 0;
}