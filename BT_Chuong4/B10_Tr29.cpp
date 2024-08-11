//#include <stdio.h>
//#include <stdlib.h> // Thêm thư viện này để sử dụng malloc
//
//int tim_kiem_nhi_phan(int arr[], int kich_thuoc, int x) {
//    int trai = 0, phai = kich_thuoc - 1;
//    while (trai <= phai) {
//        int giua = (trai + phai) / 2;
//        if (arr[giua] == x) return giua;
//        if (arr[giua] < x) trai = giua + 1;
//        else phai = giua - 1;
//    }
//    return -1; // Không tìm thấy
//}
//
//int main() {
//    int n, x;
//    printf("Nhap so luong phan tu trong mang da sap xep: ");
//    scanf_s("%d", &n);
//
//    // Sử dụng malloc để cấp phát bộ nhớ động cho mảng
//    int* arr = (int*)malloc(n * sizeof(int));
//
//    if (arr == NULL) { // Kiểm tra nếu malloc không thành công
//        printf("Khong the cap phat bo nho\n");
//        return 1; // Thoát chương trình nếu cấp phát bộ nhớ thất bại
//    }
//
//    printf("Nhap cac phan tu cua mang da sap xep: ");
//    for (int i = 0; i < n; i++) {
//        scanf_s("%d", &arr[i]);
//    }
//
//    printf("Nhap so can tim: ");
//    scanf_s("%d", &x);
//
//    int ket_qua = tim_kiem_nhi_phan(arr, n, x);
//    if (ket_qua != -1) {
//        printf("Phan tu duoc tim thay tai vi tri so %d\n", ket_qua);
//    }
//    else {
//        printf("Khong tim thay phan tu\n");
//    }
//
//    free(arr); // Giải phóng bộ nhớ đã cấp phát
//
//    return 0;
//}
