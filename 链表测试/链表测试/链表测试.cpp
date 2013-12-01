// 链表测试.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include<iostream>
using namespace std;
 typedef struct node{
	int data;
	struct node * next;
}node,*pnode;

 struct node * creat();
void finded( );
void add();
void deleted();

int main (){
	int n;
	
	while(1){
cout<<"请选择操作"<<endl;
cout<<"1:创建\t2:查找\t3:加入\t4：删除\t5:结束"<<endl;
struct node *h=NULL;
cin>>n;
switch(n){
	case 1: creat();break;
	case 2: finded();break;
	case 3:add();break;
	case 4:deleted();break;
	case 5:return 0;
	default:cout<<"输入错误";
}
}
}
 struct node * creat ( ){
	
		int len,i,val;
		cout<<"请输入节点个数"<<endl;
		cin>>len;
		pnode l=(node*)malloc(sizeof(node));
		if(NULL==l){cout<<"内存分配失败";exit(-1);};


		pnode tail=L;
		

		for(i=0;i<len;i++){
		cout<<"请输入第i个节点的数据"<<endl;
		cin>>val;
		pnode  pnew=(node*)malloc(sizeof(node));
		if(NULL==pnew){cout<<"内在分配失败"<<endl;
		exit(-1);};
		cout<<val<<endl;
		pnew->data=val;
		tail->next=pnew;
		tail=pnew;
		tail->next=NULL;
		}
		return l;
	}
	void find( struct node * l){
	
	}