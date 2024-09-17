#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution
{
public:
    int largest(vector<int> &arr)
    {
        int largest =  INT_MIN;
        int largest2 = INT_MIN;
        for (int i : arr)
        {
            if (i > largest)
            {
            largest2 = largest;    
            largest = i;
            }
            if (largest>i && i > largest2)
            {
                largest2 = i;
            } 
        }
        if (largest == largest2)
        {
            return -1;
        }

        return largest2;
    }
};
int main()
{
    vector<int> arr = {12, 35, 1, 10, 34, 1};
    Solution obj;
    cout << obj.largest(arr) << endl;
}