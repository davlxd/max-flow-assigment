#include <iostream>
#include <stdlib.h>
#include "Path.h"
#include "Node.h"
#include "Map.h"
using namespace std;

void test_path_functions() {

	Path *path = new Path(50000, 17.6);
	//path->setLimit(2500);

	cout << path->getUnitCost() << endl;
	cout << path->getUnit() << endl;

	cout << path->getCapacity() << endl;
	cout << path->getCapacityCost() << endl;
}

void test_node_init() {
	Path *path = new Path(50000, 17.5);
	Node *node = new Node("alex");
	cout << node->getName() << endl;
	node->addOutPaths(path);
	cout << node->outPaths->size() << endl;
	cout << node->outPaths->at(0)->getCapacity() << endl;
	cout << node->outPaths->at(0)->getUnitCost() << endl;
}


void test_map_init() {
	Map *map = new Map();
	map->init();
	cout << map->nodeList->size() << endl;

	for (vector<Node*>::iterator it = map->nodeList->begin(); it != map->nodeList->end(); it++)
	{
		Node *n = *it;
		cout << n->getName() << endl;

		for (vector<Path*>::iterator it1 = n->inPaths->begin(); it1 != n->inPaths->end(); it1++) {
			Path *p = *it1;
			cout << "    " << p->getUnit() << "  " << p->getUnitCost() <<  endl;
		}

		for (vector<Path*>::iterator it1 = n->outPaths->begin(); it1 != n->outPaths->end(); it1++) {
			Path *p = *it1;
			cout << "    " << p->getUnit() << "  " << p->getUnitCost() << endl;

		}

		cout << n->getName() << "  " << n->inPaths->size() << "  " << n->outPaths->size() << endl;
	}
}
int main(int argc, char *argv) {
	//test_node_init();
	//test_path_functions();
	test_map_init();
	system("pause");
}