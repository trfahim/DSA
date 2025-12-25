#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void value_insert(Node* &head, Node* &tail, int value){
    Node* newvalue = new Node(value);
    if(head == NULL){
        head = newvalue;
        tail = newvalue;
        return;
    }
    tail->next = newvalue;
    tail = tail->next;
}

void solve(Node* &head){
    Node* temp = head;
    int max_val = INT_MIN, min_val = INT_MAX;
    while(temp != NULL){
        max_val = max(max_val, temp->val);
        min_val = min(min_val, temp->val);
        
        temp = temp->next;
    }
    cout << max_val - min_val << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int value;
    while(true){
        cin >> value;
        if(value == -1) break;
        value_insert(head,tail,value);
    }
    solve(head);
}