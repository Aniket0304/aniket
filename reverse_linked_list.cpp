    #include <iostream>
    using namespace std;
    class Node{
        public :
        int data ;
        Node* next ;
        Node* prev;

        Node(int d ){
            this-> data= d;
            this -> next = NULL;
            this -> prev = NULL;

        }
    };

    void insertathead(Node* &head , int d){
        Node* temp = new Node(d);
        temp -> next = head; // head ek poora ka poora hi node ka address hai 
        head -> prev = temp; // head ke previous me temp ka address store karaya gaya hai 
        head = temp;
    }


    void reversing(Node* &head ){

        Node* curr = head;
        Node* forward = NULL;
        Node* previous = NULL;

        if( head == NULL || head -> next == NULL){
            cout<< " none " << endl;
        }
        while ( curr != NULL){
            forward = curr -> next; 
            curr -> next = previous;
            curr -> prev = forward;
            previous = curr;
            curr = forward;
        }
        head = previous; 
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

        reversing(aniket);
        print ( aniket);


        return 0;

    }