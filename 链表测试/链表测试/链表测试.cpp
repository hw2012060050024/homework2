// �������.cpp : �������̨Ӧ�ó������ڵ㡣
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
cout<<"��ѡ�����"<<endl;
cout<<"1:����\t2:����\t3:����\t4��ɾ��\t5:����"<<endl;
struct node *h=NULL;
cin>>n;
switch(n){
	case 1: creat();break;
	case 2: finded();break;
	case 3:add();break;
	case 4:deleted();break;
	case 5:return 0;
	default:cout<<"�������";
}
}
}
 struct node * creat ( ){
	
		int len,i,val;
		cout<<"������ڵ����"<<endl;
		cin>>len;
		pnode l=(node*)malloc(sizeof(node));
		if(NULL==l){cout<<"�ڴ����ʧ��";exit(-1);};


		pnode tail=L;
		

		for(i=0;i<len;i++){
		cout<<"�������i���ڵ������"<<endl;
		cin>>val;
		pnode  pnew=(node*)malloc(sizeof(node));
		if(NULL==pnew){cout<<"���ڷ���ʧ��"<<endl;
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