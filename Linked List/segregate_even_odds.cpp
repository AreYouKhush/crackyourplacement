#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = nullptr;
    }
};

void segregateEvenOdd(Node **head_ref)
{
    Node *end = *head_ref;
    Node *prev = nullptr;
    Node *curr = *head_ref;

    while (end->next != nullptr)
        end = end->next;

    Node *new_end = end;

    while (curr->data % 2 != 0 && curr != end)
    {
        new_end->next = curr;
        curr = curr->next;
        new_end->next->next = nullptr;
        new_end = new_end->next;
    }

    if (curr->data % 2 == 0)
    {
        *head_ref = curr;

        while (curr != end)
        {
            if ((curr->data) % 2 == 0)
            {
                prev = curr;
                curr = curr->next;
            }
            else
            {
                prev->next = curr->next;

                curr->next = nullptr;

                new_end->next = curr;

                new_end = curr;

                curr = prev->next;
            }
        }
    }
    else
        prev = curr;

    if (new_end != end && (end->data) % 2 != 0)
    {
        prev->next = end->next;
        end->next = nullptr;
        new_end->next = end;
    }
    return;
}

void printList(Node *node)
{
    while (node != nullptr)
    {
        cout << node->data << " ";
        node = node->next;
    }
}

int main()
{
    return 0;
}
