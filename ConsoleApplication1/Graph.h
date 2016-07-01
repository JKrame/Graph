#pragma once

class Graph {

private:
	bool** matrix;
	void DFS(int node, bool* visited);


public:
	void setMatrix();
	bool** getMatrix();
	void BFS(int start);
	void DFS(int start);

};