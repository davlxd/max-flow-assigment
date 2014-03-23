#ifndef NODE_H
#define NODE_H
#include <string>
#include "Path.h"
#include <vector>
using namespace std;

//City or port
class Node{
public:
	Node(string name);
	string getName();

	vector<Node*> *nextNodes;

	vector<Path*> *inPaths;
	vector<Path*> *outPaths;

	void addInPaths(Path *n);
	void addOutPaths(Path *n);

	long flow; //for EK usage
	Node *preNode; //for EK usage
	long itsCapacityGoesTo(Node *);

private:
	~Node();
	string name;


};

#endif