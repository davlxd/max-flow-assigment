#include <iostream>
#include <stdlib.h>
#include "Path.h"
#include "Node.h"
#include "Map.h"
#include "EK.h"
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

	for (vector<Node*>::iterator it = map->nodeList->begin(); it != map->nodeList->end(); it++)
	{
		Node *n = *it;
		cout << n->getName() << endl;

		for (int i = 0; i < n->outPaths->size(); i++) {
			Path *p = n->outPaths->at(i);
			Node *n1 = n->nextNodes->at(i);
			//cout << "    " << n1->getName() << "        " << p->getUnit() << "  " << p->getUnitCost() << "      " << p->getCapacity() << "  " << p->getLimit() << endl;
			cout << "    " << n1->getName() << "        " << p->getUnit() << "  " << p->getUnitCost() << "      " << p->getCapacity() << "  " << p->getLimit() << endl;
		}

		//cout << n->getName() << "  " << n->inPaths->size() << "  " << n->outPaths->size() << endl;
	}
}


void test_itsCapacityGoesTo() {
	Map *map = new Map();
	map->init();

	Node *node0 = map->nodeList->at(0);
	Node *node1 = map->nodeList->at(1);
	Node *node2 = map->nodeList->at(2);
	Node *node3 = map->nodeList->at(3);
	Node *node9 = map->nodeList->at(9);

	cout << node0->itsCapacityGoesTo(node2) << endl;
	cout << node1->itsCapacityGoesTo(node3) << endl;
	cout << node3->itsCapacityGoesTo(node9) << endl;

}

int main(int argc, char *argv) {
	//test_node_init();
	//test_path_functions();
	test_itsCapacityGoesTo();


	//EK *ek = new EK();
	//ek->getMaxFlow();

	system("pause");
}