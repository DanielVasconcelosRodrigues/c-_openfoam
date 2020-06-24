#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() 
{
	double rho, U, mu, D;
	
	cout << "input density in kg/m3" << endl;
	cin >> rho;
	cout << "input velocity in m/s" << endl;
	cin >> U;
	cout << "input dynamic viscosity in SI units" << endl;
	cin >> mu;
	cout << "input characteristic length in m" << endl;
	cin >> D;
	
	
	// calculate reynolds number
	cout << "The Reynolds number is: ";
	cout << rho*U*D/mu << endl;
	
	return 0;
}