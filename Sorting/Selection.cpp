#include <iostream>
using namespace std;
// ---------------------SELECTION SORT------------------------
void Selection_sort(int arr[],int n){
    
    for(int i = 0 ; i <n;i++){
        int smallest_index = i;
        for(int j = i+1;j<n;j++){
            if(arr[j] < arr[smallest_index]){
                smallest_index = j;
            }
        }
        swap(arr[i],arr[smallest_index]);
    }
}
int main()
{
    int n =5;
    int arr[] = {4,1,5,2,3};  
    Selection_sort(arr,n);
    for(int i=0 ; i<n ;i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}