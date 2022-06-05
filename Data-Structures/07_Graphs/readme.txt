
    "A tree is a hierarchical data structure defined as a collection of nodes. Nodes represent value and nodes are connected by edges.
     Tree is non-linear data structure."

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Terminologies in trees:

-> Root : The topmost node of a tree is called the root. There is no edge pointing to it, but one or more than one edge originating from it. 

-> Parent : Any node which connects to the child. Node which has an edge pointing to some other node.

-> Child :  Any node which is connected to a parent node. Node which has an edge pointing to it from some other node.

-> Siblings : Nodes belonging to the same parent are called siblings of each other.

-> Ancestors : Nodes accessible by following up the edges from a child node upwards are called the ancestors of that node. 
              Ancestors are also the parents of the parents of …… that node.

-> Descendants : Nodes accessible by following up the edges from a parent node downwards are called the descendants of that node. 
                 Descendants are also the child of the child of …… that node.

-> Leaf/External Node : Nodes which have no edge originating from it, and have no child attached to it.

-> Internal Node : Nodes with at least one child.

-> Depth : Depth of a node is the number of edges from root to that node.

-> Height : Height of a node is the number of edges from that node to the deepest leaf.

-------------------------------------------------------------------------------------------------------------------------------------------------------------

To find number of nodes in a tree:
   no of nodes = (n-1), where n = no of edge from root to the depth
   NOTE : root will not considered as a child node.

--------------------------------------------------------------------------------------------------------------------------------------------------------------

"A Binary tree is a tree data structure in which each node has at most two children, which are referred to as the left child and the right child."

                -> A tree can be identified as binary tree, if the node has one or two child nodes, but not more than two child nodes.
                -> The degree of the node should not be more than 2.If not then it is not a Binary tree.
                -> Degree is nothing but the no of direct children of a node.
                -> Tree of degree <=2 is called Binary tree.
                -> Degree of a tree is the highest degree a node among all the nodes present in the tree.
                -> A node can have 0,1 or 2 child nodes are called a Binary tree.


    Types of Binary tree:

    1) Full or Strict Binary tree : All nodes can have 0 or 2 children.
    2) Perfect Binary tree : All the internal nodes can have exactly 2 children and all the leaf nodes are on the same level.
    3) Complete Binary tree : All levels are completed filled except possibly the last level and last level must have its keys as left as possible.
    4) Degenerate Tree : Every parent node has exactly one child node either to the left or to the right.
    5) Skewed Tree : 
            -> Left skewed tree : all the child nodes are skewed towards left side.
            -> Right skewed tree : all the child nodes are skewed towards right side.


  Representation of a Binary tree : 
    
    1) Array representation : 
                            Arrays are linear data structures and for arrays to function, their size must be specified before elements are inserted into them. 
    And this counts as the biggest demerit of representing binary trees using arrays. Suppose you declare an array of size 100, and after storing 100 nodes in it, 
    you cannot even insert a single element further, regardless of all the spaces left in the memory.  Another way you’d say is to copy the whole thing again to a new 
    array of bigger size but that is not considered a good practice.

    2) Linked representation :
                            This method of representing binary trees using linked nodes is considered the most efficient method of representation. For this, we use doubly-linked lists.
                            Using links makes the understanding of a binary tree very easy. It actually makes us visualize the tree even.
            we don't say as linked list representation, because list is a linear data structure.
            This is not similar to linked list but some features of it.

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


Traversal in Binary Tree : (Traversing nothing but visiting every node or element once)

1) Pre-Order traversal : (Root -> Left subtree -> Right subtree)
            So in this technique, the first node you start with is the root node and thereafter you visit the left subtree and then the right subtree.

2) Post-Order traversal : (Left subtree -> Right subtree -> Root)
            In this traversal technique, things are quite opposite to the PreOrder traversal. Here, you first visit the left subtree, and then the right subtree. 
            So, the last node you’ll visit is the root node.

3) In-order-traversal : (Left subtree -> Root -> Right subtree)
            In this traversal technique, we simply start with the left subtree, that is you first visit the left subtree, and then go to the root node and then you’ll 
            visit the right subtree.

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Binary Search Tree (BST)

Properties of BST are:

> All nodes of the left subtree are lesser.
> All nodes of the right subtree are greater.
> Left and Right subtrees are also BST.
> There are no duplicate node (nodes with same values are permitted).
> In-order traversal of a BST gives an ascending sorted array.

-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

What are AVL trees?

AVL trees are height balanced binary search trees. Because most of the operations work on O(h), we would want the value of h to be minimum possible, which is log(n).
Height difference between the left and the right subtrees is less than 1 or equal in an AVL tree.
For AVL trees, there is a balance factor BF, which is equal to the height of the left subtree subtracted from the height of the right subtree. If we consider the below binary search tree, 
you can see the balance factor mentioned beside each node. Carefully observe each of those.





Why do we need AVL trees ?

An AVL tree is needed because:
  Almost all the operations in a binary search tree are of order O(h) where h is the height of the tree.
  If we don’t plan our trees properly, this height can get as high as n where n is the number of nodes in the Binary Search Tree (Skewed tree).
  So, to guarantee an upper bound of O(logn) for all these operations we use balanced trees.

Techniques to form a AVL tree are:
    
  LL Rotation:
              The name LL, just because we inserted the new element to the left subtree of the root. In this rotation technique, 
              you just simply rotate your tree one time in the clockwise direction.

  RR Rotation:
              So, the method you will follow now to make this tree an AVL again is called the RR rotation. 
              The name RR, just because we inserted the new element to the right subtree of the root. In this rotation technique, 
              you just simply rotate your tree one time in an anti-clockwise direction 

  LR Rotation:
            So, the method you will follow now to make this tree an AVL again is called the LR rotation. The name LR, just because we inserted the new 
            element to the right to the left subtree of the root. In this rotation technique, there is a subtle complexity, which says, first rotate the left subtree 
            in the anticlockwise direction, and then the whole tree in the clockwise direction.

  RL Rotation:
            So, the method you will follow now to make this tree an AVL again is called the RL rotation. The name RL, just because we inserted the new element 
            to the left to the right subtree of the root. We follow the same technique we used above, which says, first rotate the right subtree in the clockwise direction, 
            and then the whole tree in the anticlockwise direction.


Balancing a AVL tree after insertion : 

          1) For a Left-Left insertion : Right rotate once with respect to the first imbalalanced node.
          2) For a Right-Right insertion : Left rotate once with respect to the first imbalalanced node.
          3) For a Left-Right insertion : Left rotate once and Right rotate once.
          4) For a Right-Left insertion : Right rotate once and Left rotate once.