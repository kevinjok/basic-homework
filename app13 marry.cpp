#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int sex;
	int year;
	printf("�п�J�ʧO�~��(1���k��2���k��):");
	scanf("%d %d",&sex,&year);
	if(sex==1 && year<18)
	{
		printf("�z�|���A�B"); 
	}
	else if(sex==2 && year<16)
	{
		printf("�z�|���A�B"); 
	}	
	else
	{
		printf("�z�w�A�B"); 
	}
return 0;	
}
