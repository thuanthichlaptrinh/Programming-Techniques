#include <bits/stdc++.h>
using namespace std;

/* ĐỆ QUY TUYẾN TÍNH 
-> là loại đệ quy chỉ có duy nhất 1 lời gọi hàm
*/

int GiaiThua(int n){
    if(n == 0) return 1;
    return n * GiaiThua(n - 1);
}
/* 
    giaithua(5) = 5 * giaithua(4) = 5 x 4 x 3 x 2 x 1
    giaithua(4) = 4 * giaithua(3) = 4 x 3 x 2 x 1
    giaithua(3) = 3 * giaithua(2) = 3 x 2 x 1
    giaithua(2) = 2 * giaithua(1) = 2 x 1
    giaithua(1) = 1 * giaithua(0) = 1
    giaithua(0) = 1
*/

int Tong(int n){
    if(n == 0) return 0;
    return Tong(n - 1) + n; // tính tổng n số tự nhiên
}
/*
    tong(5) = tong(4) + 5 = 1 + 2 + 3 + 4 + 5
    tong(4) = tong(3) + 4 = 1 + 2 + 3 + 4
    tong(3) = tong(2) + 3 = 1 + 2 + 3
    tong(2) = tong(1) + 2 = 1 + 2 
    tong(1) = tong(0) + 1 = 1
    tong(0) = 0
*/

int main(){
    cout << "Giai thua la: " << GiaiThua(5) << endl;
    //cout << "Tong so tu nhien 5 la: " << Tong(5) << endl;

    return 0;
}