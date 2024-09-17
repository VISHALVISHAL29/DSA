#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   int T;
    cin >> T;

    while (T-- > 0) {
        int A, B;
        cin >> A >> B;
        int count = 0;

        
        while (A != B) {
            if (A > B) {
              
                int halfA = ceil(A / 2.0);
                count += halfA;  
                A -= halfA;      
            } else {
                
                int halfB = ceil(B / 2.0);
                count += halfB;  
                B -= halfB;    
            }
        }

      
        cout << count << endl;
    }

    return 0;

}