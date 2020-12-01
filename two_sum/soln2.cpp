
#include <unordered_set>
#include <vector>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
  std::unordered_set<int> mySet;
  std::vector<int> answer;
  int num1, num2;

  for(const auto& num : array){
      mySet.insert(num);
  }

  for(const auto& x : mySet){
      if(mySet.find(targetSum-x)!=mySet.end()){
          answer.push_back(x);
          answer.push_back(targetSum-x);
          break;
      }
  }

	
  return answer;
}

//This is a better solution because its O(n) time and O(n) space because we used hash tables