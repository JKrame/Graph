#pragma once
#include "stdafx.h"
#include "WeightedGraph.h"



class Disjoint
{

public:
	static void makeSet(WeightedGraph wg);
	static int findSet(WeightedGraph wg, int n);
	static void setUnion(WeightedGraph wg, int i, int j);


};