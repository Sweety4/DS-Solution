#include<iostream>
#include<vector>
using namespace std;

class cGraph
{
	int **graph;
	int vertex;
public:
	cGraph();
	int GetVertex();
	cGraph(int);
	void Accept();
	void Display();
	void InDegree();
	void OutDegree();
	void DFS(int start);
	void BFS(int start);
	void TravDFS(int*, int );
};

#pragma once
