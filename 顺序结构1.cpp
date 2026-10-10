#include <stdio.h>
#include <math.h>
int main(){
	int n;
	double rate,capital,deposit;
	printf("输入本金，年利率，年数\n");
	scanf("%lf,%lf,%d",&capital,&rate,&n);
	deposit = capital * pow(1 + rate,n);
	printf("存款本利之和 = %.2f\n",deposit);
	return 0;
}
