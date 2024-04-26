#include <bits/stdc++.h>
using namespace std;

// Bài 1:
//1. S(n) = 1 + 2 + 3 + ... + n
int S1(int n){
    if(n == 0)
        return 0;
    return S1(n - 1) + n;
}
//2. S(n) = căn(2 + căn(2 + ... + căn(2 + căn(2)))), với n dấu căn
double S2(int n){
    if(n == 1)
        return sqrt(2);
    return sqrt(2 + S2(n - 1));
}

//3. S(n) = 1/2 + 2/3 + ... + n/n+1
double S3(int n){
    if(n == 0)
        return 0;
    return (1.0 * n / (n + 1)) + S3(n - 1);
}

//4. S(n) = 1 + 1/3 + 1/5 + ... + 1/2n+1
double S4(int n){
    if(n == 0)
        return 1;
    return (1.0 / (2 * n + 1)) + S4(n - 1);
}

//5. S(n) = 1.2 + 2.3 + 3.4 + 4.5 + ... + n.(n+1)
long S5(int n){
    if(n == 0)
        return 0;
    return (n * (n + 1)) + S5(n - 1);
}

//6. S(n) = 1/1.2.3 + 1/2.3.4 + .. + 1/n(n+1).(n+2)
double S6(int n){
    if(n == 0)
        return 0;
    return (1.0 / (n * (n + 1) * (n + 2))) + S6(n - 1);
}

//7. S(n) = 1^2 + 2^2 + n^2
long S7(int n){
    if(n == 0)
        return 0;
    return pow(n, 2) + S7(n - 1);
}

//8. S(n) = 1 + (1 + 2) + ... + (1 + 2 + 3 + n)
long S8(int n){
    if(n == 0)
        return 0;
    return  ((n*(n + 1) / 2)) + S8(n - 1);
}

// Tính giai thừa
long GiaiThua(int n){
    if(n == 0 || n == 1)
        return 1;
    return n * GiaiThua(n - 1);
}

// tính số mũ
long pow(int x, int n){
    if(n == 0)
        return 1;
    return pow(x, n - 1) * x;
}

//9. S(n) = -1+2/2! + 3+4/4! - 5+6/6! + ... + (-1)^n . ((2n-1) + (2n))/2n!
double S9(int n){
    if(n == 0) 
        return 0;
    return pow(-1, n) * ((2 * n - 1) + (2 * n)) / (double)GiaiThua(2 * n) + S9(n - 1);
}

//10. 
double S10(int n){
    if(n == 0)
        return 0;
    return ((n * GiaiThua(n + 1)) / ((n + 1) + sqrt(n + 2))) + S10(n - 1);
}

//11. 
double S11(int n){
    if(n == 0)
        return 0;
    return (n + sqrt(n + n + 1)) / ((n + 1) + sqrt(GiaiThua(n + 2))) + S11(n - 1);
}

// Bài 3:
int UCLN(int a, int b){
    if(a == b)
        return a;
    if(a > b)
        return UCLN(b, a - b);
    else
        return UCLN(a, b - a);
}
//cach2:
int GCD(int a, int b){
    if(b == 0)
        return a;
    return GCD(b, a % b);
}

// Bài 4: tìm phần tử thứ n của CSC có hạng đầu là a, công sai r
int CSC(int n, int a, int r){
    if(n == 1)
        return a;
    return CSC(n - 1, a, r) + r; 
}

// Bài 5: tìm phần tử thứ n của CSN có hạng đầu là a, công bội r
int CSN(int n, int a, int r){
    if(n == 1)
        return a;
    return CSN(n - 1, a, r) * r;
}

// Bài 6: tính U(n) = U(n - 5) + U(n - 4) + U(n - 3) + U(n - 2) + U(n - 1), nếu n >= 6 ngược lại thì = n
int U(int n){
    if(n < 6)
        return n;
    int kq = 0;
    for(int i = 5; i > 0; i--){
        kq += U(n - i);
    }
    return kq;
}
int U_Cach2(int n){
    if(n < 6)
        return n;
    return U_Cach2(n - 5) + U_Cach2(n - 4) + U_Cach2(n - 3) + U_Cach2(n - 2) + U_Cach2(n - 1);
}

