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
    node *prev;

    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    if (head != NULL)
    {
        head->prev = n;
    }
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
    n->prev = temp;
}

void deleteatHead(node *&head)
{
    node *toDelete = head;
    head = head->next;
    head->prev = NULL;

    delete toDelete;
}

void deletion(node *&head, int pos)
{
    if (head == NULL)
    {
        return;
    }
    if (pos == 1)
    {
        deleteatHead(head);
        return;
    }

    node *temp = head;
    int count = 1;

    while (temp != 0 && count != pos)
    {

        temp = temp->next;
        count++;
    }

    temp->prev->next = temp->next;
    if (temp->next != 0)
    {
        temp->next->prev = temp->prev;
    }

    delete temp;
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

int main()
{
    node *head = NULL;

    insertATtail(head, 1);
    insertATtail(head, 2);
    insertATtail(head, 3);
    insertATtail(head, 4);
    // display(head);
    insertAtHead(head, 5);
    // display(head);
    deletion(head, 5);
    display(head);
    return 0;
}
