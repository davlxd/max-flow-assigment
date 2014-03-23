#include "Node.h"

//Node::Node(string name) {
//	inPaths = new vector<Path*>;
//	outPaths = new vector<Path*>;
//}

//void Node::addInPaths(Path *n) {
//	inPaths->push_back(n);
//}

//void Node::addOutPaths(Path *n) {
//	outPaths->push_back(n);
//}
//Node::~Node() {
//	delete inPaths;
//	delete outPaths;
//}
string Node::getName(){
	return name;
}