#include "stdafx.h"
#include "Disjoint.h"
#include "WeightedGraph.h"

void Disjoint::makeSet(WeightedGraph wg)
{
	for (int i = 0; i < wg.getArraySize; i++)
	{
		wg.setParent(i, i);
		wg.setHeight(i, -1);
	}
}

int Disjoint::findSet(WeightedGraph wg, int n)
{
	while (wg.getParent(n) != n)
		n = wg.getParent(n);

}

void Disjoint::setUnion(WeightedGraph wg, int i, int j)
{
	int seti = Disjoint::findSet(wg, i);
	int setj = Disjoint::findSet(wg, j);

	if (wg.getHeight(i) < wg.getHeight(j))
		wg.setParent(i, j);
	else if (wg.getHeight(j) < wg.getHeight(i))
		wg.setParent(j, i);
	else
	{
		wg.setParent(i, j);
		wg.setHeight(j, (wg.getHeight(j)+1));
	}

}