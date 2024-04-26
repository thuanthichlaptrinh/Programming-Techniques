/*  THUẬT TOÁN TÌM KIẾM NHẢY
- ý tưởng: 
- input: dãy a, k
- ouput: vị trí của K hoặc -1
- mã giả:
    jumpSearch(a, k)
        d = bước nhảy // số tự nhiên > 1
        i = 1, j = i + d
        while (j <= n and aj < k) // nhảy theo bước d
            j += d
            i += d
        if j > n
            j = n // tại bước nhảy cuối cùng đặt j = n
        while (ai < k) // tìm kiếm tuần tự từ khoảng i -> j
            i = i + 1
            if (i > n or i > j)
                return -1
*/
#include <stdio.h>

void nhapMang(int a[], int &n){
    printf("Nhap phan tu cua mang: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
void xuatMang(int a[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}
int jumpSearch(int a[], int n, int k){
    int d = 3; // nhảy 3 phần tử
    int i = 0;
    int j = i + d;
    while(j < n || a[j] < k){ // nhảy theo bước d
        j += d;
        i += d;
    }
    if (j >= n){
        j = n - 1;
    }
    while(a[i] < k){
        i += 1;
        if(i > n || i > j){
            return -1;
        }
    }
}

int main(){
    int a[100], k, n;
    nhapMang(a, n);
    jumpSearch(a, n, k);
    xuatMang(a, n);
    return 0;
}