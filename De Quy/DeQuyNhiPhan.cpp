#include <bits/stdc++.h>
using namespace std;

/* ĐỆ QUY NHỊ PHÂN 
-> là loại đệ quy có 2 lần gọi hàm
*/

int fibonacci(int n){
    if(n == 1 || n == 2)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// tính tổ hợp chập k của n phần tử: n! / (k! * (n - k)!)
int ToHop(int n, int k){
    if(k == 0 || k == n)
        return 1;
    else
        return ToHop(n - 1, k) + ToHop(n - 1, k - 1);
}
// kCn = kC(n - 1) + (k - 1)C(n - 1)

int main(){
    cout << fibonacci(5) << endl; 

    system("pause");
    return 0;
}