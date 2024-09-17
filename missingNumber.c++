#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int n = nums.size();
       int sum = n*(n+1)/2; 
       cout<<sum<<endl;
       int miss,sum2=0;
       for(int i : nums){
          sum2 +=i;  
       }
       cout<<sum2<<endl;
       if(sum!=sum2){
         miss=sum-sum2;
       }
         return miss;
    }
};
int main()
{ 
    vector<int> nums = {9,6,4,2,3,5,7,0,1};
    Solution obj;   
    cout<<obj.missingNumber(nums);
    return 0;
}