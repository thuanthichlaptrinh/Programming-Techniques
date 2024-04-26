/*      THUẬT TOÁN TÌM KIẾM NHỊ PHÂN (O(logn))
- input: một dãy số a, n
- output: dãy số đã đc sắp xếp
- ý tưởng: 
    1. tìm giá trị ptu nằm giữa dãy, gọi là x
    2. nếu x == k thì x là kq và thông báo chỉ số
    3. có 2 tình huống: 
        + nếu x < k => tìm kiếm ở nửa sau dãy số
        + nếu x > k => tìm kiếm ở nửa đầu dãy số
    4. lặp lại các bước cho đến khi tìm thấy, hoặc đến khi khu vực tìm kiếm là rỗng (-1)
- Mã giả:
    binarySearch(a, k)
        left = 1, right = n : vị trí đầu tiên, vị trí cuối cùng
        while left <= right 
            mid = (left + right)/2 // tìm vị trí giữa(lấy phần tử nguyên)
            if (a[mid] == k) // nếu a vt ở giữa = gtri k cần tìm => return
                return mid
            else if (a[mid] < k)
                left = mid + 1 // tìm vị trí bên phải
            else 
                right = mid - 1 // tìm vị trí ở đầu 
        return -1
*/
#include <stdio.h>
#include <stdlib.h>

int binarySearch(int a[], int n, int k){
    int l = 0, r = n - 1;
    while(l <= r){
        int m = (l + r) / 2;
        if(a[m] == k){ // chỉ lấy phần nguyên
            return m;
        }
        else if(a[m] < k){
            l = m + 1;
        }
        else{
            r = m + 1;
        }
    }
    return -1;  
}
int binarySearch_DeQuy(int a[], int n, int x, int left, int right){
    if(left > right)
        return -1;
    int mid = (left + right) / 2;
    if(a[mid] == x)
        return mid;
    else if(a[mid] < x)
        return binarySearch_DeQuy(a, n, x, mid + 1, right);
    else
        return binarySearch_DeQuy(a, n, x, left, mid - 1);
}

int main(){
    int a[100];
    int n, k;

    /*FILE *f = fopen("binarySearch.txt", "r");
    if(f == NULL){
        printf("Loi tao hoac mo file");
        exit(1);
    }

    fscanf(f, "%d", &n);
    fscanf(f, "%d", &k);
    for(int i = 0; i < n; i++){
        fscanf(f, "%d", &a[i]);
    }
    
    fclose(f);*/
    printf("Nhap n: "); scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("Nhap gia tri k can tim: "); scanf("%d", &k);
    printf("vi tri cua k = %d", binarySearch(a, n, k));
    return 0;
}