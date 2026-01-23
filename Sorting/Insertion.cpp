#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n)
{
    for(int i = 1; i < n; i++){
        int current = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > current){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;

        
        for(int k = 0; k < n; k++){
            cout << arr[k] << " ";
        }
        cout << " -> Pass " << i <<endl;
    }
}

int main()
{
    int arr[] = {4, 1, 5, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertion_sort(arr, n);
    return 0;
}