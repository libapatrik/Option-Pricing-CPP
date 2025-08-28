#include "Model.hpp"


// void will be like a procedure -> set of instructions
void main()
{
	//BlackScholesModel model;
	BlackScholesModel bs1(100., 0.03, 0.2);  // constructor with parms

	BlackScholesModel bs2(bs1); // The object bs2 does not exist yet

	BlackScholesModel bs3(200., 0.05, 0.1);
	bs3 = bs1;                 // The object bs3 was already constructed -> returns bs3.operator=(bs1) 

	BlackScholesModel bs4 = bs1; // Either it calls default constructor -> assigment operator
	                             // either it calls just the copy constructor 

	double a = 5.2;
	double b = -2.7;

	swap_value(a, b);     // a and b won't be swapped
	swap_reference(a, b); // a and b will be swapped


	
}