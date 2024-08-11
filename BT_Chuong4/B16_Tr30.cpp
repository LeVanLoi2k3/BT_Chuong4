//#include <stdio.h>
//
//// Hàm đệ quy tính X(n)
//int tinh_X_dequy(int n) {
//    if (n == 1 || n == 2) return 1;
//    return tinh_X_dequy(n - 1) + (n - 1) * tinh_X_dequy(n - 2);
//}
//
//// Hàm khử đệ quy tính X(n)
//int tinh_X_khudequy(int n) {
//    if (n == 1 || n == 2) return 1;
//
//    int X1 = 1, X2 = 1, Xn;
//    for (int i = 3; i <= n; i++) {
//        Xn = X2 + (i - 1) * X1;
//        X1 = X2;
//        X2 = Xn;
//    }
//    return Xn;
//}
//
//int main() {
//    int n, choice;
//    printf("Nhap n: ");
//    scanf_s("%d", &n);
//
//    printf("Chon phuong phap tinh:\n");
//    printf("1. De quy\n");
//    printf("2. Khu de quy\n");
//    printf("Lua chon: ");
//    scanf_s("%d", &choice);
//
//    int result;
//    if (choice == 1) {
//        result = tinh_X_dequy(n);
//    }
//    else if (choice == 2) {
//        result = tinh_X_khudequy(n);
//    }
//    else {
//        printf("Lua chon khong hop le!\n");
//        return 1; // Kết thúc chương trình với mã lỗi
//    }
//
//    printf("X(%d) = %d\n", n, result);
//    return 0;
//}
