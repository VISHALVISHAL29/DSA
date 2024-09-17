#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int val) : data(val), next(nullptr) {}
};
class Stack
{

public:
    Node *head;

public:
    Stack() : head(NULL) {}

    void push(int val)
    {
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            Node *current = head;
            while (current->next != nullptr)
            {
                current = current->next;
            }
            current->next = newnode;
        }
    }

    int pop()
    {
        if (head == NULL)
        {
            cout << "Nothing to delete" << endl;
            return 0;
        }
        Node *temp1 = head;
        Node *prePtr;
        while (temp1 != NULL)
        {
            if (temp1->next == nullptr)
            {
                prePtr->next = NULL;
                return temp1->data;
            }
            prePtr = temp1;
            temp1 = temp1->next;
        }
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
    }
};

int main()
{
    Stack obj;
    obj.push(10);
    obj.push(20);
    obj.push(30);
    obj.push(40);
    obj.push(50);
    obj.push(60);
    obj.push(70);

    obj.display();

    obj.pop();
    obj.pop();
    obj.pop();
    obj.pop();
    obj.display();
    return 0;
}