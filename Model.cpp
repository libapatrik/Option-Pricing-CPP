#include "Model.hpp"

BlackScholesModel::BlackScholesModel(double spot, double mu, double sigma)
	: _initValue(spot), _drift(mu), _volatility(sigma)
	// Actually it calls the copy constructor of each data member
{
}

BlackScholesModel::BlackScholesModel(const BlackScholesModel& model)
	: _initValue(model._initValue), _drift(model._drift), _volatility(model._volatility)
{}

BlackScholesModel& BlackScholesModel::operator=(const BlackScholesModel & model)
{
	if (this != &model)
	{
		_initValue = model._initValue;
		_drift = model._drift;
		_volatility = model._volatility;
	}

	return *this;
}

BlackScholesModel::~BlackScholesModel()
{
}

