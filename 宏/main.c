#include <stdio.h>
#include <stdlib.h>
//��ı��ʣ��ı��滻
//������ã�
//1.���峣��
#define MAX 100
//2.�������
#define uint unsigned int 
//3.���庯��
#define ADD(a,b) a+b
#define MUL(a,b) a*b
//����겻�ܼӷֺ�
#define SIZE 5;
//����ں������ŵ�
//1.����������Ҫ�ϴ�Ŀ������βο�����������û��
//2.������Ը��ֲ�ͬ���͵Ĳ���ʹ��


//����ں�����ȱ�㣺
//1.û�в��������ͼ��
//2.�겻֧�ֵݹ�
//3.�����ı��滻���±��ʽ��ֵ˳�򲻷���Ԥ��
#define PRINT(Val) printf(#Val " = %d\n", Val)
//�ı�ƴ��
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
	/*printf("test1��%d\n", fun1());
	printf("test2��%d\n", fun2());*/



	//������ӡ��ֵ�ǣ�
	//10+20 = 30
	//PRINT(10+20);
	////�൱��
	//printf("10+20" " = %d\n", 10 + 20);

	//int a = SIZE;
	//�൱��
	//int a = SIZE;;  ���һ���ֺţ���һ������䣬��û�д���
	//���ǣ����������ʱ��,�ͻᱨ��
	//int arr[SIZE] = { 0 };
	/*int b = MUL(10, 5 + 5);
	printf("%d\n ", b);*/
	//printf("hehe %s line��%d\n", _FILE_, _LINE_);

	//int a = ADD(1, 2 + 2 * 2) *2;
	//printf("%d \n", a);

	//printf("hehe %s", _FILE_);
	system("pause");
	return 0;
}