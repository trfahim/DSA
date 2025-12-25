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
void insert_head(Node* &head, int val){
    Node* insertnode = new Node(val);
    insertnode->next = head;
    head = insertnode;
}
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
}
int main() {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    
    head->next = a;
    a->next = b;

    insert_head(head, 100);
    print(head);
}