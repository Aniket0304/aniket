#include<iostream>
using namespace std;

class Node{

    public:
    int data ;
    Node* prev;
    Node* next ;

    //constructor 
    Node(int d){
        this -> data = d;
        this -> next = NULL ;
        this -> prev= NULL;
    }

};

void deletenode(Node* &head, int position){
    // for first node
    if(position == 1){
        Node* temp = head;
        temp -> next ->prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }

    else{
        // deleting any middle node
        Node* curr = head;
        Node* previ = NULL;

        int count = 1;
        while (count < position){
           previ = curr;
           curr = curr-> next;
           count ++;
        }

        curr -> next -> prev = previ;
        previ -> next = curr -> next;
        curr -> next = NULL; 
        curr-> prev = NULL;

        delete curr;
        
    }
}

void insertattail(Node* tail, int d){
    Node* temp = new Node (d);
    temp -> prev = tail;
    tail -> next = temp;
    tail = temp ;
    
}

void insertathead(Node* &head , int d){
    Node* temp = new Node(d);
    temp -> next = head; // head ek poora ka poora hi node ka address hai 
    head -> prev = temp; // head ke previous me temp ka address store karaya gaya hai 
    head = temp;
    
}
void insertatposition( Node* &aniket, int position, int d){
    if(position == 1){
        insertathead(aniket,d);
        return ;
    }

    Node* temp = aniket;
    int count = 1;
    while(count <position-1){
        temp  = temp -> next;
        count++;
    }
    Node* pos = new Node(d);
    pos -> next = temp -> next;
    temp->next->prev = pos;
    pos -> prev = temp;
    temp -> next = pos;

}

int getlength(Node* &aniket){
    int len =0;
    Node* temp = aniket;

    while ( temp != NULL){
        len++;
        temp = temp -> next;
    }
    return len;
}

void print(Node* &aniket ){
    Node* temp = aniket;

    while ( temp != NULL){
        cout<< temp -> data <<" "; 
        temp = temp -> next;
    }
    cout<<endl;
}

int main (){
    Node*  aniket = new Node(10);
    Node* head = aniket;
    Node* tail = aniket;

    print(aniket);

    //cout<< getlength(aniket)<< endl;

    insertathead(aniket, 70);
    print(aniket);

    insertathead(aniket, 80);
    print(aniket);

    insertathead(aniket, 60);
    print(aniket);

    insertathead(aniket, 40);
    print(aniket);

    insertattail(tail, 50);
    print(aniket);

    insertatposition(aniket, 3, 12);
    print(aniket);

    deletenode(aniket , 1);
    print(aniket);


    return 0;

}