//#include <stdio.h>
//
//// Hàm đệ quy tính Y(n)
//int tinh_Y_dequy(int n) {
//    if (n == 1) return 1;
//    if (n == 2) return 2;
//    if (n == 3) return 3;
//    return tinh_Y_dequy(n - 1) + 2 * tinh_Y_dequy(n - 2) + 3 * tinh_Y_dequy(n - 3);
//}
//
//// Hàm khử đệ quy tính Y(n)
//int tinh_Y_khudequy(int n) {
//    if (n == 1) return 1;
//    if (n == 2) return 2;
//    if (n == 3) return 3;
//
//    int Y1 = 1, Y2 = 2, Y3 = 3, Yn;
//    for (int i = 4; i <= n; i++) {
//        Yn = Y3 + 2 * Y2 + 3 * Y1;
//        Y1 = Y2;
//        Y2 = Y3;
//        Y3 = Yn;
//    }
//    return Yn;
//}
//
//int main() {
//    int n, chon;
//    printf("Nhap n: ");
//    scanf_s("%d", &n);
//
//    printf("Chon phuong phap tinh:\n");
//    printf("1. De quy\n");
//    printf("2. Khu de quy\n");
//    printf("Lua chon: ");
//    scanf_s("%d", &chon);
//
//    int result;
//    if (chon == 1) {
//        result = tinh_Y_dequy(n);
//    }
//    else if (chon == 2) {
//        result = tinh_Y_khudequy(n);
//    }
//    else {
//        printf("Lua chon khong hop le!\n");
//        return 1; // Kết thúc chương trình với mã lỗi
//    }
//
//    printf("Y(%d) = %d\n", n, result);
//    return 0;
//}
