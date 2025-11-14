#include <stdio.h>

void binary_search(int arr[] ,int n,int target){
    int st = 0;
    int end = n - 1;

    while(st <=end){
        int mid = (st + end) /2;

        if(target > mid){
            st = mid + 1;
        }
        else if(target < mid){
            end = target - 1;
        }
        else{
            printf("Target is : %d" , mid);
            return;
        }
    }
    
}
int main(){
    return 0;
}