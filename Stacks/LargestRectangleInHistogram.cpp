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

int main(){
    vector<int>heights = {2,1,5,6,2,3}
    return 0;
}