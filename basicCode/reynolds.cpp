#include <iostream>

using namespace std;

void Reynolds(double rho, double U, double mu, double D);

int main() {
	double rho, U, mu, D;
	cout << "Indique a massa volumica do fluido:	" << endl;
	cin >> rho;
	cout << "Indique a Velocidade do escoamento de aproximaçao:	" << endl;
	cin >> U;
	cout << "Indique a viscosidade do fluido:	" << endl;
	cin >> mu;
	cout << "Indique o comprimento caracteristico:	" << endl;
	cin >> D;
	Reynolds(rho, U, mu, D);
}

void Reynolds(double rho, double U, double mu, double D)
{
	cout << (rho*U*D)/mu << endl;
}
