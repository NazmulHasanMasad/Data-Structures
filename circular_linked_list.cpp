#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertATthehead(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        n->next = n;
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
}

void insertATtail(node *&head, int val)
{

    if (head == NULL)
    {
        insertATthehead(head, val);
        return;
    }
    node *n = new node(val);
    node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}

void display(node *head)
{
    node *temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != NULL);

    cout << endl;
}

int main()
{
    node *head = NULL;
    insertATtail(head, 5);
    insertATtail(head, 6);
    insertATtail(head, 7);
    insertATtail(head, 8);
    display(head);
    insertATthehead(head, 10);

    return 0;
}