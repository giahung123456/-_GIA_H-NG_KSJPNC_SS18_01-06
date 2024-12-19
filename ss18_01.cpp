#include <stdio.h>

struct SinhVien {
    char name[25];
    int age;
    char phoneNumber[20];
};

int main() {
    struct SinhVien sv = {"Nguyen Van A", 18, "0123456789"};
    
    printf("Name: %s\n", sv.name);
    printf("Age: %d\n", sv.age);
    printf("Phone Number: %s\n", sv.phoneNumber);
    
    return 0;
}