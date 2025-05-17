#include<iostream>
using namespace std;
int power(int base,int exponent){
    if(exponent==0){
        return 1;

    }
    int small_problem=power(base,exponent-1);
    int big_problem=base*small_problem;
    return big_problem;

}
int main(){
    int base;
    cout<<"Enter the base "<<" ";
    cin>>base;
    int exponent;
    cout<<"Enter the exponent"<<" ";
    cin>>exponent;
    int result=power(base,exponent);
    cout<<result<<endl;
}