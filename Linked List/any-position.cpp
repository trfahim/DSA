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
void any_position(Node* &head, int pos, int val){
    Node* newnode = new Node(val);
    Node* temp = head;
    for(int i=1; i<pos; i++){
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    Node* head = new Node(5);
    Node* a = new Node(25);
    Node* b = new Node(30);

    head->next = a;
    a->next = b;
    
    any_position(head,1,10);
    print(head);
}