#include <bits/stdc++.h>
using namespace std;

vector<int> maxSlidingWindow(vector<int>& nums, int k){
    deque<int> dq;
    vector<int> res;

    for(int i = 0 ; i < k ; i++){
        while(dq.size() > 0 && nums[dq.front()] <= nums[i]){
            dq.pop_back();
        }
        dq.push_back(i);
    }

    for(int i = k ; i < nums.size() ;i++){
        res.push_back(nums[dq.front()]);

        while(dq.size > 0 && dq.front() <= i - k){
            dq.pop_front();
        }

        while(dq.size() > 0 && nums[dq.front()] <= nums[i]){
            dq.pop_back();
        }
        dq.push_back(i);


    }

    res.push_back(nums[dq.front()]);
}
int main(){
    return 0;
}