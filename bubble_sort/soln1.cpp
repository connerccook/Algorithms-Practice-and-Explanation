#include <vector>
#include <iostream>
using namespace std;

vector<int> bubbleSort(vector<int> array) {
	int flag = 0;
    int counter = 0;
	while(flag == 0){
		flag = 1;
		for(size_t i = 0; i < array.size()-1-counter; i++){
			if(array[i] > array[i+1]){
				flag = 0;
				int tmp = array[i];
				array[i] = array[i+1];
				array[i+1] = tmp;
                // or just use swap(array[i], array[i+1])
			}
		}
        counter++;
	}
  return array;
}

//This is my implementation of the bubble sort algorithm
//bubble sort is an inplace algorithm where we loop thru the array and swap values
//so for ascending order, if array[i] > array[i+1] we swap them 
//we then continue to traverse the array and checking for swaps
//if we loop thru the array and there is no swaps, then everything is sorted
//we use a flag that indicates if no swaps took place
//thats basically the algoirtm, a while loop that tracks if swap occurs
//and a for loop that loops thru the array and checks for swaps
//we use a counter variable because after one loop, the end of the array will always be the largest
//this is because if the array was 9,8,7,5 -> 9 will contine to swap until it reaches the end
//with this knowledge, we know that after every for loop is done the last element is the largest
//this is where the counter variable comes in, it pretty much tracks how many loops we did in the while loop 
//since we know after every loop the end is the already sorted, we use the counter variable 
//to subtract from the array.size() so that the next loop will not check the last element
//this is bc we already know its sorted 
//this basically just stops the loop from doing unneccessary checks
//saves some time 
//algo is O(1) space and O(n^2) time
