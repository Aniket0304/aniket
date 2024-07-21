#include<iostream>
using namespace std;
class Hero{
    private:
    int age;

    public:
    int health;
    char name;

    //parameterized constructor
    Hero(int age){
        cout<<" Adress of the age : "<< this <<endl; 
        this-> age= age; // current obj (h) uske adress ko store karta hai  
    }

    Hero (int health , char name ){
        this -> health = health;
        this -> name = name ;

    }

    int setage(){
        return age;
    }

    void getage(int a){
        age= a;
    }

};

int main(){
    //static allocation 
    Hero h(20); //ye 20 private wale age me 20 daal de raha hai 
    cout<<"Adress of the age : "<<&h<<endl;

    Hero val(20 , 'A');
    cout<< " the health is : "<< val.health<<endl;
    cout<< " intial of name is : "<< val.name<< endl;













    // h.getage(20);

    // cout<<"Value of the age is : "<< h.setage()<<endl;

    // // dyanmically allocation 
    // Hero *h1 = new Hero;

    // (*h1).getage(60);
    // h1->health = 40;

    // cout<< " Value of age is :  "<< h1->setage()<<endl;      // dono hi case same hai 
    // cout<< " level of health is :  "<< (*h1).health<<endl;


    // cout<< " Value of age is :  "<< h1->setage()<<endl;      // dono hi case same hai 
    // cout<< " level of health is :  "<< (*h1).health<<endl;

    // cout<<"Value of the age is : "<< h.setage()<<endl;

    return 0;
}