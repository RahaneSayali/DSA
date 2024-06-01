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

void insertAtPosition(Node *&head, int position, int d)
{
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
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

    insertAtPosition(head, 3, 22);
    print(head);

    // insertAtPosition(tail,15);
    // print(head);
    return 0;
}