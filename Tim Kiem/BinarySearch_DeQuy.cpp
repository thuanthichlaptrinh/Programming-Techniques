/*
*/
#include <stdio.h>

int binarySearch_DeQuy(int a[], int n, int k){

}

int main(){
    int a[100];
    int n, k;
    printf("Nhap n: "); scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("Nhap gia tri k can tim: "); scanf("%d", &k);
    printf("vi tri cua k = %d", binarySearch_DeQuy(a, n, k));
    return 0;
}