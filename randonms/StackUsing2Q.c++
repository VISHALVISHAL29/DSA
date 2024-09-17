#include<iostream>
#include<queue>
using namespace std;

class MyStack{
   queue <int> q,q1;
public : 
    MyStack(){}
    
void push(int val){
  
  q1.push(val);

  while(!q.empty()){
     q1.push(q.front());
     q.pop();
  }
   
   swap(q,q1);
  
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
void display() {
        if (q.empty()) {
            cout << "Stack is Empty" << endl;
            return;
        }

        queue<int> temp = q;
        while (!temp.empty()) {
            cout << temp.front() << " ";
            temp.pop();
        }
        cout << endl;
    }

};

int main()
{
   MyStack stck;

   stck.push(10);
   stck.push(20);
   stck.push(30);
   stck.push(40);
   stck.push(50);
   stck.display();
    return 0;
}