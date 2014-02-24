#include <stdio.h>

/*

ポインタ:メモリの節約


*/

/*
値渡し
void f(long a){
	a += 100;
	printf("a = %ld\n",a);
	printf("&a = %p\n",&a);
	printf("size of a = %lu\n",sizeof a);
}
*/

// 参照渡し
void f(long *pa){
	printf("pa = %p\n",pa);
	printf("&pa = %p\n",&pa);
	int i;
	printf("size of i = %zd\n",sizeof i);
	printf("size of pa = %zd\n",sizeof pa);
	*pa = *pa + 100;
	printf("*pa = %ld\n",*pa);
}

/*
void f(long *a){
	printf("a = %p\n",a);
	printf("&a = %p\n",&a);
	printf("size of a = %zd\n",sizeof a);
	*a = *a + 100;
	printf("*a = %ld\n",*a);
}
*/

int main(void){

	long a = 1000;
	printf("a = %ld\n",a);
	printf("&a = %p\n",&a);
	printf("size of a = %zd\n",sizeof a);

	// f(a);
	printf("&a = %p\n",&a);
	printf("size of &a = %zd\n",sizeof &a);
	f(&a);

	return 0;

}
