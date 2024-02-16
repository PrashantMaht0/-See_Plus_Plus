#include <iostream>
using namespace std;

int fib(int n){

    if ( n<=1){
        return n;
    }
    return fib(n-1)+fib(n-2);

}

void print_fib(int n){

    for(int i=0;i<=n;i++){
        cout<<fib(i)<<" ";
    }
    cout<<endl;
}

int main(){

    int n;
    cout<<"Enter the limit: ";
    cin>>n;
    print_fib(n);
    return 0;
}