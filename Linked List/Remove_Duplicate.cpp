#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int val){
        this->val =val;
        this->next = NULL;
    }
};

void insert_val(Node* &head, Node* &tail, int val){
    Node* newval = new Node(val);

    if(head == NULL){
        head = tail = newval;
        return;
    }
    tail->next = newval;
    tail = newval;
}

void solve(Node* head){
    Node* temp = head;

    while(temp != NULL){
        Node* temp2 = temp;

        while(temp2->next != NULL){
            if(temp2->next->val == temp->val){
                Node* del = temp2->next;
                temp2->next = del->next;
                delete del;
            }
            else{
                temp2 = temp2->next;
            }
        }
        temp = temp->next;
    }
}

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
}
int main() {
    Node* head = NULL;
    Node* tail = NULL;

    while(true){
        int val;
        cin >> val;

        if(val == -1) break;
        insert_val(head, tail, val);
    }

    solve(head);
    print(head);
}
