#include<iostream>
using namespace std;
class Node {
    public:

    int data ;
    Node* next;

    Node(int d){
        this-> data = d;
        this-> next = NULL;

    }
};
void insertatposition(Node* &tail, int element , int d ){

    // if the linked list is empty
    if( tail == NULL){
        Node* temp = new Node(d);
        temp -> next = temp;
        tail = temp;
    }
    
    else{
        // there is some element if present insert a node after that
        Node* curr = tail;
        curr = curr -> next ;
        while(curr -> data!= element ){
            curr = curr-> next;
        }

        // adding 
        Node*temp = new Node(d);
        temp -> next = curr -> next ;
        curr-> next = temp;
    }
}

void deletethenode(Node* &tail,int element ){
    // if the list is empty 
    if (tail == NULL){
        cout<< "the list is empty try again !" << endl;
        return ;
    }

    else{
        // if the element is present in the list 
        Node* prev = tail; 
        Node* curr = prev -> next;

        while(curr -> data != element){
            prev = curr;
            curr= curr-> next;
        }
        prev -> next = curr-> next ;
        curr -> next = NULL;
        delete curr;
    }
}

void print(Node* tail ){
    Node* temp = tail;
    do{
        cout<< tail-> data << " ";
        tail = tail-> next;
    }while(tail != temp);
    cout<<endl;
}

int main(){
    Node* tail = NULL;

    insertatposition(tail , 3 , 20);
    print (tail);

    insertatposition(tail , 20 , 10);
    print (tail);

    insertatposition(tail , 10 , 80);
    print (tail);

    insertatposition(tail , 80 , 40);
    print (tail);

    insertatposition(tail , 40 , 50);
    print (tail);

    insertatposition(tail , 50 , 12);
    print (tail);

    deletethenode(tail, 40);
    print (tail);

}