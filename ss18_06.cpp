#include <stdio.h>

struct SinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct SinhVien sv[50] = {
        {1, "Nguyen Van A", 20, "0123456789"},
        {2, "Le Thi B", 22, "0987654321"},
        {3, "Tran Minh C", 21, "0112233445"},
        {4, "Pham Thi D", 23, "0999888777"},
        {5, "Hoang Van E", 24, "0876543210"}
    };
    
    int currentSize = 5;
    int newId = currentSize + 1;

    printf("Nhap thong tin sinh vien can them:\n");

    printf("Nhap ten sinh vien: ");
    fgets(sv[currentSize].name, sizeof(sv[currentSize].name), stdin);

    printf("Nhap tuoi sinh vien: ");
    scanf("%d", &sv[currentSize].age);
    getchar();

    printf("Nhap so dien thoai sinh vien: ");
    fgets(sv[currentSize].phoneNumber, sizeof(sv[currentSize].phoneNumber), stdin);

    sv[currentSize].id = newId;

    currentSize++;

    printf("\nDanh sach sinh vien sau khi them:\n");
    for (int i = 0; i < currentSize; i++) {
        printf("Sinh vien %d:\n", sv[i].id);
        printf("Ten: %s", sv[i].name);
        printf("Tuoi: %d\n", sv[i].age);
        printf("So dien thoai: %s", sv[i].phoneNumber);
        printf("\n");
    }

    return 0;
}
