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

void insert_last(Node* &head, int val){
    Node *insertnode = new Node(val);
    Node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = insertnode;
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
    
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    
    head->next = a;
    a->next = b;
    insert_last(head, 40);
    print(head);
}