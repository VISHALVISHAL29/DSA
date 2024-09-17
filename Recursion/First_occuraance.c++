#include<iostream>
using namespace std;

int firstOccurance(int arr[],int n , int key){
    //base
    if(n==0){
        return -1;
    }
    if(arr[0]==key){
        return 0;
    }
    int subIndex =  firstOccurance(arr+1,n-1,key);
    if(subIndex != -1){
        return subIndex+1;
    }
    return -1;
}
int main()
{
    int arr[] = {1,2,3,4,};
    int n = sizeof(arr)/sizeof(int);
    int key = 4;
    cout<<firstOccurance(arr,n,key);
    return 0;
}