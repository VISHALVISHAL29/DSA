#include<iostream>
#include <vector>
using namespace std; 
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    { 
        vector<int> temp;
        int count = l; 
        int left = l;
        int right = m+1;

        while (left <= m && right<=r){
            if (arr[left]<= arr[right]){
                temp.push_back(arr[left]);
                left++;
            }else{
                temp.push_back(arr[right]);
                right++;
            }
        }

        while (left<=m){
            temp.push_back(arr[left]);
            left++;
        }
        while (right<=r){
            temp.push_back(arr[right]);
            right++;
        } 

        for ( int i : temp){
            arr[count] = i;
            count++;
        }
        
         
    }
    public:
    void mergeSort(int arr[], int l, int r)
    { 
        if(l>=r) return;
        
       int  mid = (l+r)/2;

       mergeSort(arr,l,mid);
       mergeSort(arr,mid+1,r);
       merge(arr,l,mid,r);
    }
};
int main()
{
     int arr[] = {7, 12, 9, 11, 3}; 
    int n = sizeof(arr)/sizeof(arr[0]);
    Solution obj ;
    obj.mergeSort(arr,0,n-1);
    
        for(int k = 0 ; k<n ; k++){
        cout<<arr[k]<<" ";
    }
   
    return 0;
}