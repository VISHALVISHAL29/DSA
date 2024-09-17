#include <bits/stdc++.h>
using namespace std;

class Solution{

    public:
     int majorityElement(vector<int>& arr){
        int candidate = 0 , count=0;
        for(int i = 0 ; i<arr.size();i++){
            if(count == 0){
                candidate = arr[i];
                count++;
            }else if(candidate != arr[i]){
                count--;
            }else{
                count++;
            }
        }
        
        count = 0 ;
        for(int i = 0 ; i <arr.size();i++){
            if(candidate == arr[i]){
                count++;
            }
        }

        if(count > arr.size()/2){
            return candidate;
        }
        return -1;
     }
};

int main()
{
    return 0;
}