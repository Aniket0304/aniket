#include<iostream>
#include<stack> 
using namespace std;
class Stack {
    public :
        int size ;
        int *arr ;
        int top ; 

        Stack( int size){
            this -> size = size;
            arr = new int[size];
            top = -1;
        }

        void push(int element){
            if( size - top > 1  ){
                top++;
                arr[top]= element ;    
            }
            else{
                cout << " overflow "<< endl;
            }
        }

        void pop( ){
            if( top !=-1){
                top --; 
            }
            else{
                cout<< " underflow" << endl;
            }
        }

        int peek(){
            if( top !=-1 && top < size)
                return arr[top];
            else{
                cout<< " Stack is empty" << endl;
                return -1;
            }
        }

};


int main (){
    Stack st(5);

    st.push(40);
    st.push(78);
    st.push(67);
 
    cout<< st.peek()<<endl ;

    st.pop();

    cout<< st.peek()<<endl ;


}