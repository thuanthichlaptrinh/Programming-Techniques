#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

// Linear Search O(n)
int Linear_Seach(int a[], int n, int x){
    for(int i = 0; i < n; i++){
        if(a[i] == x){
            return i;
        }
    }
    return -1;
}

int TimViTriXuatHienCung(int a[], int n, int x){
    int res = -1; // giả sử ban đầu không tìm thấy
    for(int i = 0; i < n; i++){ 
        if(a[i] == x){ // nếu có phần tử nào bằng với x
            res = i; // cập nhật chỉ số của phần tử bằng với x cho biến temp
        }
    }
    return res;
}

// Binary Search O(log(n))
// sử dụng while
int Binary_Search(int a[], int n, int x){
    int left = 0, right = n - 1;
    while(left <= right){
        int mid = (left + right) / 2;

        if(a[mid] == x)
            return mid;
        else if(a[mid] < x)
            left = mid + 1;
        else 
            right = mid - 1;
    }
    return -1;
}

// sử dụng for
int BinarySearch(int a[], int n, int x){
    int l = 0, r = n - 1;
    for(int i = l; i <= r; i++){
        int m = (l + r) / 2;

        if(a[m] == x) 
            return m;
        else if(a[m] > x) 
            r = m - 1;
        else 
            l = m + 1;
    }
    return -1;
}

// sử dụng đệ quy
int Binary_Search_DeQuy(int a[], int n, int left, int right, int x){
    if(left > right)
        return -1;
    int mid = (left + right) / 2;
    if(a[mid] == x)
        return mid;
    else if(x > a[mid])
        return Binary_Search_DeQuy(a, n, mid + 1, right, x);
    else
        return Binary_Search_DeQuy(a, n, left, mid - 1, x);
}

// Tìm vị trí xuât hiện đầu tiên
int First_Pos(int a[], int n, int x){
    int left = 0, right = n - 1; 
    int res = -1; // giu vi tri c
    while(left <= right){
        int mid = (left + right) / 2;

        if(a[mid] == x){
            res = mid;
            right = mid - 1;
        }
        else if(a[mid] < x){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        } 
    }
    return res;
}
// Tìm vị trí xuât hiện cuối cùng
int Last_Pos(int a[], int n, int x){
      int left = 0, right = n - 1; 
    int res = -1; // giu vi tri c
    while(left <= right){
        int mid = (left + right) / 2;

        if(a[mid] == x){
            res = mid;
            left = mid + 1;
        }
        else if(a[mid] < x){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        } 
    }
    return res;
}


void DocFile(int a[], int &n){
    ifstream f;
    f.open("input.txt", ios::in);
    f >> n;
    for(int i = 0; i < n; i++){
        f >> a[i];
    }
    f.close();
}

int main(){
    int a[100];
    int n;
    DocFile(a, n);
    cout << "Phan tu xuat hien dau tien: " << Linear_Seach(a, n, 3) << endl;
    cout << "Phan tu xuat hien cuoi cung: " << TimViTriXuatHienCung(a, n, 3) << endl;
    // cout << "Phan tu xuat hien dau tien: " << First_Pos(a, n, 3) << endl;
    // cout << "Phan tu xuat hien cuoi cung: " << Last_Pos(a, n, 3) << endl;
    system("pause");
    return 0;
}