#include"graph.h"

Graph::Graph(int ver)
{
	vertices = ver;
	graph = new list<int>[vertices];
}

void Graph::addEdge(int src, int dest)
{
	graph[src].push_back(dest);
	graph[dest].push_back(src);
}

void Graph::PrintGraph()
{
	cout << "\n Adjacency list of vertex \n\n";
	list<int>::iterator i;
	for (int j = 0; j < vertices; j++)
	{
		cout << "\n\n\t " << j << " : ";
		//int sz = graph[i].size();

		for (i = graph[j].begin(); i != graph[j].end(); ++i)
		{
			int ele = *i;
			cout << "-->" << ele;
		}


	}
}

void Graph::BFS(int st)
{
	int move, no;
	list<int> queue;
	visited = new int[vertices];

	for (int i = 0; i < vertices; i++)
		visited[i] = 0;

	visited[st] = 1;
	queue.push_back(st);
	cout << " \n\n\t ******** BFS ************\n\n ";
	list<int>::iterator i;

	while (!queue.empty())
	{
		int move = queue.front();
		cout << "   " << move;
		queue.pop_front();

		for (i = graph[move].begin(); i != graph[move].end(); ++i)
		{
			int no = *i;
			if (!visited[no])
			{
				visited[no] = true;
				queue.push_back(no);
			}
		}
	}
}
void Graph::TravDFS(int st, int *vis)
{

	vis[st] = 1;
	cout << st << " ";

	list<int>::iterator i;
	for (i = graph[st].begin(); i != graph[st].end(); ++i)
		if (!vis[*i])
			TravDFS(*i, vis);
}

void Graph::DFS(int st)

{
	cout << "\n\n\t ************ DFS ************** \n\n";
	int *vis = new int[vertices];
	for (int i = 0; i < vertices; i++)
		vis[i] = 0;

	TravDFS(st, vis);
}
