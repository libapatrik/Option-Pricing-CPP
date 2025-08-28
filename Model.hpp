// #pragma once

#ifndef MODEL_HPP
#define MODEL_HPP

#include <cmath>

/*namespace PL
{
	
	double exp(double x)
	{
		return  1. + x + 0.5 * x * x ;
	}

}*/


// Passing by reference vs Passing by value


// Pass by value
void swap_value(double a, double b)
{
	double temp = b; // double temp = b_copy;
	b = a;           // b_copy = a_copy
	a = temp;        // a_copy = temp    
}

void swap_reference(double& a, double& b)
{
	double temp = b;
	b = a;
	a = temp;
}


// The Financial Models we consider are defined by Ito processes only
// Drift term and diffusion terms are functions of 2 variables - deterministic

class BlackScholesModel
{
public:
	// Default constructor
	BlackScholesModel() = default;
	// Constructor with parameters
	BlackScholesModel(double spot, double mu, double sigma);
	// Copy constructor
	BlackScholesModel(const BlackScholesModel& model);

	// Copy Assignment Operator
	BlackScholesModel& operator=(const BlackScholesModel& model);

	// Destructor
	~BlackScholesModel();

private: // default constructor will call the default constructor for each data member
	double _initValue;
	double _drift;
	double _volatility;
};


#endif