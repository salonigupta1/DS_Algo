#include<iostream>
using namespace std;

int findNumber(int wrapper,  int wp, int rem=0){
    static int sum = 0;
    if(wrapper == 1){
        if((rem) && (rem + 1) == wp)
        {
            return sum+=2;
        }
        return sum+=1;
    }

    rem = wrapper%wp;
    sum = findNumber(wrapper/wp, wp, rem) + wrapper;
    return sum;
    

    
}

int main() {
    int money, price, wrapperPrice;
    cin >> money >> price >> wrapperPrice;
    int wrapper = money/price;
    cout << findNumber(wrapper , wrapperPrice);
}