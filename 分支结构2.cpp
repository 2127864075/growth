#include <stdio.h>
int main(){
	int data1,data2,result;
	char op;
	printf("data1 ÔËËã·ûop data2\n");
	scanf("%d %c %d",&data1,&op,&data2);
	switch(op){
		case '+':result = data1 + data2;break;
		case '-':result = data1 - data2;break;
		case '*':result = data1 * data2;break;
		case '/':result = data1 / data2;break;
		default:printf("wrong");
		return 1;
	}
	printf("result=%d",result);
	return 0;
}
