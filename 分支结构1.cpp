#include <stdio.h>
int main(){
	double faHeight,moHeight,Height;
	char sex,sports,diet;
	printf("sex F or M?\n"); 
	scanf(" %c",&sex);
	printf("faHeight,moHeight?\n");
	scanf("%lf,%lf",&faHeight,&moHeight);
	if(sex == 'F'){
		Height = (faHeight * 0.923 + moHeight)/ 2;		
	}
	else{
		Height = (faHeight + moHeight)* 0.54;
	}
	printf("love sports Y or N?\n");
	scanf(" %c",&sports);
	if(sports == 'Y'){
		Height = Height * 1.02;
	}
	printf("diet Y or N?\n");
	scanf(" %c",&diet);
	if(diet == 'Y'){
		Height = Height * 1.015;
	}
	printf("Height=%fcm",Height);
	return 0;
}
