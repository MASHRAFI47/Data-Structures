class BrowserHistory {
public:
    class Node {
        public:
        string val;
        Node* next;
        Node* prev;

        Node(string val) {
            this->val = val;
            this->prev = NULL;
            this->next = NULL;
        }
    };

    Node* current = NULL;

    BrowserHistory(string homepage) {
        Node* newNode = new Node(homepage);
        current = newNode;
    }
    
    void visit(string url) {
        Node* newNode = new Node(url);

        current->next = newNode;
        newNode->prev = current;
        current = newNode;
    }
    
    string back(int steps) {
        for(int i = 0; i < steps; i++) {
            if(current->prev != NULL) {
                current = current->prev;
            }  
        }

        return current->val;
    }
    
    string forward(int steps) {
        for(int i = 0; i < steps; i++) {
            if(current->next != NULL) {
                current = current->next;
            }
        }

        return current->val;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */