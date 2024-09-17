#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<long long> vect;

class Solution{
public:
    void SeriesHelp(vector<long long> &v,int n,long long i, long long j)
    {
        if(n<0){
            return;
        }
        v.push_back(j);
        long long sum = i + j;
        SeriesHelp(v,n-1,j,sum);

    }

public:
    vector<long long> Series(int n)
    { 
        vect.clear();
        SeriesHelp(vect,n,1,0);
        return vect;
    }
};
int main()
{   
    Solution solution;
    solution.Series(336);

    for( auto v : vect )
        cout<<v<<" ";

    return 0;
}