//convert decimal value into its octal,hexadecimal and binary.

#include<stdio.h>
int main(){
	int num,i,j,k;
	printf("Enter:");
	scanf("%d",&num);
	printf("Octal conversion = %o\n",num);
	printf("Hexadecimal conversion=%X\n",num);
	printf("Binary:");
	for(i=0;num>0;i++){
	i=num%2;
	num=num/2;
	printf("%d",i);
}
	return 0;
}