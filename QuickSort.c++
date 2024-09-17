#include <bits/stdc++.h>
using namespace std;
class Solution
{
 public:
    void quickSort(int arr[], int beg, int end)
    {
         if(beg < end){
         int  q = partition(arr,beg,end);
       
       quickSort(arr,beg,q-1);
       quickSort(arr,q+1,end);
         }
    }
    
    public:
    int partition (int arr[], int beg, int end)
    { 
        int pivot = arr[beg];
        int i = beg;
        int j = end; 
        
        while (i<j){
            
            while(arr[i]<= pivot){
                i++;
            }
            
            while(arr[j]>pivot){
                j--;
            }
            
            if(i<j) swap(arr[i],arr[j]);
        } 
        
        swap(arr[beg],arr[j]);
        return j;
    }
};
int main()
{
    int arr[] = {7, 12, 9, 11, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    Solution obj;
    obj.quickSort(arr, 0, n - 1);

    for (int num : arr)
    {
        cout << num << " ";
    }

    return 0;
}