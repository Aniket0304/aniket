#include<iostream>
using namespace std;

class Node {

    public:
    int data;
    Node* next ; // next here is the part that carries the address of the node. 

    // constructor
    Node (int data){
        this -> data =data ;
        this -> next = NULL; 
    }

};

void deletethenode(Node* & head ,int position){
    // for the very first node 
    if (position == 1){
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp ; 
    }

    else {
        Node* curr = head; //curr wo wali ha jisko udana hai 
        Node* prev = NULL;

        int count = 1;
        while (count < position){
           prev = curr;
           curr = curr-> next;
           count ++;
        }
        prev -> next = curr -> next ;  // ye sara process bas exchange karne ke liye hai 
        curr -> next = NULL;
        delete curr;
    }

}

void insertattail(Node* &tail, int d){
    Node* val= new Node(d);
    tail-> next = val;
    tail = tail ->next; 
    
}

void insertathead(Node* &head, int b){
    Node* temp = new Node(b);
    temp -> next = head;
    head = temp ; 
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp -> data << " ";
        temp = temp -> next;
    }
    cout<< endl;
}

void insertatposition(Node* &head,int position, int d){
    if(position == 1){
        insertathead(head,d);
        return ;
    }

    Node* temp = head;
    int count = 1;
    while(count <position-1){
        temp  = temp -> next;
        count++;
    }
    Node* pos = new Node(d);
    pos -> next = temp -> next;// j wale node ko k wale ka address allot kar rhe hai 
    temp -> next = pos; // i wale node ko j wale node ka address allot kar rhe hai

}

int main(){
    
    Node* node1 = new Node(10);
    // cout<< node1 -> data<< endl;
    // cout<< node1 -> next << endl;

    // head pointed to node1
    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertattail(tail, 12);
    print(head);

    insertattail(tail, 15);
    print(head);

    insertattail(tail,30);
    print(head);

    insertatposition(head, 1, 80);
    print(head);

    deletethenode(head, 3);
    print(head);


}