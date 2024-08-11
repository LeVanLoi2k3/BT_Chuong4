//#include <stdio.h>
//
//int tinh_A1(int n) {
//    if (n == 0) return 1;
//    if (n == 1) return 0;
//    if (n == 2) return -1;
//    return 2 * tinh_A1(n - 1) - 3 * tinh_A1(n - 2) - tinh_A1(n - 3);
//}
//
//int tinh_A2(int n) {
//    if (n == 1) return 1;
//    if (n == 2) return 2;
//    if (n == 3) return 3;
//    return 2 * tinh_A2(n - 1) + tinh_A2(n - 2) - 3 * tinh_A2(n - 3);
//}
//
//int main() {
//    int chon, n;
//
//    printf("Chon cong thuc:\n");
//    printf("1. Cong thuc 1 (A0 = 1; A1 = 0; A2 = -1; ...)\n");
//    printf("2. Cong thuc 2 (A1 = 1; A2 = 2; A3 = 3; ...)\n");
//    printf("Lua chon cua ban: ");
//    scanf_s("%d", &chon);
//
//    printf("Nhap n: ");
//    scanf_s("%d", &n);
//
//    if (chon == 1) {
//        printf("A(%d) theo cong thuc 1 = %d\n", n, tinh_A1(n));
//    }
//    else if (chon == 2) {
//        printf("A(%d) theo cong thuc 2 = %d\n", n, tinh_A2(n));
//    }
//    else {
//        printf("Lua chon khong hop le!\n");
//    }
//
//    return 0;
//}
