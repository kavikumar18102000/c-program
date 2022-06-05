
Graph is a non-linear data sturcture.

A Graph is a collection of nodes connecting through edges...
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Formal definition of a Graph :
    
    * A graph G = (V,E) is a collection of vertces and edges connecting these vertices
    * Used to model paths in a city, social networks, wesite backlinks, internal employee network etc..
    * A vertex or a node is one fundamental unit/entity of which graphs are formed
    * An edges is uniquely defined by its 2 endpoints
    * Directed edge - one way connection
    * Undirected edge - Two way connection
    * Directed graph - All Directed edges
    * Undirected graph - All Undirected edges
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

In-degree and Out-degree of a node :

    In-degree - number of edges coming into the node.
    Out-degree - number of edges going out of the node.

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Representaition of Graphs :

    * Adjacency list - Mark the nodes with the list of its neighbours
    * Adjacency matrix-A(ij) = 1 for an edge between i and j, 0 otherwise!
    * Edge set - store the pair of nodes/vertices connected with an edge. Eg-[(0,1),(0,4),(1,4)]
    * Other implementations to represent a graph alse exists. For eg.Compact list Representaition, cost adjacency list, cost adjacency mat\ etc.
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Graph Traversal and Traversal algorithm :

    * Graph traversal refers to the process of visiting(checking and/or updating) each vertex(node) in a graph.
    * Sequence of steps known as graph traversal algorithm can be used to traverse a graph

    Two Algorihtm of Graph Traversa are :
        * Breadth First Search (BFS) -> using Queue DS
        * Depth First Search (DFS) -> using Stack DS

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
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

<<<<<<< HEAD
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Depth First Search :

    In DFS, we start with a node and start exploring its connected nodes keeping on suspending the exploration of previous nodes.

    DFS procedure :
        * start by putting any one of the graphs vertices on top of a stack.
        * take the top item of stack and add it tio the visited list.
        * create a list of that vertex's adjacent nodes. Add the ones which aren't in the visited list to the top of the stack.
        * keep repesating steps 2 and 3 untill the stack is empty.

    DFS Pseudocode :

        DFS(G,u)
            u.visited = true
            for each v belongs to G.Adj[u]
                if v.vsited == false
                    DFS(G,v)


        init(){
            For each u belongs to G
                u.visited = false
            For each u belongs to Graph
                DFS(G,u)
        }

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

     Spanning Trees..........

Subgraphs : A subgraph of a graph G is a graph whose vertices and edged are the subsets of the original graph.

Connected graph : is a graph that is connected in the sense of a topological space, i.e, there is a path from any point to any other point in the graph.
                  A graph that is not connected is said to be disconnected.

Complete graph : is a simple undirected graph in which  every pair of distinct vertces is connected by a unique edge.

What is a Spanning Tree ?
    A subgraph of a graph G is a graph whose vertices and edged are the subsets of the original graph.

    A Connected subgraph  'S' of graph G(V,E) is said to be a spanning tree of graph G iff(if and only if):
        * All vertices of G must be present in S.
        * number of edges in S should be V-1.

Why is a spanning tree called a "Spanning tree" ?
    It is called so, because it spans all the node and atlast it is a tree like structre.

Number of spanning trees for a complete graphs :
    A complete  graph has n power (n-2) spanning trees where n is the number of vertces in a graph.


* The cost of spanning tree is the sum of  weights of all the edges of the tree.
* A minimum spanning tree is the tree with minimum cost (minimum weights of the edges).

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

            Prim's Minimum spanning tree algorithm ........

        * Prim's algorithm uses Greedy approach to find the minimum spanning tree.
        * we start with any node and start creating a MST (Minimum Spanning Tree).
        * In Prim's algorithm we grow the spanning tree from a starting position unti n-1 edges are formed (or n nodes are covered).

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
--------------------------------------------------------------------End of Data Structures-------------------------------------
=======
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
>>>>>>> 81392a3db7181ad9fc5dd64b3b786523c75c5e0d
