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
	struct SinhVien std1 = {"Pham Phuong Anh",18, "0981316785"};
	
	//Dng toan tu dot(.) operator
	printf("\nTen sinh vien: %s", std1.fullName);
	printf("\nTuoi: %d", std1.age);
	printf("\nSo dien thoai: %s",std1.phoneNumber);
	return 0;
}
