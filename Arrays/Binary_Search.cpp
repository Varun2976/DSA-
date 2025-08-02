#include <iostream>
#include <vector>
using namespace std;

// ----------------------- BINARY SEARCH ----------------------------
// Time Complexity = O(logn)
// Can be applied only in sorted arrays , be it ascending or descending.

int Binary_search(vector<int> arr , int tar)
{
    int st = 0; 
    int end = arr.size() - 1;

    while(st <= end){
        int mid = (st + end) / 2; 

        if(tar > arr[mid]){
            st = mid + 1;  //2nd half
        }
        else if(tar < arr[mid]){
            end = mid - 1; //1st half
        }
        else{
            return mid;
        }
    }
    return -1;
}


int main()
{
    vector <int> arr = {0,1,2,3,4,5,6,7};
    int target = 6;

    cout << Binary_search(arr,target) << endl;
    return 0;
}
