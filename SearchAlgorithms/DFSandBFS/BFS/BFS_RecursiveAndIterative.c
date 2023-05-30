/*
Breadth-First Search

BFS is an algorithm for traversing or searching tree or graph data structures.
It starts at the tree root (or some times arbitraary node of a graph, some times
refered to as "Search Key") and explores the neighbor nodes before moving to the
next-level neighbors.

BFS is a graph traversal algorithm that explores vertices in the order of their
distance from the source vertex, where distance is the minimum length of a path
from the source vertex to the node.

Applications
There are many, but these are the most common ones:
	- Finding the shortest path between 2 nodes.
	- Testing a graph for bipartiteness. 
	- Finding nodes in any connected component of a graph.
	- ...
*/

/*
A standard BFS implementation puts each verteex of the graph into one of two
categories: Visited / Not Visited

The PURPOSE of the algorithm is to mark each vertex as visited avoiding cycles.

It works as follows:
	1. Starts by putting any onoe of the graph vertex at thee back of a queue.
	2. Take the front item of the queue and add it to the visited list.
	3. Create a list of that vertex's adjacent nodeds. Add the ones which aren't 
	in the visited list to the back of the queue.
	4.Keep repeating steps 2 and 3 until the queue is empty. 
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

struct	queue
{
	int	items[SIZE];
	int	front;
	int	rear;
};


struct	node
{
	int		vertex;
	struct	node *next;
};

struct Graph
{
	int	numVertices;
	struct	node **adjLists;
	int	*visited;
};

//BFS Algorithm

void	bfs(struct Graph *graph, int startVertex)
{
	struct	queue *q = createQueue();

	graph->visited[startVertex] = 1;
	
}



