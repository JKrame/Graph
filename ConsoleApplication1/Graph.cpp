#include "stdafx.h"

#include "Graph.h"

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <vector>


void Graph::DFS(int node, bool* visited) 
{

}

void Graph::setMatrix() 
{
	
	std::cout << "Please enter the file name for your matrix.";
	char input[30];
	std::cin >> input;

	std::ifstream file;
	file.open (input);

	if (!input)
	{
		std::cout << "Cannot open file.\n";
		return;
	}

	
	int arraySize;
	file>>arraySize;

	bool **matrix = new bool*[arraySize];
	
	for(int i = 0; i < arraySize; i ++)
		matrix[i] = new bool[arraySize];

	for (int i = 0; i < arraySize; i++)
	{
		//bool row[] = matrix[i];
		for (int j = 0; j < arraySize; j++)
		{
			bool a;
			file >> a;
			matrix[i][j] = a;

			std::cout << matrix[i][j];

		}
		std::cout << "\n";
	}

}

void matrixFill(bool** matrix, int rows, int cols) 
{

	return;
}

bool** Graph::getMatrix() 
{
	return matrix;
}

void Graph::BFS(int start) 
{

}

void Graph::DFS(int start) 
{

}

