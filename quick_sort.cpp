#include<iostream>
using namespace std;

int partition(int *arr ,int s , int e ){
    
    int cnt=0;
    int pivot= arr[s];

    for(int i = s+1 ; i<=e ; i++){
        if(arr[i]<= pivot){
            cnt++;
        }   
    }
    int pivotindex = s + cnt;

    swap(arr[s],arr[pivotindex]);

    int i=s;
    int j=e;

    while( i < pivotindex && j > pivotindex){

        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i < pivotindex && j > pivotindex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotindex;
}

void quick_sort(int *arr,int s,int e){
    // base case
    if(s>=e){
        return ;
    }

    //partition karenge
    int p = partition (arr,s,e);

    //left wala sort karenge
    quick_sort(arr,s,p-1);

    //right wala sort karenge
    quick_sort(arr,p+1,e);
}

int main(){
    int arr[6]={5,6,4,8,2,9};
    int n = 6;
    
    quick_sort(arr,0,n-1);

    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;

}