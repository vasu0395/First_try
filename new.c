#include <stdio.h>

int main(){
	int number,value;
	scanf("%d %d",&number,&value);
	int arr[number];
	
	for(int i=0;i<number;i++)
		scanf("%d",&arr[i]);
	
	int flag=0;

	for(int i=0;i<number;i++)
	{
		if(arr[i]==value)
		{
			flag=1;
			break;
		}
	}

	if(flag==1)
		printf("data found");
	else
		printf("Not found");
}
