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

void deleteatHead(node *&head)
{
    node *todelete = head;
    head = head->next;

    delete todelete;
}

void deletion(node *&head, int val)
{
    if (head == NULL)
    {
        return;
    }
    if (head->next == NULL)
    {
        deleteatHead(head);
        return;
    }

    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node *todelete = temp->next;
    temp->next = temp->next->next;

    delete todelete;
}

void reverse(node *&head)
{
    node *previousptr = NULL;
    node *currentptr = head;
    node *nextptr;

    while (currentptr != NULL)
    {
        nextptr = currentptr->next;
        currentptr->next = previousptr;
        previousptr = currentptr;
        currentptr = nextptr;
    }

    // display(previousptr);
}

node *reverseRecursive(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    node *newHead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
}

int main()
{
    node *head = NULL;

    insertATtail(head, 1);
    insertATtail(head, 2);
    insertATtail(head, 3);
    insertATtail(head, 4);
    // display(head);
    //    insertATthehead(head, 4);
    //   display(head);
    //   cout << search(head, 4) << endl;

    // deletion(head, 3);
    // deleteatHead(head);
    // display(head);

    // reverse(head);

    node *newhead = reverseRecursive(head);

    display(newhead);

    return 0;
}