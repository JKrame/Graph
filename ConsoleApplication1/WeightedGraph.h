#pragma once
#include "stdafx.h"

class WeightedGraph
{
private:
	int ** matrix;
	int arraySize;
	int * parent;
	int* height;

public:
	void setMatrix(char* filename);
	void printMatrix();
	int** getMatrix();
	int getParent(int i);
	int getHeight(int i);
	void setParent(int index, int parent);
	void setHeight(int index, int height);
	int getArraySize();
};