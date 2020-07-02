#include<iostream>
#include<cmath> 
#define ll long long int 

using namespace std;
  
// Recursive function to return 
// the sum of the given series 
ll sum(int n) 
{ 
  
    // 1^1 = 1 
    if (n == 1) 
        return 1; 
    else
  
        // Recursive call 
        return ((ll)n*n + sum(n - 1)); 
} 
  
// Driver code 
int main() 
{ 
    int n = 3; 
    cout << sum(n); 
  
    return 0; 
}