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

void insertAtTail(Node* &tail, int d) {
     // new node create
    Node* temp = new Node(d);
    tail -> next = temp;
    tail  = temp;
}

void insertAtPosition(Node *&tail,Node *&head, int position, int d)
{   
    
    //insert at Start
    if(position == 1) {
        insertAtHead(head, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

     //inserting at Last Position
    if(temp -> next == NULL) {
        insertAtTail(tail,d);
        return ;
    }

    // creating node for d
    Node *nodeToinsert = new Node(d);
    nodeToinsert->next = temp->next;
    temp->next = nodeToinsert;
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
    Node *node1 = new Node(10); // new node with value 10

    // head pointed to node1
    Node *head = node1;
    Node *tail = node1;
    print(head);

    insertAtHead(head, 12);
    print(head);
    insertAtHead(head, 15);
    print(head);

    insertAtPosition(tail,head, 3, 22);
    print(head);

    // insertAtPosition(tail,15);
    // print(head);
    return 0;
}