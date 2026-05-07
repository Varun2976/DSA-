#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int>arr={3,1,0,8,6};
    stack<int>st;
    vector<int> ans(arr.size(),0);
    for(int i = 0 ; i < arr.size() ;i++){
        while(st.size() > 0 && st.top() >= arr[i]){
            st.pop();
        }
        if(st.empty()){
            ans[i] = -1;
        }else{
            ans[i] = st.top();
        }

        st.push(arr[i]);
    }
    for(int val : ans){
        cout << val << " ";
    }d

    return 0;
}