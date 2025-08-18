#include <iostream>
using namespace std;

int BruteForce(int arr[] , int target){
    int first, second,sum;
    for(int i=0 ; i < 5; i++){
        first = arr[i];
        for(int j = i+1 ; j < 5 ; j++){
            second = arr[j];
            sum = first + second;
            if(sum == target){
                cout << "Indices: " << i << ", " << j << endl;
                cout << "Numbers: " << arr[i] << ", " << arr[j] << endl;
                return 0;
            }

        }
    }
    return -1;
    
}
int main(){
    int arr[5] = {5,2,11,7,15};
    int target = 9;

    BruteForce(arr,target);
    
    
    return 0;
}