
Graph is a non-linear data sturcture.

A Graph is a collection of nodes connecting through edges...
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

Formal definition of a Graph :
    
    * A graph G = (V,E) is a collection of vertces and edges connecting these vertices
    * Used to model paths in a city, social networks, wesite backlinks, internal employee network etc..
    * A vertex or a node is one fundamental unit/entity of which graphs are formed
    * An edges is uniquely defined by its 2 endpoints
    * Directed edge - one way connection
    * Undirected edge - Two way connection
    * Directed graph - All Directed edges
    * Undirected graph - All Undirected edges
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

In-degree and Out-degree of a node :

    In-degree - number of edges coming into the node.
    Out-degree - number of edges going out of the node.

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

Representaition of Graphs :

    * Adjacency list - Mark the nodes with the list of its neighbours
    * Adjacency matrix-A(ij) = 1 for an edge between i and j, 0 otherwise!
    * Edge set - store the pair of nodes/vertices connected with an edge. Eg-[(0,1),(0,4),(1,4)]
    * Other implementations to represent a graph alse exists. For eg.Compact list Representaition, cost adjacency list, cost adjacency mat\ etc.
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

Graph Traversal and Traversal algorithm :

    * Graph traversal refers to the process of visiting(checking and/or updating) each vertex(node) in a graph.
    * Sequence of steps known as graph traversal algorithm can be used to traverse a graph

    Two Algorihtm of Graph Traversa are :
        * Breadth First Search (BFS) -> using Queue DS
        * Depth First Search (DFS) -> using Stack DS

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Breadth First Search :

Method 1:
    BFS spanning Tree :
        * we can start with any source node
        * Let start with 0
        * Try to construct a tree with 0 as root
        * Mark all the sideways or duplicate edges (above a node) as dashed
        * This constructed tree is called as BFS spanning  tree
        * Level order traversal of a BFS spanning tree is a valid BFS traversal of a graph

Method 2:
    BFS spannning Tree - Exploring 0 :
        * we can start with any source node                                                                
        * lets start with 0 and insert it in the Queue                                                     
        * visit all the connected vertices and enqueue them for exploration
        * 0 is now explored! let's go to the next in queue(1)                                              
        * repeat the same for other elements in the queue


Algorithm : Breadth First Search
       A graph G=(V,E) and source node s in V

       Algorithm :
        Mark all nodes v in V as unvisited
        Mark source node s as visited
        enq(Q,s) //First in First out Queue

        while(Q is not empty)
        {
            u:=deq(Q);
            for each unvisited neighbour v of u{
                mark v as visited;
                enq(Q,v);
            }
        }

Important points :
    * we can start with any vertex
    * there can be multiple BFS results for a given graph
    * the order of visiting the vertces can be anything

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
