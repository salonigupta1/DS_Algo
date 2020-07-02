//Function to find log2(n)

#include<iostream>
using namespace std;

int findValue(int n){
    if(n==1){
        return 0;
    }

    return 1 + findValue(n/2);
}

int main() {
    int n;
    cin >> n;
    cout << findValue(n);

    
}