#include<iostream>
using namespace std;
void mergesort(int *arr, int s , int e){
    
    int mid= (e+s)/2;
    int len1= mid -s +1;
    int len2= e-mid;
    
    int *first= new int[len1];
    int *second = new int [len2];
    
    // copying in 1st array
    int mainarrayindex= s;
    for(int i= 0; i<len1; i++){
        first[i]=arr[mainarrayindex++];
    }

    //copying in 2nd array 
    mainarrayindex=mid+1;
    for(int i= 0;i<len2;i++){
        second[i]=arr[mainarrayindex++];
    }

    // merge two sorted array 
    int index1= 0;
    int index2 = 0;
    mainarrayindex=s;

    while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]){

            arr[mainarrayindex++] = first[index1++];
        }
        else{

            arr[mainarrayindex++] = second[index2++];
        }  
    }
    while(index1 < len1){

        arr[mainarrayindex++]=first[index1++];

    }
    while(index2 < len2){

        arr[mainarrayindex++]=second[index2++];
    }
}

void sort(int *arr,int s, int e){
    // base case

    if(s>=e){
        return ;
    }
    int mid = (s+e)/2;
    // left ke liye 
    sort(arr,s,mid);

    //right side ke liye 
    sort(arr,mid+1,e);

    //merge
    mergesort(arr,s,e);

    
}

int main(){
    int arr [5]= {5,6,7,3,4};
    int n =5;

    sort(arr,0,n-1);

    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}