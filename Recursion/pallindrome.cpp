#include<iostream>
using namespace std;

int pallindrome(int n){
    int r;
    static int newN = 0;
    if(n==0){
        return 0;
    } else {
        r = n%10;
        n = n/10;
        newN = newN*10 + r;
        pallindrome(n);
    }
    cout << "NewNum: " << newN << endl;
    return newN;


}

int main() {
    int n;
    cin >> n;
    int num = pallindrome(n);
    if(num == n){
        cout << "Yes";
    } else {
        cout << "No";
    }
}