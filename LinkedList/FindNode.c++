#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;

    Node(int val) : data(val),next(NULL),prev(NULL){}
};

class LinkedList
{

public:
    Node *head;
    Node *tail;

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
        newnode->prev = tail;
        tail->next = newnode;
        tail = newnode;
    }
    
    void find(int pos){
      int count = 0 ;
      if(head == NULL){
        cout<<"The Linked List is empty";
      } 
      Node* temp2 = tail;
      while(temp2 != NULL){
        if(count == pos){
         cout<<temp2->data;
        }
        temp2 = temp2->prev;
        count++;
      }
      if(count<pos){
        cout<<"fewer number of nodes in the list\n";
      }
    }

    void display()
    {
        if (head == nullptr)
        {
            cout << "LinkedList is empty";
        }

        Node *temp = tail;

        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->prev;
        }
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

    obj.find(13);

    // obj.display();
    return 0;
}