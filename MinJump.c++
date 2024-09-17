#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minJumps(vector<int> &arr)
    {   
       int jump = 0, count = 0;
       while(true){
        jump += arr[jump];
        count++;
        if(jump>=0){}
         
       }
    }
};

int main()
{ 
    vector<int> arr = {1, 4, 3, 2, 6, 7};
    cout<<arr.size();
    return 0;
}