#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;
    Node(int val) : data(val), prev(nullptr), next(nullptr) {}
};

class DoublyLinkedLIst
{
public:
    Node *head;
    Node *tail;

public:
    DoublyLinkedLIst() : head(nullptr) {}

    void create(int val){
        Node* newnode = new Node(val);
        if(head == NULL){
            head = newnode;
            tail = newnode;
            return;
        }
        newnode->prev = tail;
        tail->next = newnode;
        tail = newnode;
    }

    void display()
    {
        if (head == nullptr)
        {
            cout << "LinkedList is emoty ";
        }

        Node *temp = head;
        
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout <<"backward"<<endl;
        Node *temp2 = tail;
        while (temp2 != NULL)
        {
            cout << temp2->data << " ";
            temp2 = temp2->prev;
        }


      }  // cout 
};

int main()
{  
    DoublyLinkedLIst obj ;

    obj.create(20);
    obj.create(30);
    obj.create(30);
    obj.create(30);
    obj.create(30);
    obj.create(30);
    obj.create(30);
    obj.display();
    return 0;
}