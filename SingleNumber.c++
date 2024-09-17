#include <bits/stdc++.h>
using namespace std;



int main()
{
    vector<int> arr = {1, 4, 3, 2, 6, 7};
    auto it = find(arr.begin(),arr.end(),9);
    cout<<*it;
    return 0;
}