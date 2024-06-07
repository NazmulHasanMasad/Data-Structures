#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>

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
    n->next = head;
    head = n;
}

void insertATtail(node *&head, int val)
{
    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << " null" << endl;
}

bool search(node *head, int key)
{
    node *temp = head;

    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }

    return false;
}

int main()
{
    node *head = NULL;

    insertATtail(head, 1);
    insertATtail(head, 2);
    insertATtail(head, 3);
    display(head);
    insertATthehead(head, 4);
    display(head);
    cout << search(head, 4) << endl;
    return 0;
}