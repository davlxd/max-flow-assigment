#include "Map.h"


Map::Map() {
	nodeList = new vector<Node*>;
}

Map::~Map() {
	delete nodeList;
}

void Map::initNodeList() {
	Node *s = new Node("S"); nodeList->push_back(s);
	Node *boston = new Node("Boston"); nodeList->push_back(boston);
	Node *jack = new Node("Jacksonville"); nodeList->push_back(jack);
	Node *hamburg = new Node("Hamburg"); nodeList->push_back(hamburg);
	Node *rotterdam = new Node("Rotterdam"); nodeList->push_back(rotterdam);
	Node *napoli = new Node("Napoli"); nodeList->push_back(napoli);
	Node *london = new Node("London"); nodeList->push_back(london);
	Node *berlin = new Node("Berlin"); nodeList->push_back(berlin);
	Node *istanbul = new Node("Istanbul"); nodeList->push_back(istanbul);
	Node *petersburg = new Node("St. Petersburg"); nodeList->push_back(petersburg);
	Node *moscow = new Node("Moscow"); nodeList->push_back(moscow);
	Node *rostov = new Node("Rostov"); nodeList->push_back(rostov);
	Node *t = new Node("T"); nodeList->push_back(t);

	Path *p = new Path(0, 1); //Magic number, just make sure 1 * [default limit] > [deault capacity]
	s->addOutPaths(p);
	boston->addInPaths(p);

	p = new Path(0, 1); //Magic number, just make sure 1 * [default limit] > [deault capacity]
	s->addOutPaths(p); jack->addInPaths(p);

	p = new Path(50000, 150);
	boston->addOutPaths(p); berlin->addInPaths(p);

	p = new Path(30000, 240);
	boston->addOutPaths(p); hamburg->addInPaths(p);

	p = new Path(55000, 150);
	boston->addOutPaths(p); istanbul->addInPaths(p);
	
	p = new Path(45000, 150);
	boston->addOutPaths(p); london->addInPaths(p);

	p = new Path(30000, 240);
	boston->addOutPaths(p); rotterdam->addInPaths(p);

	p = new Path(32000, 240);
	boston->addOutPaths(p); napoli->addInPaths(p);

	p = new Path(57000, 150);
	jack->addOutPaths(p); berlin->addInPaths(p);

	p = new Path(48000, 240);
	jack->addOutPaths(p); hamburg->addInPaths(p);

	p = new Path(61000, 150);
	jack->addOutPaths(p); istanbul->addInPaths(p);

	p = new Path(49000, 150);
	jack->addOutPaths(p); london->addInPaths(p);

	p = new Path(44000, 240);
	jack->addOutPaths(p); rotterdam->addInPaths(p);

	p = new Path(56000, 240);
	jack->addOutPaths(p); napoli->addInPaths(p);

	p = new Path(24000, 150);
	berlin->addOutPaths(p); petersburg->addInPaths(p);

	p = new Path(3000, 17.6);
	hamburg->addOutPaths(p); petersburg->addInPaths(p);

	p = new Path(28000, 150);
	istanbul->addOutPaths(p); petersburg->addInPaths(p);

	p = new Path(22000, 150);
	london->addOutPaths(p); petersburg->addInPaths(p);

	p = new Path(3000, 17.6);
	rotterdam->addOutPaths(p); petersburg->addInPaths(p);

	p = new Path(5000, 17.6);
	napoli->addOutPaths(p); petersburg->addInPaths(p);

	p = new Path(22000, 150);
	berlin->addOutPaths(p); moscow->addInPaths(p);

	p = new Path(4000, 17.6);
	hamburg->addOutPaths(p); moscow->addInPaths(p);

	p = new Path(25000, 150);
	istanbul->addOutPaths(p); moscow->addInPaths(p);

	p = new Path(19000, 150);
	london->addOutPaths(p); moscow->addInPaths(p);

	p = new Path(5000, 17.6);
	rotterdam->addOutPaths(p); moscow->addInPaths(p);

	p = new Path(5000, 17.6);
	napoli->addOutPaths(p); moscow->addInPaths(p);

	p = new Path(23000, 150);
	berlin->addOutPaths(p); rostov->addInPaths(p);

	p = new Path(7000, 17.6);
	hamburg->addOutPaths(p); rostov->addInPaths(p);

	p = new Path(2000, 150);
	istanbul->addOutPaths(p); rostov->addInPaths(p);

	p = new Path(4000, 150);
	london->addOutPaths(p); rostov->addInPaths(p);

	p = new Path(8000, 17.6);
	rotterdam->addOutPaths(p); rostov->addInPaths(p);

	p = new Path(9000, 17.6);
	napoli->addOutPaths(p); rostov->addInPaths(p);


	p = new Path(0, 1); //Magic number, just make sure 1 * [default limit] > [deault capacity]
	petersburg->addOutPaths(p); t->addInPaths(p);

	p = new Path(0, 1); //Magic number, just make sure 1 * [default limit] > [deault capacity]
	moscow->addOutPaths(p);	t->addInPaths(p);

	p = new Path(0, 1); //Magic number, just make sure 1 * [default limit] > [deault capacity]
	rostov->addOutPaths(p);	t->addInPaths(p);
}

void Map::init() {
	initNodeList();
}

void Map::uninit() {

}



