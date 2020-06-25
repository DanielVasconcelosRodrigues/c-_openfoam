/// Finite volume CFD application header

#include "fvCFD.H"

int main( int argc, char *argv[] ) 
{
	dimensionedScalar inputPressure =
		dimensionedScalar
		(
			"pressure", /// A name field
			dimensionSet( 1, -1, -2, 0, 0, 0, 0 ),
			1.013 * 100000 /// Value to initialize
		);	
	
	dimensionedScalar inputVelocity =
		dimensionedScalar
		(
			"velocity", /// A name field
			dimensionSet( 0, 1, -1, 0, 0, 0, 0 ),
			4.0 /// Value to initialize
		);
		
	dimensionedScalar Mach =
		dimensionedScalar
		(
			"dimless", /// A name field
			dimless,
			3.0 /// Value to initialize
		);
	
	inputPressure.value() = Mach.value();
		
	Info << inputPressure << "\n";
	Info << inputVelocity << "\n";		
	Info << Mach << "\n";	
	return 0;
	
	
}
