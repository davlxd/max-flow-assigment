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
	p->setCapacity(500000);
	s->nextNodes->push_back(boston); s->addOutPaths(p); boston->addInPaths(p);

	p = new Path(0, 1); //Magic number, just make sure 1 * [default limit] > [deault capacity]
	p->setCapacity(500000);
	s->nextNodes->push_back(jack); s->addOutPaths(p); jack->addInPaths(p);

	p = new Path(50000, 150);
	boston->nextNodes->push_back(berlin); boston->addOutPaths(p); berlin->addInPaths(p);

	p = new Path(30000, 240);
	boston->nextNodes->push_back(hamburg); boston->addOutPaths(p); hamburg->addInPaths(p);

	p = new Path(55000, 150);
	boston->nextNodes->push_back(istanbul); boston->addOutPaths(p); istanbul->addInPaths(p);
	
	p = new Path(45000, 150);
	boston->nextNodes->push_back(london); boston->addOutPaths(p); london->addInPaths(p);

	p = new Path(30000, 240);
	boston->nextNodes->push_back(rotterdam); boston->addOutPaths(p); rotterdam->addInPaths(p);

	p = new Path(32000, 240);
	boston->nextNodes->push_back(napoli); boston->addOutPaths(p); napoli->addInPaths(p);

	p = new Path(57000, 150);
	jack->nextNodes->push_back(berlin); jack->addOutPaths(p); berlin->addInPaths(p);

	p = new Path(48000, 240);
	jack->nextNodes->push_back(hamburg); jack->addOutPaths(p); hamburg->addInPaths(p);

	p = new Path(61000, 150);
	jack->nextNodes->push_back(istanbul); jack->addOutPaths(p); istanbul->addInPaths(p);

	p = new Path(49000, 150);
	jack->nextNodes->push_back(london); jack->addOutPaths(p); london->addInPaths(p);

	p = new Path(44000, 240);
	jack->nextNodes->push_back(rotterdam); jack->addOutPaths(p); rotterdam->addInPaths(p);

	p = new Path(56000, 240);
	jack->nextNodes->push_back(napoli); jack->addOutPaths(p); napoli->addInPaths(p);

	p = new Path(24000, 150);
	berlin->nextNodes->push_back(petersburg); berlin->addOutPaths(p); petersburg->addInPaths(p);

	p = new Path(3000, 17.6); p->setLimit(0);
	hamburg->nextNodes->push_back(petersburg); hamburg->addOutPaths(p); petersburg->addInPaths(p);
	
	p = new Path(28000, 150);
	istanbul->nextNodes->push_back(petersburg); istanbul->addOutPaths(p); petersburg->addInPaths(p);

	p = new Path(22000, 150);
	london->nextNodes->push_back(petersburg); london->addOutPaths(p); petersburg->addInPaths(p);

	p = new Path(3000, 17.6); p->setLimit(0);
	rotterdam->nextNodes->push_back(petersburg); rotterdam->addOutPaths(p); petersburg->addInPaths(p);

	p = new Path(5000, 17.6); p->setLimit(0);
	napoli->nextNodes->push_back(petersburg); napoli->addOutPaths(p); petersburg->addInPaths(p);

	p = new Path(22000, 150);
	berlin->nextNodes->push_back(moscow); berlin->addOutPaths(p); moscow->addInPaths(p);

	p = new Path(4000, 17.6);
	hamburg->nextNodes->push_back(moscow); hamburg->addOutPaths(p); moscow->addInPaths(p);

	p = new Path(25000, 150);
	istanbul->nextNodes->push_back(moscow); istanbul->addOutPaths(p); moscow->addInPaths(p);

	p = new Path(19000, 150);
	london->nextNodes->push_back(moscow); london->addOutPaths(p); moscow->addInPaths(p);

	p = new Path(5000, 17.6);
	rotterdam->nextNodes->push_back(moscow); rotterdam->addOutPaths(p); moscow->addInPaths(p);

	p = new Path(5000, 17.6);
	napoli->nextNodes->push_back(moscow); napoli->addOutPaths(p); moscow->addInPaths(p);

	p = new Path(23000, 150); p->setLimit(200);
	berlin->nextNodes->push_back(rostov); berlin->addOutPaths(p); rostov->addInPaths(p);

	p = new Path(7000, 17.6); p->setLimit(2500);
	hamburg->nextNodes->push_back(rostov); hamburg->addOutPaths(p); rostov->addInPaths(p);

	p = new Path(2000, 150);
	istanbul->nextNodes->push_back(rostov); istanbul->addOutPaths(p); rostov->addInPaths(p);

	p = new Path(4000, 150); p->setLimit(200);
	london->nextNodes->push_back(rostov); london->addOutPaths(p); rostov->addInPaths(p);

	p = new Path(8000, 17.6); p->setLimit(2500);
	rotterdam->nextNodes->push_back(rostov); rotterdam->addOutPaths(p); rostov->addInPaths(p);

	p = new Path(9000, 17.6); p->setLimit(2500);
	napoli->nextNodes->push_back(rostov); napoli->addOutPaths(p); rostov->addInPaths(p);


	p = new Path(0, 1); //Magic number, just make sure 1 * [default limit] > [deault capacity]
	p->setCapacity(320000);
	petersburg->nextNodes->push_back(t); petersburg->addOutPaths(p); t->addInPaths(p);

	p = new Path(0, 1); //Magic number, just make sure 1 * [default limit] > [deault capacity]
	p->setCapacity(440000);
	moscow->nextNodes->push_back(t); moscow->addOutPaths(p);	t->addInPaths(p);

	p = new Path(0, 1); //Magic number, just make sure 1 * [default limit] > [deault capacity]
	p->setCapacity(240000);
	rostov->nextNodes->push_back(t); rostov->addOutPaths(p);	t->addInPaths(p);
}

void Map::init() {
	initNodeList();
}

void Map::uninit() {

}



