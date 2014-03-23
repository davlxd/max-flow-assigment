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
	queue<int> myQueue;
	Map *map;
	long BFS(Node *s, Node *t);
	static const long MAX_CAPACITY = 2000000;
	long capacity[13][13];
	long flow[13];
	int pre[13];

	void dataStruConvert();
	long BFS(int src, int des);
	long maxFlow(int src, int des);
};

#endif
