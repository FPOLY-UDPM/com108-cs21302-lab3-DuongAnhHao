/******************************************************************************
 * Họ và tên: [Dương Anh Hào]
 * MSSV:      [PS44395]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH TIỀN ĐIỆN 
//  Input: Nhập vào số điện tiêu thụ hàng tháng 
//  Output: Hiển thị số tiền cần phải đóng
 
#include <stdio.h>

int main() {
    // Khai báo biến
    int soDien;
    int tienDien;

    // Nhập dữ liệu
    printf("Nhap so dien tieu thu: ");
    scanf("%d", &soDien);

    // Xử lý, tính toán
    tienDien = soDien * 3000;

    // Hiển thị kết quả
    printf("So tien dien phai dong: %d VND\n", tienDien);

    return 0;
}
