#include <iostream>
using namespace std;

class Solution {
public:
    long long sequence(int n) {
        const int MOD = 1e9 + 7;
        long long result = 0;
        int currentNumber = 1;
        
        for (int i = 1; i <= n; ++i) {
            long long termProduct = 1;
            for (int j = 0; j < i; ++j) {
                termProduct = (termProduct * currentNumber) % MOD;
                currentNumber++;
            }
            result = (result + termProduct) % MOD;
        }
        
        return result;
    }
};

int main() {
    Solution sol;
    int n = 23;
    cout << sol.sequence(n) << endl;
    return 0;
}
