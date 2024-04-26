#include <bits/stdc++.h>
using namespace std;

/*  ĐỆ QUY PHI TUYẾN TÍNH
-> là hàm đệ quy có lời gọi hàm chính nó được đặt trong 1 vòng lặp
*/

int S(int n){
    if(n == 1)
        return 1;
    int s = 0;
    for(int i = 1; i < n; i++){
        s += S(i);
    }
    return s;
}

// x(n) = n*n*x(0)+(n-1)*(n-1)*x(n-1) + ... + 1*1*x(n - 1), x(0) = 1
long X(int n){
    if(n == 0) return 1;
    long s = 0;
    for(int i = 1; i <= n; i++){
        s += i * i * X(n - i);
    }
    return s;
}

int main(){
    cout << S(3) << endl;
    system("pause");
    return 0;
}