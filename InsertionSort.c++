#include <iostream>
using namespace std;

class Solution
{
public:
    void insert(int arr[], int n)
    {
        int i , key , j;
        for(int i = 1 ; i<n;i++){ 
           key = arr[i];
           j = i-1;
           while (j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j = j-1;
           }
           arr[j+1] = key ;
           
        }
    }

public:
    void insertionSort(int arr[], int n)
    {
        insert(arr,n);
    }
};

int main()
{
     int arr[] = {7, 12, 9, 11, 3}; 
    int n = sizeof(arr)/sizeof(arr[0]);
    Solution obj ;
    obj.insertionSort(arr,n);
    
        for(int k = 0 ; k<n ; k++){
        cout<<arr[k]<<" ";
    }
    return 0;
}