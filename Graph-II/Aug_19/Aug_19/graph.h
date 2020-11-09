#pragma once
#include<iostream>
#include <list>
using namespace std;

class Graph
{
	int vertices;
	list<int>* graph;
	int* visited;

public:
	Graph(int);
	void addEdge(int, int);
	void PrintGraph();
	void BFS(int);
	void DFS(int);
	void TravDFS(int, int*);
};



