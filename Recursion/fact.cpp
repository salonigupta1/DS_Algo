#include<iostream>
#include<cmath>

using namespace std;

double fact(int n){
    if(n==1){
        return 0;
    }
    return fact(n-1) + log(n);
}

int main() {
    int n;
    cin >> n;
    cout << fact(n);
}