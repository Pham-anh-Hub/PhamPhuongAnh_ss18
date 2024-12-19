#include <stdio.h>
#include <string.h>

struct SinhVien {
    char id[10];
    char name[50];
    int age;
    char phoneNumber[50];
};

int main() {
    struct SinhVien students[50] = {
        {"001", "Pham Phuong Anh", 18, "0981372435"},
        {"002", "Pham Van Q", 19, "0866342652"},
        {"003", "Nguyen Van A", 18, "0978767645"},
        {"004", "Nguyen Van B", 19, "0977326678"},
        {"005", "Nguyen Van C", 19, "0654364645"}
    };

    int check;
    int found = 0;
    
    
    printf("\nNhap ma cua sinh vien can tim: ");
    scanf("%s", students[0].id);  

    
    for (int i = 0; i < 5; i++) {
        if (strcmp(students[i].id, students[0].id) == 0) {
            printf("\nThong tin sinh vien can tim: \n");
            printf("Ma sinh vien: %s\n", students[i].id);
            printf("Ten sinh vien: %s\n", students[i].name);
            printf("Tuoi: %d\n", students[i].age);
            printf("So dien thoai: %s\n", students[i].phoneNumber);

            
            printf("\nBan co muon cap nhat thong tin sinh vien (1: Co, 0: Khong)? ");
            int choice;
            scanf("%d", &choice);
            
            if (choice == 1) {
                
                printf("\nNhap ten moi: ");
                getchar(); 
                fgets(students[i].name, 50, stdin);
                students[i].name[strcspn(students[i].name, "\n")] = '\0'; 

                
                printf("\nNhap tuoi moi: ");
                scanf("%d", &students[i].age);

                printf("\nThong tin sau khi cap nhat: \n");
                printf("Ma sinh vien: %s\n", students[i].id);
                printf("Ten sinh vien: %s\n", students[i].name);
                printf("Tuoi: %d\n", students[i].age);
                printf("So dien thoai: %s\n", students[i].phoneNumber);
            }

            found = 1;
            break;  
        }
    }

    if (!found) {
        printf("\nKhong tim thay sinh vien voi ma: %s\n", students[0].id);
    }

    
    printf("\nDanh sach sinh vien sau khi cap nhat:\n");
    for (int i = 0; i < 5; i++) {
        printf("Ma sinh vien: %s\n", students[i].id);
        printf("Ten sinh vien: %s\n", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s\n", students[i].phoneNumber);
        printf("------------------------------\n");
    }

    return 0;
}

