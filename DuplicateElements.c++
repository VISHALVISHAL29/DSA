#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j;
        for(int i = 1 ; i < nums.size();i++){
            if(nums[i]==nums[j]){
                nums[j]=nums[i];
                j++; 
            }
        }
        return j;
    }
    int removeDuplicates(vector<int>& nums) {
       int i = 0 ;
       int end = nums.size()-1;
       while(i<end){
        if(nums[i]==nums[i+1]){
            nums.erase(nums.begin()+1);
        }else{
            i++;
        }
       }
       return nums.size();  
    }
};