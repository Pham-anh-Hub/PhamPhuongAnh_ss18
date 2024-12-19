#include<stdio.h>
#include<string.h>
struct SinhVien{
	char name[50];
	int age;
	char phoneNumber[50];
 
};

int main(){
	int sinhVien[5];
	struct SinhVien std1;
	for(int i=0; i<sizeof(sinhVien)/sizeof(int); i++){
		
		printf("\nMoi ban nhap ten sinh vien %d: ", i+1);
		fgets(std1.name,50, stdin);
		printf("Moi nhap tuoi: ");
		scanf("%d",&std1.age);
		fflush(stdin);
		printf("Moi nhap so dien thoai: ");
		fgets(std1.phoneNumber, 50, stdin);
	}
	for(int i=0; i<sizeof(sinhVien)/sizeof(int); i++){
		printf("\nTen sinh vien: %s", std1.name);
		printf("Tuoi: %d", std1.age);
		printf("\nSo dien thoai: %s",std1.phoneNumber);
	}
	return 0;
}

