#include <bits/stdc++.h>
using namespace std;

int Brute(vector<int> &heights){
    int n = heights.size();
    int maxi = 0;
    height = heights[i]
    for(int i = 0 ; i < n ; i++){
        int left = i;
        int right = i;

        while(left-1 >= 0 && heights[i-1] >= height){
            left--;
        }
        while(right+1 < n && heights[i+1] >= height){
            right++;
        }

        int width = right - left + 1;
        int area = width * height;

        maxi = max(maxi,area);
    }
    return maxi;
}

int optimal(vector<int>&heights){
    int n = heights.size();
    stack<int> s;
    vector<int> left(n,0);
    vector<int> right(n,0);

    //Right Smaller Element
    for(int i = n -1 ; i >= 0;i--){
        while(s.size() > 0 && heights[s.top()] >= heights[i]){
            s.pop();
        }

        right[i] = s.empty() ? -1 : s.top();
        s.push(i);
    }

    while(!s.empty()){
        s.pop();
    }

    //Left Smaller Element
    for(int i = 0 ; i < n;i++){
        while(s.size() > 0 && heights[s.top()] >= heights[i]){
            s.pop();
        }

        left[i] = s.empty() ? -1 : s.top();
        s.push(i);
    }
    int ans = 0;
    for(int i = 0 ; i < n ;i++){
        int width = right[i] - left[i] - 1;
        int area = heights[i] * width;

        ans = max(ans,area);
    }
    return ans;
}

int main(){
    vector<int>heights = {2,1,5,6,2,3}
    return 0;
}