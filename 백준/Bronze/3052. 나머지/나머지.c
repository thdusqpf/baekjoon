#include <stdio.h>
#define NUMBER 10
int main(){
	int remain[NUMBER];
	int i,j,input; 
	int result=0;
	for(i=0;i<NUMBER;i++)
	{
		scanf("%d",&input);
		remain[i]=input%42;//배열에 입력받은 값을 42로 나눈 나머지를 저장 
		}
	
	for(i=0;i<NUMBER;i++)
	{
		int count=0;
		for(j=i+1;j<NUMBER;j++)//a[0]와 a[1~10]까지의 값을 비교한다.  
		{
			if(remain[i]==remain[j])//서로 같은 값일 경우  
			count++;
		}
		if (count==0)// 서로 다른 값일 경 우  
		result++; //result=result+1; 
	}
	 printf("%d",result);//result=;
}	