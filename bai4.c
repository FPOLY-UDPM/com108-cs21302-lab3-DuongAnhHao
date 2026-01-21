/******************************************************************************
 * Họ và tên: [Dương Anh Hào]
 * MSSV:      [PS44395]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 4: XÂY DỰNG MENU CHƯƠNG TRÌNH CHO 3 BÀI TẬP TRÊN 
//  Sử dụng lệnh Switch-case để xây dựng menu chương trình cho 3 bài tập trên 

#include <stdio.h>

int main(){

    // Khai báo biến
    int chon;

    // Nhập dữ liệu
    printf("===== MENU =====\n");
    printf("1. Tinh hoc luc\n");
    printf("2. Giai phuong trinh bac 1\n");
    printf("3. Tinh tien dien\n");
    printf("0. Thoat\n");
    printf("Nhap lua chon: ");
    scanf("%d", &chon);

    // Xử lý, tính toán VÀ Hiển thị kết quả
    switch (chon) {

        case 1: {
            float diem;
            printf("Nhap diem: ");
            scanf("%f", &diem);

            if (diem >= 9)
                printf("Hoc luc: Xuat sac");
            else if (diem >= 8)
                printf("Hoc luc: Gioi");
            else if (diem >= 6.5)
                printf("Hoc luc: Kha");
            else if (diem >= 5)
                printf("Hoc luc: Trung binh");
            else if (diem >= 3.5)
                printf("Hoc luc: Yeu");
            else
                printf("Hoc luc: Kem");
            break;
        }

        case 2: {
            float a, b;
            printf("Nhap a: ");
            scanf("%f", &a);
            printf("Nhap b: ");
            scanf("%f", &b);

            if (a == 0) {
                if (b == 0)
                    printf("Phuong trinh vo so nghiem");
                else
                    printf("Phuong trinh vo nghiem");
            } else {
                printf("Nghiem x = %.2f", -b / a);
            }
            break;
        }

        case 3: {
            int soDien;
            printf("Nhap so dien: ");
            scanf("%d", &soDien);

            printf("Tien dien phai dong: %d VND", soDien * 3000);
            break;
        }

        case 0:
            printf("Thoat chuong trinh");
            break;

        default:
            printf("Lua chon khong hop le");
    }

    return 0;
}
