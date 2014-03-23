#ifndef EK_H
#define EK_H

#include <iostream>
#include <queue>
#include "Map.h"
#include "Node.h"
using namespace std;

//Edmond-Karp algo
class EK {
public:
	void getMaxFlow();

private:
	queue<Node*> myQueue;
	Map *map;
	long BFS(Node *s, Node *t);
	static const long MAX_CAPACITY = 2000000;
};

#endif
