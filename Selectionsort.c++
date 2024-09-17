#include <iostream>
using namespace std;

class Solution
{
public:
    int select(int arr[], int i)
    {
        for (int k = 0; k < i-1; k++)
        {
            for (int j = k+1; j < i ; j++)
            {
               if(arr[j] < arr[k]){
                 swap(arr[k],arr[j]);
               }
            }
        }

        return 0;
    }

    void selectionSort(int arr[], int n)
    {
        select(arr,n);
    }
};
int main()
{   
    int arr[] = {60, 50, 40, 30, 20, 10};
    return 0;
}