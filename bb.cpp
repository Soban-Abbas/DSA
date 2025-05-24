#include<iostream>
using namespace std;
int main(){
    int arr[5]={5,4,3,2,1,};
    int minimum=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]<minimum){
    minimum=arr[i];
        }

    }
    cout<<minimum;
}