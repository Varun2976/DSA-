#include <iostream>
void insertion_sort(int arr[] , int n)
{
    for(int i = 0 ; i < n ; i++){
        int current = arr[i];
        int prev = i -1;

        while(prev >=0 && arr[prev]>current){
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] == current; // placing the correct element in its correct position
    }
}
int main()
{
    int n = 5;
    int arr[] = {4,1,5,2,3};

    return 0;
}