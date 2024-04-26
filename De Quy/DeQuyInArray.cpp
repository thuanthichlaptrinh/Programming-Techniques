#include <bits/stdc++.h>
using namespace std;

int Tong(int a[], int n){
    if(n == 1) 
        return a[0];
    return Tong(a, n - 1) + a[n - 1];
}

int Max(int a[], int n){
    if(n == 1) 
        return a[0];
    int temp = Max(a, n - 1);
    if(temp > a[n - 1])
        return temp;
    else
        return a[n - 1];
}

int main(){
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);
    cout << Tong(a, n);

    system("pause");
    return 0;
}