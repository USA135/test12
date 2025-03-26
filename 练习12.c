//判断 101 到 200 之间的素数。
//判断素数的方法：用一个数分别去除 2 到 sqrt(这个数)，如果能被整除，则表明此数不是素数，反之是素数。

#include <stdio.h>

int main(){
	int count=0;
	for(int i=101;i<=200;i++){
		int is_prime=1;//假设i为素数
		for(int j=2;j*j<=i;j++){
			if(i%j==0){
				is_prime=0;
				break;
			}
		}
		if(is_prime){
			printf("找到素数：%d\n",i);
			count++;
		}
	}
	printf("\n找到%d个素数\n",count);
	return 0;
}


