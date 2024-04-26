/*      THUẬT TOÁN TÌM KIẾM TUYẾN TÍNH
- Bài toán: cho trước dãy a1, a2, ... an và giá trị K. sao cho ai = K,
nếu không tìm thấy thì trả về -1
- Ý tưởng:
    + lần lượt kiểm tra từng phần tử, nếu đến cuối dãy vấn không tìm 
    thấy thì thông báo kết quả là -1.
- input dãy A, K
- output: vị trí của K hoặc -1
- Mã giả:
    LinearSearch(A, K)
        n = len(A)
        for i = 1 to n
            if ai == k
                return i
        return -1
*/
#include <stdio.h>
#include <stdlib.h>

int LinearSearch(int a[], int x, int n){
    for(int i = 0; i < n; i++){
        if(a[i] == x){
            return i;
        }
    }
    return -1;
}

int main(){
    int a[100];
    int k, n;
    FILE *f;
    // 1, 2 tạo, mở file
    f = fopen("input.txt", "r");
    if(f == NULL){
        printf("Loi tao hoac mo file");
        exit(1);
    }
    // 3 đọc dữ liệu
    fscanf(f, "%d", &n);
    fscanf(f, "%d", &k);
    for(int i = 0; i < n; i++){
        fscanf(f, "%d", &a[i]);
    }
    // 4 đóng file
    fclose(f);
    printf("\nVi Tri cua K: %d", LinearSearch(a, k, n));

    return 0;
}
