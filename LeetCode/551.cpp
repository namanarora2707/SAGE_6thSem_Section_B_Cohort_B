#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool checkRecord(string s) {
    int a=0,l=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='A'){
            a++;
            if(a>=2){
                return false;
            }
        }
        if(s[i]=='L'){
            l++;
            if(l>=3){
                return false;
            }
        }
        else{
            l=0;
        }
    }
    return true;
}
int main() {
    string s="PPPPALLPAPPP";
    cout<<checkRecord(s)<<endl;
    return 0;
}