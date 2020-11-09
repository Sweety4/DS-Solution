#include"pgraph.h"
#include<list>
void cGraph::Accept()
{
	int i, j;
	for (i = 0; i<vertex; i++)
	{
		for (j = 0; j<vertex; j++)
		{
			//	cout<<"\n\n\t Enter Is There Edge Beween  "<<i<<" And  "<<j << " (0/1) ";
			cin >> graph[i][j];
		}
	}
}
int cGraph::GetVertex()
{
	return vertex;
}
cGraph::cGraph()
{
	vertex = 4;
	graph = new int*[vertex];
	for (int i = 0; i < vertex; i++)
	{
		graph[i] = new int[vertex];
	}

}
cGraph::cGraph(int v)
{
	vertex = v;
	graph = new int*[vertex];
	for (int i = 0; i < vertex; i++)
		graph[i] = new int[vertex];
}

void cGraph::Display()
{
	int i, j;
	cout << "\n\n\t ********** Adjancancy Matrix ********* \n\n";
	for (i = 0; i<vertex; i++)
	{
		cout << "\n\n";
		for (j = 0; j<vertex; j++)
		{
			cout << "\t" << graph[i][j];
		}
	}
}
void cGraph::InDegree()
{
	int i, j;
	int id;
	for (i = 0; i<vertex; i++)
	{
		id = 0;
		for (j = 0; j<vertex; j++)
		{
			if (graph[j][i])
				id++;
		}
		cout << "\n\n\t InDegree Of " << i << " Is " << id;
	}
}
void cGraph::OutDegree()
{
	int i, j;
	int od;
	for (i = 0; i < vertex; i++)
	{
		od = 0;
		for (j = 0; j < vertex; j++)
		{
			if (graph[i][j])
				od++;
		}
		cout << "\n\n\t OutDegree Of " << i << " Is " << od;

	}
}
void cGraph::BFS(int st)
{

	// Create visited array and inital value should be 0
	int *visited = new int[vertex];
	int i;
	for ( i = 0; i < vertex; i++)
		visited[i] = 0;

	list<int> queue;

	//push first vertex in graph
	visited[st] = 1;
	queue.push_back(st);

	while (!queue.empty())
	{
		//pop element print it and check it's adjancent
		st = queue.front();
		cout << st << " ";
		queue.pop_front();

		for (i = 0; i < vertex; i++)
		{
			// if any vertex is adj. and not visited 
			// enqueue in queue.
			if (graph[st][i] == 1 && visited[i] == 0)
			{
				visited[i] = 1;
				queue.push_back(i);
			}
		}
	}
}


void cGraph::TravDFS(int * V, int st)
{
	int j;
	for (j = 0; j<vertex; ++j)
	{
		if (graph[st][j] == 1 && V[j] == 0)
		{

			V[j] = 1;
			cout << "   " << j;
			TravDFS(V, j);
		}
	}
}


void cGraph::DFS(int start)
{
	int *visited;
	int i;
	
	visited = new int[vertex];
	for (int i = 0; i < vertex; i++)
		visited[i] = 0;

	cout << "\n\n\t DFS traversal is : " << start;
	visited[start] = 1;
	TravDFS(visited, start);
	free(visited);
}

