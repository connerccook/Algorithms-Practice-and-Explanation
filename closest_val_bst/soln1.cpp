#include <iostream>
#include <stdlib.h>
class BST {
public:
  int value;
  BST *left;
  BST *right;

  BST(int val);
  BST &insert(int val);
};

int findClosestValueInBst(BST *tree, int target) {
   BST *currentNode = tree;
   int closest = currentNode->value; // closest value to the target is the root at the start
   while (currentNode != NULL) { // if currentNode -> left or right  is null then its the end of the branch or tree
        if(abs(currentNode->value - target) < abs(closest - target)){
            closest = currentNode->value; //if the absolute difference of the current node is less than the current closest
            // this means that the current closest variable is no longer the closest to the target therefore we make currentnode = closest
        }
        if(currentNode->value < target){ //if the current node is less than target we go to the right bc values on the right are bigger
            currentNode = currentNode->right;
        } else if (currentNode->value > target){ // if the current node is greater than we go the left bc values are lesser
            currentNode = currentNode->left;
        } else { // if its neither than this means that target == currentNode which means that we found it 
            break;
        }
   }
   return closest;
   
}


/*
Iterative Algorithm 
Avg: O(logn) time and O(1) space
Worst: O(n) time and O(1) space 
The average is logn time because the input is a binary search tree and every time we go thru a loop 
we do take out half of the potential steps

The worst case for a binary search tree is if the binary search tree only had one branch, this means 
that has we go thru the loops we do not take out half of the potential steps and we just go down the branch
like a regular for loop
so if this is the tree, then its o(n)
*/