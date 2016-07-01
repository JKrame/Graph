#include "stdafx.h"
#include "Kruskal.h"
#include "WeightedGraph.h"
#include <stdio.h>
#include <stdlib.h>

int** Kruskal::findSpan(WeightedGraph wg)
{
	int oo = INT_MAX;

	int size = wg.getArraySize();
	int ** matrix = wg.getMatrix;
	int ** span = new int*[size];

	for (int i = 0; i < size; i++)
	{
		span[i] = new int[size];
	}

	int min = oo;
	int mini = 0;
	int minj = 0;

	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
		{
			if (matrix[i][j] < min && matrix[]);



		}

}
}
