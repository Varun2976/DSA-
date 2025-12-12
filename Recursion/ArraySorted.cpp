#include <iostream>
#include <vector>
using namespace std;
bool Array_Sorted(vector<int> &arr , int n){
    if(n == 0 || n == 1){
        return true;
    }
    else{
        return arr[n-1] >= arr[n-2] && Array_Sorted(arr,n-1);
    }
}

int main(){
    vector<int>arr = {1,2,3,4,5};

    cout << Array_Sorted(arr,arr.size()) =  << endl;
    return 0;
}