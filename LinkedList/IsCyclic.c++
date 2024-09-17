#include<iostream>
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
    Node *tail;

public:
    LinkedList() : head(nullptr) {}

    void create(int val)
    {
        Node *newnode = new Node(val);

        if (head == nullptr)
        {
            head = newnode;
            tail = head;
        }
        else
        {   
            tail = head;
            while (tail->next != nullptr) {
                tail = tail->next;
            }
            tail->next = newnode;
        }
    } 

     bool hasCycle() {
        Node *temp , *prePtr;
        temp = head;
        int count = 0;
        while(temp->next != NULL){
             prePtr = temp;
             temp = temp->next;
            if(prePtr->next == temp){
              count ++;
            }
        }

        return count==1?true:false;
    }


};
int main()
{   
    LinkedList obj;
    obj.create(10);
    obj.create(10);
    obj.create(10);
    obj.create(10);
    obj.create(10);
    obj.create(10);
    obj.create(10);
    obj.create(10);
    obj.create(10);
    obj.create(10);
    obj.create(10);
    return 0;
}
    // void display()
   // obj.display();
    // {
    //     if (head == nullptr)
    //     {
    //         cout << "LinkedList is emoty ";
    //     }

    //     Node *temp = head;
    //     int count = 0;
    //     while (temp != NULL)
    //     {
    //         cout << temp->data << " ";
    //         count++;
    //         temp = temp->next;
    //     }
    //    // cout << count;
    // }
   