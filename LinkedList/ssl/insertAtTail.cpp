#include <iostream>
using namespace std;

class Node
{
public:
    int data;   // value or data of node
    Node *next; // pointer to next node

    Node(int data)
    {                      // constructor to initialize node
        this->data = data; // set value of node
        this->next = NULL; // set nxt node as null
    }
};
void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}
void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *node1 = new Node(10);  // new node with value 10

    //head pointed to node1
    Node *head = node1;
    Node *tail = node1;
    print(head);

    
    insertAtTail(tail,12);
    print(head);

    insertAtTail(tail,15);
    print(head);
    return 0;
}