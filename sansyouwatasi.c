#include <stdio.h>

/*

ポインタ
値渡し
参照渡し

*/

void swap(int *pa,int *pb){
	printf("&pa = %p\n",pa);
	printf("pa = %d\n",*pa);
	printf("&pb = %p\n",pb);
	printf("pb = %d\n",*pb);
	
	printf("tmp = *pa = %d\n",*pa);
	int tmp = *pa;
	printf("*pa = *pb = %d\n",*pb);
	*pa = *pb;
	printf("*pb = tmp = %d\n",tmp);
	*pb = tmp;

}

int main(void)
{
	int a = 5;
	printf("a = %d\n",a);
	printf("&a = %p\n",&a);
	int b = 10;
	printf("b = %d\n",b);
	printf("&b = %p\n",&b);

	printf("swap(&a,&b)\n");
	swap(&a,&b);
	printf("a:%d, b:%d\n",a,b);
	return 0;
}
