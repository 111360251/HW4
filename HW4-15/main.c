#include <stdio.h>
#include <stdlib.h>
int main()
{
	int temp,n[100],i,j,s,a,x=0;
	printf("(�w�j�Ƨ�)�п�J�X�ӼƦr:\n");
	scanf("%d",&s);
	printf("�Ш̧ǧA�n���Ʀr�j�p�i���J:\n");
	for(a=1;a<=s;a++)
	{
		scanf("%d",&n[a]);
	}
	for(i=1;i<=s;i++)
	{	
		
		for(j=1;j<=s;j++)
		{
			
			if(n[j]>n[j+1])
			{	
				x++;
				temp=n[j];
				n[j]=n[j+1];
				n[j+1]=temp;
			}
			
		} 
	if(x!=0)
	{
	printf("LOOP %d : ",i);
	for(j=1;j<=s;j++)
	printf("%4d",n[j]);
	printf("\n");
	}
	else
	{
	break;
	}	
	
	x=0;
}
	return 0;
}




