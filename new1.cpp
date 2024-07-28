#include<iostream> 
using namespace std;
int main (){
    int lowerbound = 1;
    int upperbound = 10;
    cout<< " Guess a number and i will predict that number asking some question !!"<< endl;
    cout<< " You have answer it by typing yes/no "<< endl;
    while(true){
        int mid = (upperbound-lowerbound)/2;
        cout<< " is the number greater than "<<mid ;
        cout<< "yes/no ?"<< endl;
        string st;
        cin>>st;
        if(st)
    }
}