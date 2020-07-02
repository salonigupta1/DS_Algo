#include<iostream>
#include<string>

using namespace std;

bool findPallindrome(string name, int s, int e){
    if(s==e){
        return true;
    }
    if(s>e){
        return true;
    }
    if(name[s] != name[e]){
        return false;
    }
    return findPallindrome(name, s+1, e-1);

    static string str="";
    
}
int main() {
    string name;
    getline(cin, name);
    cout << findPallindrome(name, 0, name.length()-1);
}