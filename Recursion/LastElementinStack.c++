#include <bits/stdc++.h>
using namespace std;

class Solution{
    public: 
    stack<int> insertAtBottom(stack<int> st , int x){
      if(st.empty()){
         st.push(x);
          return st;
      }
      int top = st.top();
         st.pop();
         insertAtBottom(st,x); 
         st.push(top);
       return st;
    }
};
int main()
{
   stack<int> st;
   st.push(4);
   st.push(3);
   st.push(2);
   st.push(1);
   st.push(8);
//    Solution obj;
//    obj.insertAtBottom(st,2);
   

}