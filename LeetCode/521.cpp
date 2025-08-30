#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int findLUSlength(string a, string b) {
    if(a==b) return -1;
    return max(a.size(),b.size());
}
int main() {
    string a="bccjewhui";
    string b="deeukudegue";
    cout<<findLUSlength(a,b)<<endl;
    return 0;
}