
#include <unordered_set>
#include <vector>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
  std::unordered_set<int> mySet;
  std::vector<int> answer;
  int num1, num2;

  for(const auto& num : array){ //input all the elements of the array into unordered_set
      mySet.insert(num);
  }

  for(const auto& x : mySet){
      if(mySet.find(targetSum-x)!=mySet.end()){ //mySet.end() means that it did not find the target, so if != mySet.end() this means it is found
          answer.push_back(x);
          answer.push_back(targetSum-x);
          break;
      }
  }

	
  return answer;
}

//This is a better solution because its O(n) time and O(n) space because we used hash tables

//Basically this solution uses hash tables. We input all of the elements in the array into the hash table,
// which is O(N) time.
// To understand the solution we have to realize that we have a target sum and a given element and that 
// there is only one solution in each array
// Basically, we do another loop which is O(n) and we try to find the element that is the difference of the
// target sum and the given element in the loop. We do this because the difference is the second element that 
// sums to the target sum. And since there is only one solution, we can assume that that element is in the array
// the find function is O(1) most of the time so we assume its O(1). We then push it into the array and return the answer
