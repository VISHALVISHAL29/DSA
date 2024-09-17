#include<iostream>
using namespace std;

int LastOccurance(int arr[], int n ,int key){
    if(n==0){
        return -1;
    }
    int subIndex = LastOccurance(arr+1,n-1,key);
    if(subIndex ==-1){
        if(arr[0]==key){
            return 0;
        }else{
            return 0;
        }
    }else{
        return subIndex +1;
    }
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,5};
    int n = sizeof(arr)/sizeof(int);
    int key = 5;
    cout<<LastOccurance(arr,n,key);
    return 0;
}