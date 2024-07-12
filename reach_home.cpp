#include<iostream>
using namespace std;

void reach(int src, int des){
    if (src==des){
        cout<< "pahuch gaya"<<endl;
        return ;

    }

    cout<< "source " << src << " destination " << des;

    cout<<endl;

    src++;

    reach(src,des);
}

int main(){
    int src =1;
    int des =10;

    reach(src,des);
}

