#include <stdio.h>

int main() {
    int a, b, c;
    int choice;
    int isInput = 0; 

    do {
        printf("\n===== MENU =====\n");
        printf("1. Nhập 3 số\n");
        printf("2. Tổng 3 số\n");
        printf("3. Trung bình cộng 3 số\n");
        printf("4. Số nhỏ nhất\n");
        printf("5. Số lớn nhất\n");
        printf("6. Thoát\n");
        printf("Lựa chọn của bạn: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhập số thứ nhất: ");
                scanf("%d", &a);
                printf("Nhập số thứ hai: ");
                scanf("%d", &b);
                printf("Nhập số thứ ba: ");
                scanf("%d", &c);
                isInput = 1;
                printf("Bạn đã nhập xong 3 số: %d, %d, %d\n", a, b, c);
                break;

            case 2:
                if (!isInput) {
                    printf("Bạn chưa nhập 3 số. Hãy chọn chức năng 1 trước!\n");
                } else {
                    printf("Tổng 3 số là: %d\n", a + b + c);
                }
                break;

            case 3:
                if (!isInput) {
                    printf("Bạn chưa nhập 3 số. Hãy chọn chức năng 1 trước!\n");
                } else {
                    printf("Trung bình cộng 3 số là: %.2f\n", (a + b + c) / 3.0);
                }
                break;

            case 4:
                if (!isInput) {
                    printf("Bạn chưa nhập 3 số. Hãy chọn chức năng 1 trước!\n");
                } else {
                    int min = a;
                    if (b < min) min = b;
                    if (c < min) min = c;
                    printf("Số nhỏ nhất là: %d\n", min);
                }
                break;

            case 5:
                if (!isInput) {
                    printf("Bạn chưa nhập 3 số. Hãy chọn chức năng 1 trước!\n");
                } else {
                    int max = a;
                    if (b > max) max = b;
                    if (c > max) max = c;
                    printf("Số lớn nhất là: %d\n", max);
                }
                break;

            case 6:
                printf("Chương trình kết thúc. Tạm biệt!\n");
                break;

            default:
                printf("Lựa chọn không hợp lệ! Vui lòng nhập lại.\n");
        }
    } while (choice != 6);

    return 0;
}
