#include<stdio.h>
#include<stdlib.h> 
#include<string.h>
int main(){
char str[100];
int numbers, 
do{
		printf("MENU\n");
		printf("1. Nhap vao ky tu\n");
		printf("2. In ra do dai chuoi va noi dung vua nhap\n");
		printf("3. In ra chuoi dao nguoc\n");
		printf("4. In ra so luong chu cai trong chuoi\n");
		printf("5. In ra so luong chu so trong chuoi\n");
		printf("6. In ra so luong ky tu dac biet trong chuoi\n");
		printf("7. Thoat\n");
		int choice;
		printf("Lua chon cua ban la: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Nhap vao 1 chuoi ky tu: ");
				scanf("%s",&str);
				break;
			case 2:
			    printf("Do dai cua chuoi la: %d\n",strlen(str));
			    printf("Chuoi vua nhap la: %s\n",str);
				break;
			case 3:
			    for(int i=strlen(str);i>=0;i--){
			    	printf("%c\n",str[i]);
				}
				break;
			case 4:
			    printf("So chu cai trong chuoi la %d");
				break;
			case 5:
			    printf("So chu so trong chuoi la %d");
				break;
			case 6:
			    printf("So ky tu dac biet trong chuoi la %d");
				break;
			case 7:
				exit(0);
		}
	}while(1==1);
	return 0;
}
