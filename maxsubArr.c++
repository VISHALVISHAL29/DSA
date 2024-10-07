#include <bits/stdc++.h>
using namespace std;

class Solution{
    //optimised Brute Force 
    public: 
     int LengthArr(int arr[],int n , int k ){
        int len = INT_MIN;
        for (int i = 0 ; i<n;i++){
             int sum = 0; 
             for(int j =i; j<n;j++){
                sum +=arr[j];
                if(sum==k){
                    max(len,j-i+1);
                }
             }
        }
        return len;
     }
};

int main()
{
    return 0;
}