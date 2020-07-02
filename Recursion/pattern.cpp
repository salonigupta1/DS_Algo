#include<iostream>
using namespace std;

void rec(int n) 
{
if (n <  0)
{
cout << n << " ";
return;
} 

cout << n << " ";
n -= 5;

rec(n);

n += 5;
cout << n << " ";
}
int main() {
    int num;
    cin >> num;
    int n = num;
    rec(num);
}