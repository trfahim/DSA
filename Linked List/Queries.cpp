#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_head(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);

    if (head == NULL) {
        head = tail = newNode;
        return;
    }

    newNode->next = head;
    head = newNode;
}

void insert_tail(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);

    if (head == NULL) {
        head = tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void delete_index(Node* &head, Node* &tail, int idx) {
    if (head == NULL) return;

    if (idx == 0) {
        Node* del = head;
        head = head->next;
        delete del;
        if (head == NULL) tail = NULL;
        return;
    }

    Node* temp = head;
    for (int i=0; i<idx-1 && temp->next != NULL; i++) {
        temp = temp->next;
    }
    if (temp->next == NULL) return;

    Node* del = temp->next;
    temp->next = del->next;

    if (del == tail) {
        tail = temp;
    }

    delete del;
}

void print(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    Node* head = NULL;
    Node* tail = NULL;

    while (n--) {
        int x, val;
        cin >> x >> val;

        if (x == 0) {
            insert_head(head, tail, val);
        }
        else if (x == 1) {
            insert_tail(head, tail, val);
        }
        else if (x == 2) {
            delete_index(head, tail, val);
        }

        print(head);
    }
    
}
