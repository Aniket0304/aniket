#include<bits/stdc++.h>
using namespace std;
class Hero{
    private:
    int age;

    public:
    int health;
    char *naam;
    char name;
    static int TimeToComplete;

    //parameterized constructor
    Hero(int age){
        cout<<" Address of the age : "<< this <<endl; 
        this-> age= age; // current obj (h) uske adress ko store karta hai  
    }

    Hero (int health , char name ){
        this -> health = health;
        this -> name = name ;

    }

    Hero(){
        naam = new char[20];
    }
    // deep copy ho gayi hai , isme naya array hi bana diya hai 
    Hero( Hero& Nina ){

        char *ch = new char(strlen(Nina.naam)+1);
        strcpy( ch, Nina.naam);
        this -> naam = ch;
        

    }

    int getage(){
        return age;
    }

    void setage(int a){
        age= a;
    }

    void setnaam(char naam[]){
        strcpy ( this ->naam, naam);
    }

    void print(){
        cout<< "Name of is : " << this->naam <<endl;
    }

};

// mast class ke bahar access karo isko 
int Hero::TimeToComplete=50; 
// class name // scope resolution operator // static wale ka naam // value 

int main(){

    Hero Paul;
    char naam[7] = "Aniket";

    // cout<< "Health of Tiger is : "<< Tiger.health<<endl;
    // cout<< "Age of Tiger is : "<< Tiger.setage()<<endl;
    Paul.setnaam(naam);

    Hero Tiger (Paul); // copied properties of paul (object) in Tiger (another object) 
    // ye jo hua hai na wo default copy kiya hai toh isse shallow copy khte hai 
    Paul.print();
    Tiger.print();

    Paul.naam[0]= 'T';

    Paul.print();
    Tiger.print();// change to sirf paul me kiya tiger me kyun hua toh karan hai shallow copy 
    // arthat ye ki ek hi memory do naam se call ho rahi hai 
    // koi nayi memory tiger ke liye allot nahi ho rahi hai 

    cout<<Hero::TimeToComplete<<endl;


}