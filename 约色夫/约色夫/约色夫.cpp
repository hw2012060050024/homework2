// Լɫ��.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;

typedef struct node{
	int data;
	node*next;

}node;

void find_list(int sum,int n,int m)//sum��ʾ�ܵ�������n��ʾÿ�������˽���ɱ��,m��ʾ���ʣ�µ�����
{
	int i=0;int t;int k=0;
	int*p=(int*)malloc(sum*sizeof(int));
	for(i;i<sum;i++)
	{
	p[i]=i+1;
	}
		
	i=-1;
	t=sum;
	while(t>m)
	{	k=0;
	for(k;k<n;k++){	
	i++;i=i%sum;
	while(p[i]==0){i++;i=i%sum;}
	}
	
 cout<<"������:"<<p[i]<<endl;
	 p[i]=0;
	 t--;


	}
	i=-1;
	while(sum--){i++;if(p[i]!=0)cout<<"ʤ����:"<<p[i]<<endl;}
	}

void find_lik(int sum,int n,int m){
	int i=0;int t=sum;
	node*h=(node*)malloc(sizeof(node));
	if(!h){cout<<"�ڴ����ʧ��"<<endl;exit(-1);}
	node*r=h,*p;
		for(i;i<sum;i++)
		{
		p=(node*)malloc(sizeof(node));
			if(!p){cout<<"�ڴ����ʧ��"<<endl;exit(-1);}
		p->data =i+1;r->next=p;r=r->next ;
		};
		
		r->next =h->next ;
	

		while(t>m){
			for( i=0;i<n;i++)
			{
				r=r->next ;
			while(!(r->data) )r=r->next ;
			
			}
			while(!(r->data) )r=r->next ;
			cout<<"������:"<<r->data <<endl;r->data =0;t--;

		}
		  r=h;
		while(sum--){r=r->next ;if(r->data!=0)cout<<"ʤ����:"<<r->data<<endl;}


}

void find_fast(int sum,int n,int m)
{
	int i=0;int c=0;int k=0;
	int*p=(int*)malloc(m*sizeof(int));
	if(!p){ cout<<"�ڴ����ʧ��"<<endl;exit(-1);};
	for(i;i<m;i++){p[i]=i+1;};
	i=0;c=m+1;
	for(k;k<sum-m;k++)
	{
		i=0;
		for(i;i<m;i++)
		{
		p[i]+=n;
		p[i]=p[i]%c;if(p[i]==0)p[i]=c;
		if(i%m==m-1)c++;
		}
	
	}

 	for(i=0;i<m;i++)
	{
	cout<<p[i]<<"   "<<endl;
	};
};

int find_fast2(int sum,int n,int m)
{
	

	int winner=0;
	for(int i=2; i<=sum; i++)
		winner=(winner+n)%i;
	winner+=1;
	cout<<winner;
	return winner;

}


 



int main(){
find_list(5,3,2);
cout<<endl;
find_lik(8,3,3);
cout<<endl;
find_fast(8,3,3);
cout<<endl;
find_fast2(20,4,3);
system("pause");
return 0;
}