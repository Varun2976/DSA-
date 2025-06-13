#include <iostream>
using namespace std;

//-------------- KADANE'S ALGORITHM ---------------
// used for maximum subarray sum






//----BRUTE FORCE----
int main(){
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    int Max_Sum = INT_MIN;

    for(int start = 0; start < n; start++){
        int current_Sum = 0;
        for(int end = start; end < n; end++){
            current_Sum += arr[end];
            Max_Sum = max(current_Sum, Max_Sum);
        }
    }

    cout << "Maximum Subarray Sum: " << Max_Sum << endl;
    return 0;
}