#include<bits/stdc++.h>
using namespace std;
int main (){
    cout<< "you want to play the game ? y/n";
    char n;
    cin >> n; 

        if(n=='y'){

        cout<< " guess the number between 1 to 10 : "<< endl;

        cout<< "is your guessed number is 5 ? y/n "<< endl;
        char s;
        cin>>s;

        if(s=='y'){
            cout<< " your guessed number is predicted . "<< endl;
        }
        else{
            cout<< " is the number greater or smaller than 5 ? g/s "<< endl;
        }
        char h ;
        cin>> h;
        
        if (h=='g'){
            for(int i =6 ; i<= 10 ; i++){
                cout<<"is the  number greater or smaller than "<<i<<endl;
                cin >> v[i];
            }
        }
        

    }
    
    
}