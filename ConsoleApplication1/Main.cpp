#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include "Graph.h"
#include "WeightedGraph.h"

int main()
{
	WeightedGraph j;
	j.setMatrix("graph1.txt");

	j.printMatrix();


	system("pause");
	return 0;
}