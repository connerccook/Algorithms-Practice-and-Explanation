#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> threeNumberSum(vector<int> array, int targetSum) {
    vector<vector<int>> answer; //initlize 2d array
    int currentSum;
    int left, right; //iterators that keep track of where we are in array
    sort(array.begin(), array.end());
    for(int i = 0; i < array.size() - 2; i++){ //array.size() - 2 because if the i goes to array.size()-2 then the left and right pointer will take up the remaining space
                                               // basically theres no need to go past that point
        left = i + 1; //left pointer will start right next to the current number
        right = array.size() - 1;// right pointer will start at the last index of vector

        while(left < right){ //basically if left and right eventually cross over then that loop is done. if right is less than left than that means it crossed over
            currentSum = array[i] + array[left] + array[right]; // CS = Current number + left + right
            if(currentSum == targetSum){ //if equal target number
                answer.push_back({array[i],array[left],array[right]});
                left++; //move left and right together to check if there are more pairs inbetween
                right--;
            } else if(currentSum < targetSum){
                left++; //basically since we know that the currentSum is less that target sum we move the left index to the right because it will increase the sum
            } else if(currentSum > targetSum){
                right--; // basically since we know that the currentSum is more than the target sum we more the right pointer to the left because we know it will decrease the sum
            }
        } //this is all possible because we sorted the array in ascending order
    }
    return answer;
}

//O(n^2) T and O(n) S
//The concept of left and right is very important for future array manipulation problems
