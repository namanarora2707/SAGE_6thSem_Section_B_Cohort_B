#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int fib(int n) {
    if(n==0 or n==1){
        return n;
    }
    int a=0;
    int b=1;
    int c;
    while(n>1){
        c=a+b;
        a=b;
        b=c;
        n--;
    }
    return b;
}
int main() {
    int n;cin>>n;
    cout<<fib(n)<<endl;
    return 0;
}