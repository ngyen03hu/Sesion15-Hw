#include <stdio.h>

int main(){
	char str[50]="xin chao ";
	char str1[]="sinh vien k24 jpn_b";
	strcat(str,str1);
	int size=strlen(str);
	for(int i=0;i<size;i++){
		if(i==0||str[i-1]==' '){
			if(str[i]>='a'&&str[i]<='z'){
				str[i]=toupper(str[i]);
			} 
		} 
	} 
	printf("%s",str);
	return 0; 
} 
