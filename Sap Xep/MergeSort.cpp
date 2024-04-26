/*  thuật toán sắp xếp chọn (O(nlogn))
1. tìm phần tử middle
2. đệ quy nửa trước của mảng
3. đệ quy nửa sau của mảng
4. trộn hai nửa lại thành mảng kết quả  
*/
#include <iostream>
using namespace std;

void merge(int a[], int l, int m, int h){
    int i, j, k = l;
    int n1 = m - l + 1;
    int n2 = h - m;
    /*
    0....7: Tổng có 8 ptu
    m = 3
    n1 = 3 - 0 + 1 = 4
    n2 = 7 - 3 = 4  
    */
   int *L = new int[n1];
   int *R = new int[n2];

   for(i = 0; i < n1; i++){
    L[i] = a[l + i];
   }
   for(j = 0; j < n2; j++){
    R[j] = a[m + j + 1];
   }
   // trộn
   while(i < n1 && j < n2){
    a[k++] = (L[i] <= R[j]) ? L[i++] : R[j++];
   }
   while(i < n1){
    a[k++] = L[i++];
   }
   while(j < n2){
    a[k++] = R[j++];
    /*
        a[k] = R[j]; k++ j++
    */
   }
}

void mergeSort(int a[], int l, int h){
    if(l < h){
        int m = l + (h - l) / 2;
        mergeSort(a, l, m);
        mergeSort(a, m+1, h);
        merge(a, l, m, h);

    }
}
void outPut(int a[], int n){
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << "\n";
}

int main(){
    int a[] = {2, 3, 4, 0, 7, 9, 3, 29, 100, 2};
    int len = sizeof(a) / sizeof(int);
    mergeSort(a, 0, len - 1);
    outPut(a, len);
    return 0;
}
