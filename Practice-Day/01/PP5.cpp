#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

int countElements(Node *head)
{
    int cnt = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

bool checkSort(Node *head, int cnt)
{
    Node *tmp = head;

    bool sorted = true;
    for (int i = 0; i < cnt; i++)
    {
        if (tmp->next == NULL)
        {
            break;
        }

        if (tmp->value > tmp->next->value)
        {
            sorted = false;
            break;
        }
        tmp = tmp->next;
    }

    return sorted;
}

void insert_at_tail(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int val;
        cin >> val;

        if (val == -1)
        {
            break;
        }

        insert_at_tail(head, tail, val);
    }

    int cnt = countElements(head);
    bool isSort = checkSort(head, cnt);

    if (!isSort)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    return 0;
}