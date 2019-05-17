#include <stdio.h>
#include <stdlib.h>
//宏的本质：文本替换
//宏的作用：
//1.定义常量
#define MAX 100
//2.定义变量
#define uint unsigned int 
//3.定义函数
#define ADD(a,b) a+b
#define MUL(a,b) a*b
//定义宏不能加分号
#define SIZE 5;
//宏较于函数的优点
//1.函数调用需要较大的开销（形参拷贝），而宏没有
//2.可以针对各种不同类型的参数使用


//宏较于函数的缺点：
//1.没有参数的类型检查
//2.宏不支持递归
//3.由于文本替换导致表达式求值顺序不符合预期
#define PRINT(Val) printf(#Val " = %d\n", Val)
//文本拼接
#define ADD_SUM(x,y) sum##x+=y

#define n 1

#define PRINT2(val) #val
#include "test1.h"
#include "test2.h"
int main() {
	//char* s = "bit";
	//printf("%s\n", s);
	//printf(PRINT2(bit));


#if defined n
	int sum1 = 10;
	ADD_SUM(1, 2);
	printf("%d\n", sum1);
#else
	printf("heheh!!!\n");
#endif
	/*printf("test1：%d\n", fun1());
	printf("test2：%d\n", fun2());*/



	//期望打印的值是：
	//10+20 = 30
	//PRINT(10+20);
	////相当于
	//printf("10+20" " = %d\n", 10 + 20);

	//int a = SIZE;
	//相当于
	//int a = SIZE;;  多加一个分号，多一条空语句，并没有错误
	//但是，定义数组的时候,就会报错
	//int arr[SIZE] = { 0 };
	/*int b = MUL(10, 5 + 5);
	printf("%d\n ", b);*/
	//printf("hehe %s line：%d\n", _FILE_, _LINE_);

	//int a = ADD(1, 2 + 2 * 2) *2;
	//printf("%d \n", a);

	//printf("hehe %s", _FILE_);
	system("pause");
	return 0;
}