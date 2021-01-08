#include <iostream>
using namespace std;

int getNthfib(int n){
    if(n == 1) { return 0; }
    if(n == 2) { return 1; }
    int T[3];
    T[0] = 0;
    T[1] = 1;

    for(size_t i = 2; i < n; i++){
        T[2] = T[0] + T[1]
        T[0] = T[1]
        T[1] = T[2]
    }
    return T[2]
}
//This is the dp method of solving this problem and its O(1) space and O(n) time
