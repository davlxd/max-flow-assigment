#ifndef NODE_H
#define NODE_H
#include <string>
//#include "Path.h"
#include <vector>
using namespace std;

//City or port
class Node{
public:
	Node(string name) : name(name){};
	string getName();

	//vector<Path*> *inPaths;
	//vector<Path*> *outPaths;

	//void addInPaths(Path *n);
	//void addOutPaths(Path *n);

private:
	~Node();
	string name;


};

#endif