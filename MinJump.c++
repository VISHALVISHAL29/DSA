#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
   int minJumps(vector<int>& arr) {
  int n = arr.size();

  if(n==1) return 0;
  if(arr[0]==0) return -1;

  int maxReach = arr[0]; 
  int currentEnd = arr[0]; 
  int jump = 1;
  for(int i = 1;i<n;i++){
    if (i == n-1) return jump;

    maxReach = max(maxReach,i+arr[i]);

    if(i==currentEnd){
        jump++;
        currentEnd=maxReach;

        if(currentEnd<=i) return -1;
    }
  }
  return -1;
}

};

int main()
{ 
    vector<int> arr = {1,2,1,0,4};
    Solution obj;
    int jump =obj.minJumps(arr);
    cout<<jump;
    return 0;
}