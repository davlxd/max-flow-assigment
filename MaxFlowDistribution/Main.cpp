#include <iostream>
#include <stdlib.h>
#include "Path.h"
#include "Node.h"
#include "Map.h"
using namespace std;


void test_node_init() {
	Node *node = new Node("alex");
	cout << node->getName() << endl;
//	cout << node->inPaths->size() << endl;
//	cout << node->outPaths->size() << endl;
}

void test_route_functions() {
	Node *from = new Node("from");
	Node *to = new Node("to");

	Path *path = new Path(from, to, 50000);
	path->setUnit(17.6);
	//route->setLimit(2500);

	cout << path->getUnitCost() << endl;
	cout << path->getUnit() << endl;

	cout << path->getCapacity() << endl;
	cout << path->getCapacityCost() << endl;
}

void test_map_init() {
	Map *map = new Map();
	map->init();
}
int main(int argc, char *argv) {
	//test_map_init();
	test_node_init();
	system("pause");
}