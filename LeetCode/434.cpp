#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;
int countSegments(string s) {
    stringstream ss(s);
    string word;
    int count = 0;

    while(ss >> word) {
        count++;
    }

    return count;
}
int main() {
    
    return 0;
}