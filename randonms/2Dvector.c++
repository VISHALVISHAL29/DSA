#include<iostream>
#include<vector>
using namespace std;

int main()
{
vector<vector<int>> arr = {
    {1,2,3,4},
    {1,2,3,4,5},
    {1,2,3,4,5,6}
};
 for(int i =0 ; i<arr.size();i++){
    for(int number : arr[i]){
        cout<<number;
    }
    cout<<endl;
 }
}
