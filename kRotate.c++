#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        while(k>0){
           int j = nums.back();
           nums.pop_back();
           nums.insert(nums.begin(),j);
           k--;
        }
    }
};


int main()
{ 
    vector<int> arr = {1,2,3,4,5,6,7};
    for(int i =0 ; i <arr.size();i++){
      cout<<arr[i]<<' ';
    }
    return 0;
}