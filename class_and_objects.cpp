#include<iostream>
using namespace std;

class Hero{ // there are three types of access modifiers 1) public 2) private 3) protected
    
    private:
    string name="tushar";
    // this can only be accesed in class only .
    
    
    public:
    // properties
    int health;
    char level;

    // we can access the value of private class outside the class by using using get and set commands. 

    string getname(){ // ye getter hai (iska kaam hai name ko accessible banana class ke bahar bhi )
        return name;
    }

    void setname(string na){ // ye setter hai (iska use karke ham value declare kar sakte hai private wale variable ki )
        name = na;              // aur change bhi kar sakte hai 
    }

};

int main(){

    //creation of object 
    Hero paul;

    //to access the properties of class we need to use ". " operator with object 
    paul.health =10;
    paul.level = 'B';

    // to print this just normally cout the value 
    cout<< " paul's health is : "<<paul.health<< endl;
    cout<< " paul's level is : "<< paul.level<< endl;

    // to access get and set 
    cout<<"The name of paul's father is : "<<paul.getname()<<endl;

    // value set bhi kar sakte hai 
    paul.setname("aniket");

    cout<<"The name of paul's father is : "<<paul.getname()<<endl;


}
