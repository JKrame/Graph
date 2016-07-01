#include "stdafx.h"
#include "WeightedGraph.h"

#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<fstream>

void WeightedGraph::setMatrix(char* filename)
{
	std::ifstream file;
	file.open(filename);

	if (!filename)
	{
		std::cout << "Cannot open file " << filename;
		return;
	}

	file >> this->arraySize;

	this->parent = new int[arraySize];
	this->height = new int[arraySize];

	this->matrix = new int*[arraySize];

	for (int i = 0; i < arraySize; i++)
	{
		matrix[i] = new int[arraySize];
		parent[i] = i;
		height[i] = 0;
	}

	for (int i = 0; i < arraySize; i++)
	{
		for (int j = 0; j < arraySize; j++)
		{
			file >> matrix[i][j];
		}
	}


}

void WeightedGraph::printMatrix()
{
	for (int i = 0; i < this->arraySize + 1; i++)
		if (i == 0)
			std::cout << "    ";
		else
		{
			char index = (char)('A' + i - 1);
			std::cout << index << "   ";

		}
	std::cout << "\n";

	for (int i = 0; i < this->arraySize; i++)
	{	
		for (int j = 0; j <( this->arraySize + 1); j++)
			if (j == 0)
				std::cout << (char)( 'A' + i )<< "   ";
			else
			{
				std::cout << matrix[i][j - 1];
				if (matrix[i][j - 1] > 99)
					std::cout << " ";
				else if (matrix[i][j - 1] > 9)
					std::cout << "  ";
				else
					std::cout << "   ";
			}
		std::cout << "\n";
	}
}

int** WeightedGraph::getMatrix()
{

	return matrix;


}

int WeightedGraph::getParent(int i)
{
	return this->parent[i];
}

int WeightedGraph::getHeight(int i)
{
	return this->height[i];
}

void WeightedGraph::setParent(int index, int parent)
{
	this->parent[index] = parent;
}
void WeightedGraph::setHeight(int index, int height)
{
	this->height[index] = height;
}
int WeightedGraph::getArraySize()
{
	return this->arraySize;
}