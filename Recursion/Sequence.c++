#include <iostream>
using namespace std;

class Solution {

 public: 
   long long  helper(int N , int count , int nextSeq){
      
      if(N==0){
        return 0;
      }
      long long MOD = 1e9+7;
      int  currentNum = 1;
      for(int i = 0 ; i<count;i++){
        currentNum = (currentNum*(nextSeq+i))%MOD;
      }
      long long result = currentNum + helper(N-1,count+1,nextSeq + count);

      return result%MOD;
   }

 public:
    long long sequence(int n){
       return helper(n,1,1);

    }   
};

int main() {
    Solution sol;
    int n = 7;
    cout << sol.sequence(n) << endl;
    return 0;
}

//    public:
//     long long sequence(int n) {
//         const int MOD = 1e9 + 7;
//         long long result = 0;
//         int currentNumber = 1;
        
//         for (int i = 1; i <= n; i++) {
//             long long termProduct = 1;
//             for (int j = 0; j < i; j++) {
//                 termProduct = (termProduct * currentNumber) ;
//                 currentNumber++;
//             }
//             result = (result + termProduct) % MOD;
//         }
        
//         return result;
//     }