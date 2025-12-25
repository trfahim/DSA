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

void insert_tail(Node* &head, Node* &tail, int val){
    Node* newval = new Node(val);
    if(head == NULL){
        head = newval;
        tail = newval;
        return;
    }
    
    tail->next = newval;
    tail = tail->next;
}
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
        return;
    }

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    Node* head = NULL;
    Node* tail = NULL;
    
    int val;
    while(1){
        cin >> val;
        if(val == -1) break;
        insert_tail(head, tail, val);
    }
    print(head);
}