#include<iostream>
#include<algorithm>
using namespace std;

class Solution {
  public:
    void bubbleSort(int arr[], int n) {
       for(int i = 0 ; i<n ; i++){
          for(int j = 0 ;j<n-1;j++){
             if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
             }
          }
       }
    }
};
int main()
{ 
    int arr[] = {100 , 90 , 80 , 70 , 60 , 50 , 40 , 30 , 20 , 10 }; 
    int n = sizeof(arr)/sizeof(arr[0]);
    Solution obj ;
    obj.bubbleSort(arr,n);
    
        for(int k = 0 ; k<n ; k++){
        cout<<arr[k]<<" ";
    }
   
    return 0;
}