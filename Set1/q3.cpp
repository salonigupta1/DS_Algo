//Find Binary equivalent

#include<iostream>
using namespace std;

void findBinary(int n){
    if(n==0){
        return;
    }
    findBinary(n/2);
    cout << n%2;
}

int main() {
    int n;
    cin >> n;
    findBinary(n);
}