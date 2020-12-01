#include <vector>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
  // Write your code here.
	vector<int> answer;
	for(int i = 0; i < array.size(); i++) {
		for(int j = 1; j < array.size(); j++){
			if(array[i] + array[j] == targetSum){
				if(array[i] == array[j]) {
					
				} else {
					answer.push_back(array[j]);
					answer.push_back(array[i]);
					return answer;
				}
			}
		}
	}
  return answer;
}

//This is the brute force method with O(n^2) time and O(n) space