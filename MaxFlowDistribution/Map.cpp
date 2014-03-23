#include "Map.h"


Map::Map() {
	nodeList = new vector<Node*>;
	pathList = new vector<Path*>;
}

Map::~Map() {
	delete nodeList;
	delete pathList;
}

void Map::initNodeList() {
	Node *n = new Node("S"); nodeList->push_back(n);
	n = new Node("Boston"); nodeList->push_back(n);
	n = new Node("Jacksonville"); nodeList->push_back(n);
	n = new Node("Hamburg"); nodeList->push_back(n);
	n = new Node("Rotterdam"); nodeList->push_back(n);
	n = new Node("Napoli"); nodeList->push_back(n);
	n = new Node("London"); nodeList->push_back(n);
	n = new Node("Berlin"); nodeList->push_back(n);
	n = new Node("Istanbul"); nodeList->push_back(n);
	n = new Node("St. Persburg"); nodeList->push_back(n);
	n = new Node("Moscow"); nodeList->push_back(n);
	n = new Node("Rostov"); nodeList->push_back(n);
	n = new Node("T"); nodeList->push_back(n);
}

void Map::initPathList() {
	//Path *r = new Path(); 
	//pathList->push_back(r);

}
void Map::init() {
	initNodeList();
	initPathList();
}

void Map::uninit() {

}



