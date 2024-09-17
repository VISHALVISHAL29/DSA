#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val) : data(val), next(nullptr) {}
};

class InsertEnd
{
public:
    Node *head;

public:
    InsertEnd() : head(nullptr) {}

    void Creation(int val)
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
    void End(int val)
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
    void After(int data2,int val)
    {
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = newnode;
            return;
        }
            Node *temp2 = head;
            int count = 0;
            while (temp2 != NULL)
            {
               if(temp2->data == data2){
                   count++;
                   newnode->next = temp2->next;
                   temp2->next = newnode;
                   return;
               }
               temp2=temp2->next;
            }

        if(count != 1){
            cout<<"Given Vlaue is not present"<<endl;
        }   
    }

    int deletHead(){
        if(head == NULL){
           cout<<"Nothing to delete"<<endl;
           return 0;
        }
        Node* temp = head;
        head = head->next;

        return temp->data;

    }

    int deleteEnd(){
        if(head == NULL){
            cout<<"Nothing to delete"<<endl;
           return 0;
        }
        Node * temp1 = head;
        Node *prePtr;
        while(temp1 !=NULL){
           if(temp1->next == nullptr){
            prePtr->next = NULL;
            return temp1->data;
           }
           prePtr = temp1;
           temp1 = temp1->next;
        }
    }
    int deleteAfter(int val){
        if(head == NULL){
            cout<<"Nothing to delete"<<endl;
           return 0;
        }
        Node * temp1 = head;
        Node *prePtr;
        while(temp1 !=NULL){
           prePtr = temp1;
           temp1 = temp1->next;
           if(prePtr->data == val){
            prePtr->next = temp1->next;
            return temp1->data;
           }
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
        // cout << count;
    }
};

int main()
{
    InsertEnd obj;
    obj.Creation(10);
    obj.Creation(20);
    obj.Creation(30);
    obj.Creation(40);
    obj.Creation(50);
    obj.End(60);
    obj.Creation(70);
    obj.Creation(80);
    obj.Creation(90);
    obj.After(90,100);

    cout<<obj.deletHead()<<" Head Deleted"<<endl;
    cout<<obj.deleteEnd()<<" End Deleted"<<endl;
    cout<<obj.deleteAfter(50)<<" Delete After"<<endl;


    obj.display();

    return 0;
}