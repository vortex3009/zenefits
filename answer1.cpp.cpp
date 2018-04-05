#include <iostream>
#include<stdio>
using namespace std;

int main() {
	struct node{
char value;
node *left;
node *right;
};
int p=0;
string str;
cout<<"enter the string";
cin>>str;
node *head;
	for(i=0;i<str.lenght();i++)
	
	{
	    if(str[i]=='{'&& i=0){
	        node p=new node();
	        
	        p->value=str[i+1];
	        p->right=NULL;
	        p->left=NULL;
	   head=&P;
	    }

if(str[i].isDigit() &&  i!=0 )
{
  node n= new node();
  n->value=str[i+1];
  n->right=NULL;
  n->left=NULL;
  
  if(p=0)
  {
      p->left=&n;
 
 node *k;
  }
  p++;
  
  if(p==1)
  {
    p->left->left->=&n;
  }

    if(p==2)
    {
        p->left->right=&n;
    }
    if(p==3)
    {
        p->right=&n;
    }
   if(p==4)
   {
       p->right->left=&n;
   }

    if(p==5)
    {
        p->right->right=&n;
    }
    
}
}

	cout<<p->left->left->value<<" ";
	cout<<p->left->value<<" ";
	cout<<p->left->left->right<<" ";
	cout<<p->value<<" ";
	cout<<p->right<<" ";
	cout<<p->right->left->value<<" ";
	cout<<p->right->right->value;
	return 0;
}


