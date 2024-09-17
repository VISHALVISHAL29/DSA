#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


struct Node
{
    int data;
    Node *next;

    Node(int val) : data(val),next(NULL) {}
};

class LinkedList
{

public:
    Node *head;
    Node *tail;

    unordered_map<Node*,int> unmap;

public:
    int Psize;

public:
    LinkedList() : head(NULL) {}

    void insert(int val)
    {
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = newnode;
            tail = head;
            return;
        }
        tail->next = newnode;
        tail = newnode;

        unmap[newnode] = val;
    }
 
    int find(int pos){
      int size = unmap.size();
      Psize= size -pos;

      if(head == NULL or Psize<0){
        cout<<"The Linked List is empty";
      } 
      Node* temp = head;
      for(int i = 0 ; i< pos;i++){
        temp = temp->next;
      }
      return temp->data;
    }

    void display()
    {
        if (head == nullptr)
        {
            cout << "LinkedList is empty";
        }

        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }

       cout<<Psize;
    }
};

int main()
{ 
    LinkedList obj;

    obj.insert(10);
    obj.insert(20);
    obj.insert(30);
    obj.insert(40);
    obj.insert(50);
    obj.insert(60);
    obj.insert(70);
    obj.insert(80);
    obj.insert(90);
    obj.insert(100);
    obj.insert(110);
    obj.insert(120);
    obj.insert(130);
    obj.insert(140); 

   cout<< obj.find(6);

   // obj.display();
    return 0;
}