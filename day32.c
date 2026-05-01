#include <stdio.h>
int main(){
int n;scanf("%d",&n);
int a[1000],top=-1;
for(int i=0;i<n;i++){int x;scanf("%d",&x);a[++top]=x;}
int m;scanf("%d",&m);
for(int i=0;i<m;i++) if(top>=0) top--;
for(int i=top;i>=0;i--){printf("%d",a[i]);if(i>0) printf(" "); }
return 0;}
