#include <iostream> 
using namespace std; 
  
void fun(int x)  
{  
    if(x > 0)  
    {  
        fun(--x);  
        cout << x <<" ";  
        fun(--x);  
    }  
}  
  
int main()  
{  
    int a = 4;  
    fun(a);  
    return 0;  
}  



//                    fun(4);
//                   /
//                fun(3), print(3), fun(2)(prints 0 1)
//               /
//           fun(2), print(2), fun(1)(prints 0)
//           /
//       fun(1), print(1), fun(0)(does nothing)
//       /
//    fun(0), print(0), fun(-1) (does nothing)
//