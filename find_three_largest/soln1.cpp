#include <vector>
#include <climits>
#include <iostream>
using namespace std;

vector<int> findThreeLargestNumbers(vector<int> array){
    int largest = array[0];
    int sec_largest = INT_MIN;
    int third_largest = INT_MIN;
    for(size_t i = 1; i < array.size(); i++){
        if(array[i] >= largest){
            third_largest = sec_largest;
            sec_largest = largest;
            largest = array[i];
        } else if(array[i] >= sec_largest){
            third_largest = sec_largest;
            sec_largest = array[i];
        } else if(array[i] >= third_largest){
            third_largest = array[i];
        }
    }
    return {third_largest, sec_largest, largest};
}
