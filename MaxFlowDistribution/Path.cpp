# include "Path.h"

void Path::setFrom(Node *from) {
	this->from = from;
//	from->addOutPaths(this);
}

void Path::setTo(Node *to) {
	this->to = to;
//	to->addInPaths(this);
}

void Path::setUnit(double unit) {
	this->unit = unit;
}
double Path::getUnit() {
	return unit;
}

void Path::setLimit(int limit) {
	this->limit = limit;
}
int Path::getLimit() {
	return limit;
}

long Path::getUnitCost() {
	return unitCost;
}

long Path::getCapacity() {
	long calculated_capacity = limit * unit;
	return calculated_capacity < capacity ? calculated_capacity : capacity;
}

long long Path::getCapacityCost() {
	long capacity = getCapacity();
	double capacity_vehicle_count = capacity / unit;
	return unitCost * capacity_vehicle_count;
}

