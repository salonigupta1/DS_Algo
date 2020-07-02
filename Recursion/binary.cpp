#include<iostream>
#include<stdlib.h>
using namespace std;

void fun2(int K, char str[], int n){
    if(n==K){
        str[n] = '\0';
        cout << str << " ";
        return;
    } 

    if(str[n-1]=='1'){
        str[n] = '0';
        fun2(K, str, n+1);
    }

    if(str[n-1]=='0'){
        str[n]= '1';
        fun2(K, str, n+1);
        str[n] = '0';
        fun2(K, str, n+1);
    }
}

void fun1(int k){
    if(k<=0){
        return;
    }

    char str[k];
    str[0] = '0';
    fun2(k, str, 1);
    str[0] = '1';
    fun2(k, str, 1);
}
int main() {
    int K;
    cin >> K;
    fun1(K);
    return 0;
}