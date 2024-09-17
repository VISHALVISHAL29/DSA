#include <iostream>
#include <queue>
using namespace std;

class MyStack{
    queue<int> q;
public:
  MyStack(){
  }

void push(int val){
  int s = q.size();

  q.push(val);

  for(int i=0;i<s;i++){
    q.push(q.front());
    q.pop();
  } 
}

int pop (){
    if(q.empty()){
         cout<<"UnderFLow";
    } 
    int num = q.front();
    q.pop();
    return num ;
}
int top(){
    if(q.empty()){
        cout<<"UnderFLow";
    } 
    return q.front();
}

bool empty(){
     if(q.empty()){
         return true;
    } 
    return false;
}
};