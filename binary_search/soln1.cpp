#include <iostream>
#include <vector>

using namespace std;

int binarySearchHelper(vector<int>array, int target, int left, int right);
int binarySearch(vector<int> array, int target);

int binarySearch(vector<int> array, int target){
    return binarySearchHelper(array, target, 0, array.size()-1);
}
int binarySearchHelper(vector<int> array, int target, int left, int right){
    if(left > right) { return -1; } //if right is less than left than all elements have been checked
    int med = (left + right) / 2;
    if(array[med]== target){return target;}
    else if (array[med] < target){
        return binarySearchHelper(array, target, med+1, right);
    } else {
        return binarySearchHelper(array, target, left, med-1);
    }
}

//time log n , space logn 
//This method is the recursive method where the left and the right pointers
//keep track of the beginning and end of the array 
//we track the middle of these array and check if its on target
//if its less than the target, that means the middle is too small and we 
//have to increase the middle
//to do this, we make the left pointer = the middle + 1 so that in between 
//left and the right pointer are all values that are bigger than the middle
//this decreases the number of searches because we made the array "smaller"
//we do the opposide if the middle is greater than the target, we make 
//the right = the middle -1 so that all the values in the smaller 'array'
//less than the middle 
//again this decreases the number of elements to iterate thru bty half
//we continue to do this until we reach the middle
//if the left > right this means that we searched thru all possible elements
//return -1;
// we use recursion in this example so that we are able to modify the left and right 
// the time complexity is o logn bc we only have to go thru half the elements
// space complexity is logn bc we all have to do the function call half of the times
//
