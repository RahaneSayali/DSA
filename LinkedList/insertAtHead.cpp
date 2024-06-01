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
void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
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
    cout << node1->data << endl; // print valuei.e 10
    cout << node1->next << endl; // print next node i.e null

    //head pointed to node1
    Node *head = node1;
    print(head);
    insertAtHead(head,12);
    print(head);
    return 0;
}