#include<iostream>
#include<string>
using namespace std;

void fun1(string str){
    int count = 0;
    for(int i=0; i<str.length(); i++){
        if(!(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == ' ')){
            count ++;
        }
    }

    cout << count;

}

int main() {
    string str;
    getline(cin, str);
    fun1(str);
}