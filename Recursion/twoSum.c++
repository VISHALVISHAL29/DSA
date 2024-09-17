#include<iostream>
#include <vector>
using namespace std;
 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0 ; i< nums.size();i++){
            for(int j = i+1 ; j< nums.size();j++){
                int sum = nums[i]+nums[j];
                if(sum==target){
                  nums.clear();
                  nums.push_back(i);
                  nums.push_back(j);
                  break;
                }
            }
        }
        return nums;
    }
};
int main()
{  
    vector<int> num = {1,2,3,4,5,6};
    int traget = 6;
    Solution solution ;
    solution.twoSum(num,traget);
    for(auto v : num)
       cout<<v<<" ";
    return 0;
}