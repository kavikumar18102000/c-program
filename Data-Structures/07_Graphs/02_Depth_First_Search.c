
// Here we are using the default stack(memory stack) for the implelmentation of a Depth First Search...............

#include <stdio.h>
#include <stdlib.h>

// DFS Implementation

int visited[7] = {0, 0, 0, 0, 0, 0, 0};
int a[7][7] = {
    {0, 1, 1, 1, 0, 0, 0},
    {1, 0, 1, 0, 0, 0, 0},
    {1, 1, 0, 1, 1, 0, 0},
    {1, 0, 1, 0, 1, 0, 0},
    {0, 0, 1, 1, 0, 1, 1},
    {0, 0, 0, 0, 1, 0, 0},
    {0, 0, 0, 0, 1, 0, 0}};

void DFS(int i) // i is the source node......
{ 
    visited[i] = 1; // marking the visited node as 1....
    printf("%d\t", i); // printing the visited node....
    for (int j = 0; j < 7; j++)   // 7 is nothinng but the number of nodes in the graph......
    {
        
        if(a[i][j] == 1 && !visited[j]){   // !visited says that if the connected node is not visited
            DFS(j);   // if the node is not visited, then run function for the unvisited node......
        } 
        
    }
    
}

int main()
{
    DFS(6); // Passing node as the parameter for this function.......
    return 0;
}