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
int findClosestValueHelper(BST *tree, int target, int closest);
int findClosestValueInBst(BST *tree, int target);
int findClosestValueInBst(BST *tree, int target) { // calls the helper function for recursion
    return findClosestValueHelper(tree,target,tree->value;); // tree->value = root
}

int findClosestValueHelper(BST *tree, int target, int closest){
    if(abs(tree->value - target) < abs(closest - target)){
        closest = tree->value;
    }
    if(tree->value < target){
        return findClosestValueHelper(tree->right, target, closest);
    } else if(tree->value > target){
        return findClosestValueHelper(tree->left, target, closest);
    } else {
        return closest;
    }
}

/*
Recursive algo 
Avg: O(logn) time and space
worst: O(n) time and space
The reason why space is the time same as time is bc of the recursion. Every time we call the function again 
we create a new memory slot in the call stack
*/

