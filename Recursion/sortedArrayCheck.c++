#include <iostream>
using namespace std;

int isSorted(int arr[], int n)
{
   if(n==0) return 1;
    
   if(arr[n-2]<=arr[n-1]){
    cout<<arr[n-2]<<"<"<<arr[n-1]<<endl;
    isSorted(arr,n-1);
   }else{
    return 0;
   }
}


int main()
{
    int arr[] = {20, 23, 23, 45, 78, 88};
    int n = sizeof(arr) / sizeof(int);

    cout<<n<<endl;

    cout << isSorted(arr,n) << endl;
}