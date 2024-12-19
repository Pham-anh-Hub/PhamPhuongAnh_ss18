#include<stdio.h>
#include<ctype.h>
#include<string.h>
struct SinhVien{
		char fullName[50];
		int age;
		char phoneNumber[50];
		//cac thuoc tinh cua doi tuong
	};
int main(){
	//Mo ta ve cac doi tuong sinh vien  
	struct SinhVien std1;
	printf("Moi ban nhap ten day du: ");
	fgets(std1.fullName,50, stdin);
	printf("Moi nhap tuoi: ");
	scanf("%d",&std1.age);
	fflush(stdin);
	printf("Moi nhap so dien thoai: ");
	fgets(std1.phoneNumber, 50, stdin);
	
	//Dng toan tu dot(.) operator
	printf("\nTen sinh vien: %s", std1.fullName);
	printf("Tuoi: %d", std1.age);
	printf("\nSo dien thoai: %s",std1.phoneNumber);
	return 0;
}
