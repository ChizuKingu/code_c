#include<stdio.h>
int main()
{   while(1){
	int g,c;
	printf("�п�J�ƭ�");
	scanf("%d",&g);
	if (g>100 & g<0)
	{
		printf("�Э��s��J");
	}
	c=g/10;
	switch(c)
	{ 
		case 10:
			printf("S");
			break;
		case 9:
			printf("A");
			break;
		case 8:
			printf("B");
			break;
		case 7:
			printf("C");
			break;
		case 6:
			printf("D");
			break;
		default:
			printf("E");
			break;
		
			
			
	}	
	return 0;
}
} 