/* Bài 7: cho dãy An theo các công thức quy nạp, viết chương trình tính số hạng thứ n:
    1. A0 = 1, A1 = 0, A2 = -1; An = 2.A(n - 1) - 3A(n - 2) - A(n - 3)
Nếu n = 0, 1 hoặc 2, thì trả về giá trị của số hạng ban đầu tương ứng (A(0), A(1) hoặc A(2)).
Nếu n >= 3, sử dụng công thức quy nạp để tính A(n) bằng cách sử dụng các số hạng trước đó:
A(n) = 2A(n - 1) - 3A(n - 2) - A(n - 3)
*/
long Bai7(int *a, int n){
    if(n == 0)
        return a[0];
    if(n == 1)
        return a[1];
    if(n == 2)
        return a[2];
    return 2 * Bai7(a, n - 1) - 3 * Bai7(a, n - 2) - Bai7(a, n - 3);
}

// Bài 8: f(1) = 1; f(2n) = 2f(n); f(2n+1) = 2f(n) + 3f(n+1)
int bai8(int n){
    if(n == 1)
        return 1;
    else if(n % 2 == 0)
        return 2 * bai8(n/2);
    else 
        return 2 * bai8((n - 1) / 2) + 3 * bai8((n + 1) / 2);
}
int khudequy(int n)
{
    int a[1000];
    a[1]=1;
    for(int i=1;i<=n/2;i++)
    {
        a[i*2]=2*a[i];
        a[i*2+1]=2*a[i]+3*a[i+1];
    }
}

// Bài 10: sắp hàm tìm kiếm số x trên mảng a theo thuật toán tìm kiếm nhị phân bằng kỹ thuật đệ quy
int BnrSearch(int a[], int n, int x, int left, int right){
    if(left > right)
        return -1;
    int mid = (left + right) / 2;
    if(x == a[mid])
        return mid;
    else if(x < a[mid])
        BnrSearch(a, n, x, left, mid - 1);
    else
        BnrSearch(a, n, x, mid + 1, right);
}

// Bài 11: Xuất dãy số có n số fibonacci
long fibo(int n){
    if(n == 1 || n == 2)
        return 1;
    return fibo(n - 1) + fibo(n - 2);
}
void XuatSoFibo(int n){
    for(int i = 1; i <= n; i++){
        cout << fibo(i) << " ";
    }
}

// Bài 12: tìm số fibo lớn nhất nhưng nhỏ hơn n, n nhập từ phím
long FiboMax(int n, int a = 0, int b = 1){
    if(b >= n)
        return a;
    return FiboMax(n, b, a + b);
}

// Bài 13: viết hàm tính số hàng thứ n của 2 dãy sau:
// x0 = 1, y0 = 0;
// xn = xn-1 + yn-1
// yn = 3xn-1 + 2yn-1
int x(int);
int y(int);
int x(int n){
    if(n == 0)
        return 1;
    return x(n - 1) + y(n - 1);
}
int y(int n){
    if(n == 0)
        return 0;
    return 3 * x(n - 1) + 2 * y(n - 1);
}

// Bài 14: Viết hàm tính hãy An: A1 = 1; An = n(A1 + A2 + ... + An-1)
int A(int n){
    if(n == 1)
        return 1;
    int kq = 0;
    for(int i = 1; i < n; i++){
        kq += A(i);
    }
    return kq * n;
}

// Bài 15: y1 = 1; y2 = 2; y3 = 3; yn = yn-1 + 2yn-2 + 3yn-3 nếu n >= 4
int Y(int n){
    if(n == 1)
        return 1;
    if(n == 2)
        return 2;
    if(n == 3)
        return 3;
    return Y(n - 1) + 2 * Y(n - 2) + 3 * Y(n - 3);
}

// Bài 16: x1 = 1; x2 = 1; xn = xn-1 + (n-1).xn-2 với n >= 3
int X(int n){
    if(n == 1 || n == 2)
        return 1;
    else
        return X(n - 1) + (n - 1) * X(n - 2);
}

int main(){
    printf("%d", A(6));

    system("pause");
    return 0;
}