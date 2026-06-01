#include <bits/stdc++.h>
using namespace std;
void nextGreaterElement(){
    vector<int>arr={6,8,0,1,3};
    stack<int>st;
    vector<int> ans(arr.size(),0);
    for(int i = arr.size() - 1 ; i >= 0 ;i--){
        while(st.size() > 0 && st.top() <= arr[i]){
            st.pop();
        }
        if(st.empty()){
            ans[i] = -1;
        }else{
            ans[i] = s
        }

        st.push(arr[i]);
    }
    for(int val : ans){
        cout << val << " ";
    }
}
int main(){

    

    return 0;
}