/*      thuật toán sắp xếp nhanh
- dựa trên kĩ thuật chia để trị
- ý tưởng:
    + nếu dãy chỉ có 1 ptu => dãy đã được sắp xếp
    + chia: 
        - chọn 1 ptu làm ptu chốt (pivot)
        - chia dãy thành 2 dãy con:
            + dãy bên trái: những ptu nhỏ hơn ptu chốt
            + dãy bên phải: những ptu lớn hơn ptu chốt
    + trị: đối với từng dãy con ta gọi lại đệ quy để sắp xếp dãy con đó
    + Tổng hợp dãy: 
        [dãy bên trái, pivot, dãy bên phải]
    + cách chọn phần tử làm pivot:
        - chọn ptu đầu
        - ptu cuối cùng
        - ptu ở giữa
        - ngẫu nhiên
*/
#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int x = *a;
    *a = *b;
    *b = x;
}
void outPut(int a[], int n){
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << "\n";
}

int partion(int a[], int l, int r){ // chia vùng
    int pivot = a[r];
    int i = l - 1; // biến giám sát quá trình thực hiện sx(để tìm ra ptu chốt)
    for(int j = l; j < r; j++){
        if(a[j] < pivot){
            i++;    
            swap(&a[j], &a[i]); 
        }
    }
    // tìm đc vị trí chính xác của ptu chốt
    swap(&a[i + 1], &a[r]);
    return (i + 1);
}
void quickSort(int a[], int l, int r){
    if(l >= r){
        return;
    }
    // chia
    int pivot = partion(a, l, r);
    // trị: sắp xếp dãy bên trái
    quickSort(a, l, pivot - 1);
    // sắp xếp dãy bên phải
    quickSort(a, pivot + 1, r);
}
 
int main(){
    int a[100];
    int n;

    printf("Nhap n: "); scanf("%d", &n);
    printf("Nhap vao day so: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    quickSort(a, 0, n - 1);
    outPut(a, n);
    return 0;
}


