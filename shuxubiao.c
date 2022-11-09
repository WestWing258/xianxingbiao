#include <stdio.h>
#define InitSize 50
//动态定义顺序表
typedef struct{
	int *data;
	int MaxSize,length;
}SeqList;
//初始化
void InitList(SeqList L){
	L.data=(int *)malloc(sizeof(int)*InitSize);//调用malloc函数需加头stdlib.h
	L.length=0;
}
//测试
void test(){
	SeqList L;
	InitList(L);
	return 0;
}

//第i个位置插入元素e
bool ListInsert(SeqList &L, int i, int e){
	if(i<1 || i>L.length+1)//判断i的合法性
		return false;
	if(L.length>=MaxSize)//判断顺表是否满
		return false;
	for(int j=L.length;j<=i;j--)
		L.data[j]=L.data[j-1];
	L.data[i-1]=e;
	L.length++;
	return true;
}
//删除第i个元素
bool ListDelete(SeqList &L;int i;int &e){
	if(i<1 || i>L.length+1)//判断i的合法性
		return false;
	e=l.data[i-1];
	for(int j=i;j<L.length;j++)
		L.data[j-1]=L.data[j];
    L.length--;
    return true;
}
//按值查找
int LocateElem(SeqList L,int e){
	int i;
	for(i=0;i<L.length;i++)
		if(L.data[i]==e)
			return i+1;
	return 0;
}
//按位查找
int GetElem(SeqList L,int i){
	return L.data[i-1];
}

int main(){
	int a = 10；
	int b = 10；
	int sum = a + b；
	printf("%d\n",sum );
	printf("Hello,world!");
	return 0;
}
//hot-fix-first
//合并分支 master-test