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

void value_insert_tail(Node* &head, Node* &tail, int val){
    Node* newvalue = new Node(val);
    if(head == NULL){
        head = newvalue;
        tail = newvalue;
    }
    tail->next = newvalue;
    tail = tail->next;
}

void any_pos_delete(Node* &head, Node* &tail, int pos){
    Node* temp = head;
    for(int i=1; i<pos; i++){
        temp = temp->next;
    }
    Node* deletenode = temp->next;
    temp->next = temp->next->next;
    delete deletenode;
    tail = temp;
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    
    int val;
    while(true){
        cin >> val;
        if(val == -1) break;
        value_insert_tail(head, tail, val);
    }
    int pos;
    cin >> pos;
    any_pos_delete(head, tail, pos);
    print(head);
}