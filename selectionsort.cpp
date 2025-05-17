#include<iostream>
using namespace std;
int main(){
    int arr[5]={6,7,3,4,2};
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    int size= sizeof(arr)/sizeof(arr[0]);
    // line ma bachay dondany chala hu or manay sab sy kam hight wala larka bikul sab sy agay lagana ha 
    // jis jaga ka adress ha 0;
    //or manay jo dondna ha wo jo size ha array ka jis ma larkay khary hin os size sy ik kam he jana ha
    for(int i=0;i<size-1;i++){
        int min_index=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[min_index])
            min_index=j;
            }
        swap(arr[i],arr[min_index]);
        }
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        
    }
}