#include<stdio.h>
int f(int n){
	if (n==0){
		return 0;
	}else{
		return n + f(n-1);
	}
}
int main(){
	int num;
	printf("Enter the Number: ");
	scanf("%d", &num);
	printf("%d", f(num));
	
	return 0;
}
