#include <iostream>
#include <vector>
using namespace std;
int search(vector<int>nums , int target ){
     int st = 0, end = nums.size() - 1;

        while(st <=end){ //checks if the number entered is in the array or not
            int mid = st + (end -st)/2;
            if(nums[mid] == target){//if the middle value and target have the same values then it displays the middle value
                return mid;
            }
            if(nums[st] <= nums[mid]){// checking if the target is left sorted
                if(nums[st] <= target && target <=nums[mid]){
                    end = mid - 1;
                }
                else{
                    st = mid +1;
                }
            }
            else{ // right sorted
                if(nums[mid]<=target && target <=nums[end]){
                    st = mid +1;
                }
                else{
                    end = mid -1;
                }
            }
        }
        return -1;//returns -1 if nothing is found i.e. The target is not in the array itself
    }

int main()
{
    vector<int> nums = {4,5,6,7,0,1,2};
    int target = 0;
    cout << search(nums,target)<<endl;
    return 0;
}