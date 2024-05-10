#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c,d;
	int s,m;
	scanf("%d,%d,%d,%d",&a,&b,&c,&d);
	if(a>b){
		s=b;
	}
	else{
		s=a;
	}
	if(c>d){
		m=c;
	}
	else{
		m=d;
	}
	int R;
	R=s+m;
	printf("%d",R);
	return 0;
}