#include "EK.h"
#include "Map.h"
//Edmond-Karp algo


long EK::BFS(Node *s, Node *t) {
	while (!myQueue.empty()) {
		myQueue.pop();
	}
	for (vector<Node*>::iterator it = map->nodeList->begin(); it != map->nodeList->end(); it++) {
		Node *n = *it;
		n->preNode = NULL;
	}
	
	s->flow = EK::MAX_CAPACITY;
	myQueue.push(s);
	while (!myQueue.empty()) {
		Node *index = myQueue.front();
		myQueue.pop();
		if (index == t)
			break;
		for (int i = 1; i < map->nodeList->size(); i++) {
			Node *current = map->nodeList->at(i);
			if (current != s && index->itsCapacityGoesTo(current)>0 && current->preNode == NULL) {
				current->preNode = index;
				current->flow = min(index->itsCapacityGoesTo(current), index->flow);
				myQueue.push(current);
			}
		}
	}

	if (t->preNode == NULL) {
		return -1; // No augmenting path no more;
	}
	return t->flow;
}




void EK::getMaxFlow() {
	map = new Map();
	map->init();


	Node *s = map->nodeList->at(0);
	Node *t = map->nodeList->at(map->nodeList->size() - 1);
	long incre = 0;
	long sunFlow = 0;
	while ((incre = BFS(s, t)) != -1) {
		Node *current = t;
		while (current != s) {
			Node *pre = current->preNode;
		}
	}

}