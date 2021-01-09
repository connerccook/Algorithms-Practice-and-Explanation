#include <vector>
#include <iostream>
using namespace std;

int binarySearchHelper(vector<int> array, int target, int left, int right);
int binarySearch(vector<int>array, int target);

int binarySearch(vector<int>array, int target){
    return binarySearchHelper(array, target, 0, array.size()-1);
}

int binarySearchHelper(vector<int> array, int target, int left, int right){
    while(left <= right){
        int med = (left + right) / 2;
        if(array[med] == target){
            return med;
        } else if(target < array[med]){
            right = med - 1;
        } else {
            left = med + 1;
        }
    }
    return -1; //if left == right than target not found return -1
}
// non recurisive algo , O(logn) time and O(1) space
// This is the improved algorighm bc there is no recusion so its O(1) space
// same princple as before
// we make a helper function that inilitzes the left and right pointers 
// left keeps track of the beginning and the right keeps track of the end of the array
// we find the middle of the two and we compare to target
// if middle is less than target than we make left = med + 1 so that we reduce the search area by half bc 
// we already know everything from the middle and less is not the target
// if middle is more than the target than we make the right = med -1 so that we reduce the search area by half
// bc we already know everything from the middle and more is not the target
// we keep checking until the middle equals the target and we return the index
// if left == right than we checked everywhere and there is no target in the array
// this is very similar to the three sum problem where we use the left and right pointer
