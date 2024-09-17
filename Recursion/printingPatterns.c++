#include <iostream>
#include <vector>
using namespace std;

vector<int> v;

class Solution
{
public:
    void Add(vector<int> &v, int n,int j)
    {   
                    v.push_back(n);
        if (n == j)
        {
            return;
        }
        Add(v, n + 5,j);
    }

public:
    void Minus(vector<int> &v, int n)
    {
        int j = n;
        if (n <= 0)
        {
            return;
        }
        Minus(v, n - 5);
       //Call to Add function to increment the value  by 5
        Add(v, n,j);
    }

public:
    vector<int> pattern(int N)
    {
        Minus(v, N);
        return v;
    }
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int N;
        cin >> N;

        Solution ob;
        vector<int> ans = ob.pattern(N);
        for (int i : ans)
        {
            cout << i << " ";
        }
        cout << "\n";
        v.clear();
    }

    return 0;
}