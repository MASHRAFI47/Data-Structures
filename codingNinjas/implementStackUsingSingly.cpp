//https://www.naukri.com/code360/problems/implement-stack-with-linked-list_630475?leftPanelTabValue=PROBLEM



/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/

class Stack
{
    //Write your code here

public:
    Node* head;
    int sz;

    Stack()
    {
        head = NULL;
        sz = 0;
    }

    int getSize()
    {
        return sz;
    }

    bool isEmpty()
    {
        return head == NULL;
    }

    void push(int data)
    {
        sz++;
        Node* newNode = new Node(data);
        if(head == NULL) {
            head = newNode;
            return;
        }

        newNode->next = head;
        head = newNode;
    }

    void pop()
    {   
        if(head == NULL) {
            return;
        }
        sz--;
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
    }

    int getTop()
    {
        if(head == NULL) {
            return -1;
        }
        return head->data;
    }
};