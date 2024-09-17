#include<iostream>
using namespace std;

class Solution {
  public:
   //Solve it for int &arr also.
    int searchInSorted(int arr[], int N, int K) {
       
       for(int i=0; i<N;i++){
           if(arr[i]==K)
             return 1;
       }
       return -1;    
    }
};
int main()
{
    return 0;
}