#include <stdio.h>

int main(void) {
	// your code goes 
	int t,n,i;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    for(i=1;n>=i;i++)
	    n=n-i;
	    printf("%d\n",i-1);
	}
	return 0;
}

