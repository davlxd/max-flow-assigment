#ifndef PATH_H
#define PATH_H

#include <iostream>
///#include "Node.h"
using namespace std;

class Path {
public:
	//There 2 magic numbers here
	//capacity = 1000000 is max flow
	Path(long unitCost, double unit) :capacity(1000000), limit(1000000), unitCost(unitCost), unit(unit){};
	
	
	void setUnit(double unit);
	double getUnit();
	void setLimit(int limit);
	int getLimit();

	long getUnitCost();

	long getCapacity();
	void setCapacity(long capacity);
	long long getCapacityCost();

private:
	double unit;
	int limit;
	long capacity;

	long unitCost;

};

#endif