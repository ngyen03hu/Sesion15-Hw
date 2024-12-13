#include<stdio.h>


int main(){
	char str1[]="shopee998877@gamil.com";
	int alpha = 0;
	int digit =0;
	int specialcharacters =0;
	int size = strlen(str1);
	for(int i = 0;i<size;i++){
		if(isalpha(str1[i])){
			alpha++;
		}else if(isdigit(str1[i])){
			digit++;
		}else{ 
		specialcharacters++;
		}
	}
	printf("chu cai :%d ",alpha);
	printf("chu so :%d ",digit);
	printf("chu ky tu  :%d ",specialcharacters);
	return 0;
}
