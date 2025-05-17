#include<iostream>
using namespace std;
int power(int n){
    //base case
    if(n==0){
        return 1;
    }
    int small_problem=power(n-1);
    int big_problem=2*small_problem;
    return big_problem;
}
int main(){
    int n;
    cout<<"Enter the number whole power you want to find"<<" ";
    cin>>n;
    int result=power(n);
    cout<<result;
    
}