#ifndef PATH_H
#define PATH_H

#include <iostream>
#include "Node.h"
using namespace std;

class Path {
public:
	//There 2 magic numbers here
	//capacity = 1000000 is max flow
	Path(Node *from, Node *to, long unitCost) :capacity(1000000), limit(1000000), unitCost(unitCost){};
	
	void setFrom(Node *from);
	void setTo(Node *to);
	
	void setUnit(double unit);
	double getUnit();
	void setLimit(int limit);
	int getLimit();

	long getUnitCost();

	long getCapacity();
	long long getCapacityCost();
private:
	Node *from;
	Node *to;
	double unit;
	int limit;
	long capacity;

	long unitCost;

};

#endif