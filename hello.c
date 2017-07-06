#include<stdio.h>
void f(int n) {
	int i;
	for(i=1;i<=n;++i) {
		printf("%d ",i);
	}
}
int main()
{
	printf("Hello world!\n");
	f(10);
}
