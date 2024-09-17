#include <iostream>
#include <vector>
#include <climits>
using namespace std;
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int LowestPrice = INT_MAX;
        int HighestPrice = 0;

        for (int i = 0; i < prices.size(); i++)
        {
            if (LowestPrice > prices[i])
            {
                LowestPrice = prices[i];
            }
            else if (HighestPrice < prices[i] - LowestPrice)
            {
                HighestPrice = prices[i] - LowestPrice;
            }
        }

        return HighestPrice;
    }
};

int main()
{
    vector<int> prices = {2,4,1,0,8};
    Solution obj;

   cout<< obj.maxProfit(prices);
    return 0;
}


  // cout << LowestPrice << " ";
        // cout<<HighestPrice<<"";
        // cout<<k;
       // cout << j;