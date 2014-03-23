#include "EK.h"
#include "Map.h"
//Edmond-Karp algo


long EK::BFS(int src, int des)
{
	int i, j;
	while (!myQueue.empty())
		myQueue.pop();
	for (i = 1; i<13; ++i)
	{
		pre[i] = -1;
	}
	pre[src] = 0;
	flow[src] = EK::MAX_CAPACITY;
	myQueue.push(src);
	while (!myQueue.empty())
	{
		int index = myQueue.front();
		myQueue.pop();
		if (index == des)
			break;
		for (i = 1; i<13; ++i)
		{
			if (i != src && capacity[index][i]>0 && pre[i] == -1)
			{
				pre[i] = index;
				flow[i] = min(capacity[index][i], flow[index]);
				myQueue.push(i);
			}
		}
	}
	if (pre[des] == -1)
		return -1;
	else
		return flow[des];
}


long EK::maxFlow(int src, int des)
{
	int increasement = 0;
	int sumflow = 0;
	while ((increasement = BFS(src, des)) != -1)
	{
		int k = des;
		while (k != src)
		{
			int last = pre[k];
			capacity[last][k] -= increasement;
			capacity[k][last] += increasement;
			k = last;
		}
		sumflow += increasement;
	}
	return sumflow;
}

void EK::dataStruConvert() {
	for (int i= 0; i < 13; i++) {
		for (int j = 0; j < 13; j++){
			Node *from = map->nodeList->at(i);
			Node *to = map->nodeList->at(j);
			capacity[i][j] = from->itsCapacityGoesTo(to);
		}
	}
}

void EK::getMaxFlow() {
	map = new Map();
	map->init();

	dataStruConvert();
	long max = maxFlow(1, 12);
	cout << max << endl;

	for (int i = 0; i < 13; i++) {
		for (int j = 0; j < 13; j++){
			cout << capacity[i][j] << "  ";
		}
		cout << endl;
	}
}