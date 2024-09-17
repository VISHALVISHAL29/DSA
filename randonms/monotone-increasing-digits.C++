#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isMonotonic(int n){
        int k = 10;
        while(n > 0){
            if(k < n%10){
                return false;
            }
            else{
                k = n%10;
                n = n/10;
            }
        }

        return true;
    }

    int monotoneIncreasingDigits(int n) {
        while(!(isMonotonic(n))){
            n = n-(n%10)-1;
        }

        return n;
    }
};

int main()
{     
    Solution obj;
       // cout<<obj.monotoneIncreasingDigits(332)<<" ";
        cout<<obj.isMonotonic(332)<<" ";
    return 0;
}