#include <iostream>
using namespace std;
    //   --------LINEAR SEARCH----------
    // Searches through the array to find the target value's index
    // If found it will return the index
    // if not then it should return -1
    // time complexity = O(n) => linear 

int linearsearch(int arr[] , int size, int target){
    for(int i =0 ; i<size;i++){
        if(arr[i] == target){
            return i; // FOUND THE VALUE
        }
    }
    return -1; // NOT FOUND THE VALUE

}
int main(){
     
    int arr[] = {4,5,6,7,8,9,1};
    int size = 7;
    int target = 10;
    cout << linearsearch(arr,size,target) << endl;




    return 0;
}