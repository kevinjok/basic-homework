#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int sex;
	int year;
	printf("請輸入性別年齡(1為男生2為女生):");
	scanf("%d %d",&sex,&year);
	if(sex==1 && year<18)
	{
		printf("您尚未適婚"); 
	}
	else if(sex==2 && year<16)
	{
		printf("您尚未適婚"); 
	}	
	else
	{
		printf("您已適婚"); 
	}
return 0;	
}
