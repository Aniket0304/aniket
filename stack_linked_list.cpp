#include<iostream>
#include<stack>
using namespace std;
class Stack {
    public:
        int data ;
        Stack* next ;

    Stack (int d){
        this -> data = d ;
        this -> next = NULL ; 
       
    }
};

void push(Stack* &tail , int d ){
    Stack* temp = new Stack(d);
    tail -> next = temp ;
    tail = temp;
    
}

void pop(Stack* &head ){
   if (head-> next==NULL){
        Stack* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp ; 
    }

    else {
        Stack* curr = head; //curr wo wali ha jisko udana hai 
        Stack* prev = NULL;

        while (curr -> next != NULL){
           prev = curr;
           curr = curr-> next;
        }
        prev -> next = NULL;  // ye sara process bas exchange karne ke liye hai 
        delete curr;
        curr = head;
    }
    
}
void top(Stack* head){
    Stack* temp = head;
    if (head == NULL){
        cout<< "empty"<< endl;
    }
    else if (head -> next == NULL ){
        cout<< head -> data << endl;
    }
    else{
        while ( temp -> next !=NULL){
        temp = temp -> next ;
    }
    cout<< temp -> data << endl;
    }
    
}

int main(){
    Stack* aniket= new Stack(10);
    Stack* head= aniket;
    Stack* tail = aniket; 
    push(tail , 45);
    push(tail , 95);
    push(tail , 55);
    push(tail , 5);
    top(head);
    pop(head);
    top(head);

}

