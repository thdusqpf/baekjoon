#include <stdio.h>
 #include <math.h>
  
int main()
{
	int a,idx=0;
	int num=665;
	int i; 
	
	scanf("%d",&a);//1<=n<=10000
	while (1)
	{
		if (idx==a) 
			break;
	
	num++;
		for(i=0;i<10;i++)
		{
			if(num/(int)pow(10,i)%1000==666)
			{
				idx++;//idx=idx+1
				break;
			}
	
		}
	}//idx=1
	printf("%d\n",num);
	return 0;
 } 