#ifndef MAP_H
#define MAP_H

#include <vector>
#include <iostream>
#include "Node.h"
#include "Path.h"
using namespace std;

class Map {

public:
	Map();
	void init();
	vector<Node *> *nodeList;

private:
	~Map();
	void initNodeList();
	void uninit();
	

};

#endif