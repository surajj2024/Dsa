#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        // constructor
        Node(int data){
            this -> data = data;
            this -> next = NULL;
        }

        // destructor
        ~Node(){
            int value = this -> data;

            // memory free
            if(this -> next != NULL){
                delete next;
                this -> next = NULL;
            }
            cout<<"Memory is free for node with data "<<value << endl;
        }
};

void insertAtHead(Node* &tail, Node* &head, int d){
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }else{
    // New node create
    Node* temp = new Node(d);

    temp -> next = head;
    head = temp;
    }




    
}

void insertAtTail(Node* &tail, Node* &head, int d){
    // New node create

    if(head == NULL) {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }

    else{
        Node* temp = new Node(d);

    tail -> next = temp;
    tail = temp;
    }

    

    /*  if(head == NULL) {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    } */
}


void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

void insertAtPosition(Node* &tail, Node* &head, int position, int d){
    // Insert at starting position
        if(position == 1){
            insertAtHead(tail, head, d);
            return;
        }

        Node* temp = head;
        int cnt = 1;

        while(cnt < position - 1){
            temp = temp -> next;
            cnt++;
        }

    // inserting at last position
        if(temp -> next == NULL){
            insertAtTail(tail, head, d);
            return;
        }

    // create a new node for d
        Node* nodeToInsert = new Node(d);
        nodeToInsert -> next = temp -> next;
        temp -> next = nodeToInsert;
}

void deleteNode(int position, Node* &head){
    // deleting first or last position
    if(position == 1){
        Node* temp = head;
        head = head -> next;

    //memory free start node
    temp -> next = NULL;
    delete temp;
    }

    else{
    // deleting any middle node or last node
    Node* curr = head;
    Node* prev = NULL;

    int cnt = 1;
    while(cnt < position){
        prev = curr;
        curr = curr -> next;
        cnt++;
    }
    prev -> next = curr -> next;
    curr -> next = NULL;
    delete curr;
    }
}





int main(){

    Node* node1 = NULL;
    // Node* node1 = new Node(10);
    // cout<<node1 -> data <<endl;
    // cout<<node1 -> next <<endl;

    // head pointed t0 node1
    // For head type insertion
    Node* head = node1;
    // print(head);
    /* insertAtHead(head, 20);
    print(head);
    insertAtHead(head, 12);
    print(head); */

    // tail pointed to node1
    // For tail type insertion
    Node* tail = node1;
    print(head);
    insertAtTail(tail, head, 20);
    print(head);
    insertAtTail(tail, head, 22);
    print(head);
    insertAtTail(tail, head, 33);
    print(head);
    insertAtPosition(tail, head, 3, 67);
    print(head);

    cout<<"Head "<<head -> data<<endl;
    cout<<"Tail "<<tail -> data<<endl;

    deleteNode(2, head);
    print(head);
    cout<<"Head "<<head -> data<<endl;
    cout<<"Tail "<<tail -> data<<endl;


    return 0;
}
