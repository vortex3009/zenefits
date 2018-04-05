#include <iostream>
#include<stdio>
using namespace std;

int main() 
{
    
    
    int n,p,t,l;
    
    cout<<"enter n";
    
    cin>>n;
  char i[n];
  cin>>i;
  
  String word;
  cout<<enter the word";
  cin>>word;
  for(j=0;i<n;i++)
  {
  p[j]=char(i[j]);
  
  for(a=0;a<n;a++)
  {
      for(b=0;b<10-i;b++)
      {
         if(p[a]>p[b])
         {
             p[a]=p[b];
             t=p[a];
             p[b]=t;
         }
      }
  }
  
  
  for(k=0;k<n;k++)
  {
for(int d=0;d<n;d++)
{
    if(char(word[k])>p[d])
    {int g=0;
        g++;
    }

    if(char(word[k])=p[d]){
        l=1+fact(g);
    }
    
}
    
}
cout<<l;
      
  }
int fact(int k)
{int p=1;
    for(i=1;i<=k;i++)
    {
        p=p*i
    }
    return p;
}

