#include<stdio.h>
#define infi 999999
int mini(int a,int b)
{
	if(a<b)
		return a;
	else
		return b;
}
int val[10005];
int main()
{

	int t;
	scanf("%d",&t);
	while(t--)
	{

		int m,n;
		scanf("%d%d",&m,&n);
		int i,j,k,a[m+1];
		for(i=1;i<=m;i++)
			scanf("%d",&a[i]);
		for(i=1;i<10005;i++)
			val[i] = infi;
        val[0] = 0;

        for(i=1;i<10005;i++)
		{
			for(j=1;j<=m;j++)
			{
               if(i>=a[j])
			   {
			   	val[i] = mini(val[i],val[i-a[j]] + 1);
			   }
			}
			if(val[i] > n)
				break;
		}

		printf("%d %d %d\n",i,val[i-1],val[i]);
	}
}

