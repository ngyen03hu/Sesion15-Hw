#include<stdio.h>
#include<string.h>
int main(){
	char str[50];
	char deleteIndex;
	int length;
	printf("Nhap vao chuoi: ");
	fgets(str, 50, stdin);
	printf("Nhap vao ky tu muon xoa: ");
	scanf("%c", &deleteIndex);
	length=strlen(str);
	for (int i=0;i<length;i++){
		if(str[i]==deleteIndex){
			for (int j=i;j<length;j++){
				str[j]=str[j+1];
			}
			i--;
		}
	}
	printf("Chuoi sau khi xoa la: %s", str);
	return 0;
}
