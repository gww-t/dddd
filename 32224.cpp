#include<stdio.h>
int main()
{
	int p[1000],c[1000];
	int max=0;
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&p[i]);
		if(p[i]==0){
			p[i]=-1;
		}
		c[i]=c[i-1]+p[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<i;j++){
			if(c[i]==c[j]){
				if(i-j>max){
					max=i-j;
				}
				break;
			}
		}
	}
	printf("%d",max);
}
