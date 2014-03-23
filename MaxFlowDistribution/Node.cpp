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

Node::~Node() {
	delete inPaths;
	//if (outPaths->size == 0) {
	//	delete outPaths;
	//}
}
string Node::getName(){
	return name;
}