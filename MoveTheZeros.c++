#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
     int lastZeroFoundAt = 0;
     for(int i = 0 ; i<nums.size();i++){
        if(nums[i]!=0){
            nums[lastZeroFoundAt++] = nums[i];
        }
     }

     for(int i = lastZeroFoundAt;i<nums.size();i++){
        nums[i] = 0;
     }
    }
};
int main()
{ 
    vector<int> arr = {7,0, 9, 11, 3}; 
    Solution obj ;
    obj.moveZeroes(arr);
    for(int num :arr ){
        cout<<num<<" ";
    }
    return 0;
}