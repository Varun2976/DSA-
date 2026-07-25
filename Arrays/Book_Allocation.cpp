#include <bits/stdc++.h>
using namespace std;

bool book_alloc(vector<int> &arr, int n , int m,int maxPage){
    int stu = 1, pages = 0;

    for(int i =0 ; i < n;i++){
        if(arr[i] > maxPage){
            return false;
        }
        if(pages + arr[i] <= maxPage){
            pages += arr[i];
        }else{
            stu++;
            pages = arr[i];
        }
    }
    return stu>m ? false : true;
}
int allocate_books(vector<int> &arr, int n , int m){
    int sum = 0 ;
    for(int i = 0 ; i < n ;i++){
        sum += arr[i];
    }
    if(m>n){
        return -1;
    }
    int st = 0 , end = sum;
    int ans = -1
    while(st <= end){
        int mid = st + (end - st)/2;

        if(isValid(arr,n,m,mid)){
            ans = mid;
            end = mid - 1;
        }else{
            st = mid + 1
        }
    }
}
int main(){

    return 0;
}