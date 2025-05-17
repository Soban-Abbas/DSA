#include<iostream>
using namespace std;
int factorial(int n){
    //base case
    if(n==0){
        return 1;
    }
    int small_problem=factorial(n-1);
    int big_problem=n*small_problem;
    return big_problem;
}
int main(){
    int n;
    cout<<"Enter the number whole factorial you want to find"<<" ";
    cin>>n;
    int result=factorial(n);
    cout<<result;
    
}