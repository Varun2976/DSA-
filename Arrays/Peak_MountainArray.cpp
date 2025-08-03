#include <iostream>
#include <vector>
using namespace std;

// ----------------------- Peak Mountain Array ------------------------
int Peak(vector<int>arr){
    int st = 1 , end = arr.size()-1;
    while(st <= end){
        int mid = st + (end - st)/2;
        if(arr[mid -1] < arr[mid] && arr[mid] > arr[mid+1]){
            return mid;
        }
        else if(arr[mid -1] < arr[mid]){
            st = mid +1;
        }
        else{
            end = mid -1;
        }
    }
    return -1;
}
int main()
{
    vector<int>num = {0,1,0};
    cout << Peak(num) << endl;

    return 0;
}