// ����.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}
#include<iostream>


 typedef struct node{
	int data;
	struct node * next ;
}node ;


 using namespace std;
void chang(node * L)//��ͷ�ڵ������͵�����
            {
              node *p=L;node *q;
			L->next=NULL;
			while(p){
			q=p;p=p->next ;q->next =L->next;L->next =q;
			}

}
node* creat(int n){//����һ���ڵ���Ϊn������
	node*p=NULL;node*q;
	p=(node*)malloc(sizeof(node));
	p->next =NULL;
	for(;n>0;n--){
	q=(node*)malloc(sizeof(node));
	if(q){cout<<""<<endl;break;}

	q->next =p->next ;p->next =q;q->data =0;
	}
	return p;
}

void fuzhi(node*L)//�������е�ÿ���ڵ�������ӵ�һ���ڵ㿪ʼ
{int i=1;
node*p=L->next ;
while(p){
	cout<<"�������"<<i<<"���ڵ��ֵ"<<endl;
	cin>>p->data;
	p=p->next ;i++;
}

}
void shuchu(node*L){
	L=L->next;
	while(L){cout<<L->next<<endl;L=L->next ;}

}
void paixu(node*L){//�������еĽڵ����򣬴�С����
	node*p,*q;
	int i=1;
	while(i){
	i=0;
	p=L->next ;
	if(p->next ->next==NULL)break;
	if(p->next ->data >p->next ->next ->data ){
	q=p->next ;p=q->next ;q->next =q->next ->next ;p->next ->next =q;i++;
	
	}
	
	}


}
void hebingyouxu(node*a,node*b)//���������������������ϲ�Ϊһ�����ϲ�������ĵ�һ��������
{
	node*p;
	b=b->next ;
	while(a&&b){
		if(a->next ->data>b->data ){p=b->next ;b=b->next ;p->next =a->next ;a->next =p; }
		else a=a->next ;
	           }
	if(NULL==a)a->next =b;
	if(NULL==b) b->next =a;
}
int main(){
node * a= creat(10);
fuzhi(a);
shuchu(a);
node*b=creat(20);
fuzhi(b);
shuchu(b);
paixu(a);
shuchu(a);
paixu(b);
shuchu(b);
hebingyouxu(a,b);
shuchu(a);

}