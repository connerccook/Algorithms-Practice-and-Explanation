using namespace std;
#include <vector>
bool isValidSubsequence(vector<int> array, vector<int> sequence) {
	int seqIdx = 0;
	if(array.size() < sequence.size()){
		return false;
	}
	for(int i = 0; i < array.size(); i++){
		if(array[i] == sequence[seqIdx]){
			seqIdx++;
		}
		if(seqIdx == sequence.size()){
			return true;
		}
	}
  return false;
}

//O(n) time O(1) space

//essentially we are keeping an iterator to keep track of which values are equal to the first array