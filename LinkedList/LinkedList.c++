#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList
{
public:
    Node *head;

public:
    LinkedList() : head(nullptr) {}

    void NewNode(int val)
    {
        Node *newnode = new Node(val);
        Node *current;

        if (head == nullptr)
        {
            head = newnode;
            current = head;
        }
        else
        {   
            current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newnode;
        }
    }
    void End(int val)
    {
        Node *newnode = new Node(val);
        Node *current;

        if (head == nullptr)
        {
            head = newnode;
            current = head;
        }
        else
        {   
            current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newnode;
        }
    }

    void insert(int val)
    {
        Node *insert = new Node(val);
        if (head == nullptr)
        {
            head = insert;
       // cout<<"hello";
        }
        else
        {
            insert->next=head;
            head = insert;
        }
    }

   
    void display()
    {
        if (head == nullptr)
        {
            cout << "LinkedList is emoty ";
        }

        Node *temp = head;
        int count = 0;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            count++;
            temp = temp->next;
        }
       // cout << count;
    }
};
int main()
{
    LinkedList obj;
    obj.insert(20);
    obj.NewNode(30);
    obj.End(60);
    obj.NewNode(50);
    obj.insert(10);
    obj.insert(0);
    obj.End(60);

    obj.display();

    return 0;
}