/* Đệ quy lồng nhau
+ cú pháp:
    fun(n){
        fun(fun(n + 1));
    }
*/
#include <bits/stdc++.h>
using namespace std;

int Fun(int n){
    if(n > 100)
        return n - 10;
    return Fun(Fun(n + 11));
}


int main(){
    cout << Fun(95);

    system("pause");
    return 0;
}