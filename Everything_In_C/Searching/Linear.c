#include <stdio.h>

void Linear_Search(int arr[],int size ,int element){
    for(int i=0 ; i< size; i++){
        if(arr[i] == element){
            printf("Found the element %d at index %d ." , element , i);
            return;
        }
        
    }
}
int main(){
    int size ;
    printf("Enter the size of the array : ");
    scanf("%d" , &size);
    int arr[] = {1,2,5,3,9};
    
    int element;
    printf("Enter the element you wanna find : ");
    scanf("%d" , &element);

    Linear_Search(arr,size, element);
    return 0;
}