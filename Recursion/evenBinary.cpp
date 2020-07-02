#include<iostream>
using namespace std; 
  
void equal(int n, string left="", string right="",  int di=0) 
{ 
    if (n == 0) 
    { 

        if (di == 0) 
            cout << left + right << " "; 
        return; 
    } 
  
    if (n == 1) 
    { 

        if (di == 0) 
        { 
            cout << left + "0" + right << " "; 
            cout << left + "1" + right << " "; 
        } 
        return; 
    } 
  
    if ((2 * abs(di) <= n)) 
    { 
        if (left != "") 
        { 
          
            equal(n-2, left+"0", right+"0", di); 

            equal(n-2, left+"0", right+"1", di-1); 
        } 

        equal(n-2, left+"1", right+"0", di+1); 
        
        equal(n-2, left+"1", right+"1", di); 
    } 
} 
  
int main() 
{ 
    int n = 5; 
    equal(n); 
    return 0; 
} 