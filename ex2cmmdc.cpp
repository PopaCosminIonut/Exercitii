#include <iostream>using namespace std;
int a,b,x,y,r;
int main()
int a,b,c,d;
cin>>a;
cin>>b;
cin>>c;
cin>>d;
int cmmdc;
 for(int i = 0;i,n;i++)
 {
     if(i=0)
     {
         cin>>a;
         cin>>b;
         if(a==b)
         {
             cmmdc=a;
         }
         while (a!=b)
         {
             if(a>b)
             {
                 a=a-b;
             }
             if(b>a)
             {
                 b=b-a;
             }
             cmmdc=a;
         }
         continue;
     }
     cout<<"c=",cin>>c;
     if(cmmdc ==c)
     {
         cmmdc =c;
     }
     while (cmmdc!=c)
     {
         if(cmmdc>c)

