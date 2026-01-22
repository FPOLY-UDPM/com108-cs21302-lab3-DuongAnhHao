#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice;

    do {
        system("cls"); // Xóa màn hình (Windows)

        printf("====================================\n");
        printf("      CHUONG TRINH TONG HOP C        \n");
        printf("====================================\n");
        printf("1. Kiem tra so nguyen\n");
        printf("2. Uoc chung lon nhat & Boi chung nho nhat\n");
        printf("3. Tinh tien Karaoke\n");
        printf("4. Tinh tien dien\n");
        printf("5. Doi tien\n");
        printf("6. Tinh lai suat vay ngan hang\n");
        printf("7. Vay tien mua xe\n");
        printf("8. Sap xep thong tin sinh vien\n");
        printf("9. Game FPOLY-LOTT\n");
        printf("10. Tinh toan phan so\n");
        printf("0. Thoat chuong trinh\n");
        printf("====================================\n");
        printf("Moi ban chon chuc nang: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Ban da chon chuc nang 1\n");
                break;
            case 2:
                printf("Ban da chon chuc nang 2\n");
                break;
            case 3:
                printf("Ban da chon chuc nang 3\n");
                break;
            case 4:
                printf("Ban da chon chuc nang 4\n");
                break;
            case 5:
                printf("Ban da chon chuc nang 5\n");
                break;
            case 6:
                printf("Ban da chon chuc nang 6\n");
                break;
            case 7:
                printf("Ban da chon chuc nang 7\n");
                break;
            case 8:
                printf("Ban da chon chuc nang 8\n");
                break;
            case 9:
                printf("Ban da chon chuc nang 9\n");
                break;
            case 10:
                printf("Ban da chon chuc nang 10\n");
                break;
            case 0:
                printf("Cam on ban da su dung chuong trinh!\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }

        if (choice != 0) {
            printf("\nNhan phim bat ky de tiep tuc...");
            getch(); // Dừng màn hình
        }

    } while (choice != 0);

    return 0;
}
