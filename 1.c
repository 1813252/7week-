#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	int factorial (int n){
		
		int res=1;
		int i;
		
		for(i=1;i<=n;i++)
		{	
			res=res*i;
		}
		return res;	

}

	int combination (int n, int r){
		
		
		int high, low;
		high=factorial (n);
		low=factorial (r)*factorial (n-r);
		
		return (high/low);
	}


int main(int argc, char *argv[]) {


	int n,r;
	
	printf("input a two integer n and r");
	scanf("%d %d",&n,&r);
	
	printf("%d",combination (n,r));
	
	return 0;
}


