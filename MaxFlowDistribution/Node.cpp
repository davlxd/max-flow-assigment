#include "Node.h"

Node::Node(string name) : name(name){
	//this->name = name;
	inPaths = new vector<Path*>;
	outPaths = new vector<Path*>;
	nextNodes = new vector<Node*>;
}

void Node::addInPaths(Path *n) {
	inPaths->push_back(n);
}

void Node::addOutPaths(Path *n) {
	outPaths->push_back(n);
}

long Node::itsCapacityGoesTo(Node *node) {
	for (int i = 0; i < outPaths->size(); i++) {
		if (nextNodes->at(i) == node) {
			return outPaths->at(i)->getCapacity();
		}
	}
	return 0;
}

Node::~Node() {
	delete inPaths;
	//if (outPaths->size == 0) {
	//	delete outPaths;
	//}
}
string Node::getName(){
	return name;
}