#include<stdio.h>

#include<string.h>




int main(){

	char str[1000];

	int check[1000]={0};

	printf("Nhap chuoi ky tu:");

	fgets(str,1000,stdin);

	str[strlen(str)-1]='\0';

	for(int i=0;i<strlen(str);i++){

		check[(int)str[i]]++;

	}

	for(int i=0;i<1000;i++){

		if(check[i]!=0){

			printf("%c %d\n",i,check[i]);

			check[i]=0;

		}

	}


}
