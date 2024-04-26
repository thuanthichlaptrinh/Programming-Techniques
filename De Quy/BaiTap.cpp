#include <bits/stdc++.h>
using namespace std;

// Tính giai thừa
long GiaiThua(unsigned int n){
    if(n == 0 || n == 1)
        return 1;
    return n * GiaiThua(n - 1);
}

// Tính số Fibo
long Fibonacci(unsigned int n){
    if(n == 1 || n == 2)
        return 1;
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}

//1. Tinh tong S(n) = 1 + 2 + 3 + ... + n
long TinhTongS1(unsigned int n){
    if(n == 0)
        return 0;
    return n + TinhTongS1(n - 1);
}

//2. S(n) = căn(2 + căn(2 + căn(2 +...))) có n dấu căn
double TongDauCan(int n){
    if(n == 1) 
        return sqrt(2);
    return sqrt(2 + TongDauCan(n - 1));
}

//2. Tinh tong S(n) = 1 + 1/2 + 1/3 + ... + 1/n
double TinhTongS2(unsigned int n){
    if(n == 0)
        return 0;
    return (double)1/n + TinhTongS2(n - 1);
}


//3. Tinh tong S(n) = 1*2 + 2*3 + 3*4 + 4*5 + ... + n(n + 1);
long TinhTongS3(unsigned int n){
    if(n == 0)
        return 0;
    return n * (n + 1) + TinhTongS3(n - 1);
}

// 4. Tính tổng S(n) = 1/3 + 2/3 + ... + n/n + 1;
double TinhTongS4(unsigned int n){
    if(n == 0) 
        return 0;
    else
        return 1.0 * n/(n + 1) + TinhTongS4(n - 1);
}

// 5. Tính tổng S(n) = 1/2 + 3/4 + 5/6 + ... + (2n+1)/(2n+2)

// 9. S(n) = (-1)^n * ((2n - 1) + 2n) / 2! 
double S9(int n){
    if(n == 0)
        return 0;
    else
        return (pow(-1, n) * ((2 * n - 1) + (2 * n)) / GiaiThua(2 * n)) + S9(n - 1);
}


// 6. S(n) = 1/n(n+1)(n+2)
double TinhTongS6(int n){
    if(n == 0)
        return 0;
    else
        return 1.0 / (n * (n + 1) * (n + 2)) + TinhTongS6(n - 1);
}

//8. S(n) = 1 + (1 + 2) + (1 + 2 + 3) + ... + (1 + 2 + 3 + n)
long TinhTongS8(int n){
    if(n == 0)
        return 0;
    else
        return TinhTongS8(n - 1) + (n * (n + 1)/2);
} 

// 10. 
double TinhTongS10(int n){
    if(n == 0)
        return 0;
    else
        return 1.0 * (n * GiaiThua(n + 1)) / ((n + 1) + sqrt(n + 2)) + TinhTongS10(n - 1);
}

//11. 
double TinhTongS11(int n){
    if(n == 0){
        return 0;
    }
    else{ 
        return (n + sqrt(n + n + 1)) / ((n + 1) + sqrt(GiaiThua(n + 2))) + TinhTongS11(n - 1);
    }
}

//4. Tìm giá trị phần tử thứ n của CSC có số hạng đầu là a, công sai là r
int CapSoCong(int n, int a, int r){ // Công thức của CSC: Un = a + (n - 1)*r
    if(n == 1)
        return a;
    if(n >= 2){
        return r + CapSoCong(n - 1, a, r);
    }
}

//5. Tìm phần tử thứ n của CSN có số hạng đầu là a, công bội là q
int CapSoNhan(int n, int a, int q){
    if(n == 1)
        return a;
    if(n > 1)
        return q * CapSoNhan(n - 1, a, q);
}

// Bai 13:
int x(int);
int y(int);

int x(int n){
    if(n == 0)
        return 1;
    else
        return x(n - 1) + y(n - 1);
}
int y(int n){
    if(n == 0)
        return 0;
    else
        return 3 * x(n - 1) + 2 * y(n - 1);
}

// Tìm giá trị lớn nhất
int TimMax(int a[], int first, int last){
    // phần neo
    if(first == last) 
        return a[first];
    // phần đệ quy
    int max = TimMax(a, first + 1, last);
    if (a[first] > max){
        max = a[first];
    }
    return max;    
}

// Chuyển cơ số
void ChuyenCoSo(int n, int coSo){
    if(n == 0)
        return;
    ChuyenCoSo(n / coSo, coSo);
    cout << n % 2;
}

// đảo ngược số
int DaoNguocSo(int n){
    int static s = 0, du;
    if(n == 0) {
        return 0;
    }
    else {
        du = n % 10;
        s = (s * 10) + du;
        DaoNguocSo(n / 10);
    }
    return s;
} // 123 -> s= 3, daonguoc(12) -> s = 32, daonguoc(1) -> s = 321, daonguoc(0)

long pow(int x, int n){
    if(n == 0)
        return 1;
    else
        return pow(x, n - 1) * x;
}

void Input(int& n){
    do{
        cout << "Nhap so nguyen: "; cin >> n;
        if(n < 0){
            cout << "Vui long nhap so nguyen > 0\n";
        }
    }while(n < 0);
}

int main(){
    int n; //Input(n);
    cout << x(3) << " " << y(3) << endl; 

    system("pause");
    return 0;
}