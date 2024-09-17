#include <bits/stdc++.h>
using namespace std;

bool compair(pair<string, int> a, pair<string, int> b)
{
    return a.second < b.second;
}
vector<pair<string, int>> sortFruits(vector<pair<string, int>> v, string S)
{
    if (S == "name")
    {
        sort(v.begin(), v.end());
        return v;
    }
    sort(v.begin(), v.end(), compair);
    return v;
}

//

int main()
{
    vector<pair<string, int>> vect = {{"Mango", 100}, {"Banana", 30}, {"Grapes", 40}, {"Apple", 60}, {"Guava", 70}};
    string s = "price";
    vector<pair<string, int>> vect2 = sortFruits(vect, s);
    for (auto p : vect2)
    {
        cout << "{" << p.first << "," << p.second << "}";
    }
}