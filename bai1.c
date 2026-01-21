/******************************************************************************
 * Họ và tên: [Dương Anh Hào]
 * MSSV:      [PS44395]
 * Lớp:       [CS21302]
 *****************************************************************************/

    // BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH TÍNH HỌC LỰC  
    // Input: Nhập vào điểm của sinh viên (0-10) 
    // Output: Hiển thị ra màn hình học lực của sinh viên 
    // Biết rằng: 
    // Học lực xuất sắc: Điểm >= 9 
    // Học lực giỏi: 9 > điểm >= 8 
    // Học lực khá: 8 > điểm >= 6.5 
    // Học lực trung bình: 6.5 > điểm >= 5 
    // Học lực yếu: 5 > điểm >= 3.5 
    // Học lực kém: 3.5 > điểm

#include <stdio.h>

int main() {
    // Khai báo biến
    float diem;

    // Nhập dữ liệu
    printf("Nhap diem sinh vien (0 - 10): ");
    scanf("%f", &diem);

    // Xử lý, tính toán VÀ Hiển thị kết quả
    if (diem >= 9 && diem <= 10) {
        printf("Hoc luc: Xuat sac\n");
    } 
    else if (diem >= 8) {
        printf("Hoc luc: Gioi\n");
    } 
    else if (diem >= 6.5) {
        printf("Hoc luc: Kha\n");
    } 
    else if (diem >= 5) {
        printf("Hoc luc: Trung binh\n");
    } 
    else if (diem >= 3.5) {
        printf("Hoc luc: Yeu\n");
    } 
    else if (diem >= 0) {
        printf("Hoc luc: Kem\n");
    } 
    else {
        printf("Diem khong hop le!\n");
    }

    return 0;
}
