#include <iostream>
#include <vector>
using namespace std;
// ----------- SINGLE NUMBER ------------
// find then unique non repeating number
// using Bitwise operator(XOR)
int SingleNumber(vector<int>nums){
    int ans = 0;
    for(int values : nums){
        ans = ans^values;
    }
    return ans;
}
int main(){

    cout << "Single Number: " << SingleNumber(vector<int>{2, 2, 1}) << endl;


    return 0;
}