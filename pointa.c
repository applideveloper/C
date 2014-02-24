#include <stdio.h>

/*

ポインタ : アドレスを格納するための変数
メモリ(記憶領域)
& : アドレス演算子
* : 間接演算子

*/

int main(void){

	int a;  
	printf("int a;\n");
	printf("&a = %p\n",&a);
	printf("size of a = %lu byte\n",sizeof a);
	a = 10; 
	printf("a = %d\n",a); 	
	printf("*&a = %d\n",*&a);
	
	int *pa;
	printf("int *pa;\n");
	printf("&pa = %p\n",&pa);
	printf("size of pa = %lu byte\n",sizeof pa);
	pa = &a;
	printf("pa = &a\n");
	printf("&a = %p\n",&a);
	printf("&pa = %p\n",&pa);
	printf("*pa = %d\n",*pa);

	return 0;
}
