#include <stdio.h>
int main(){
int n;scanf("%d",&n);
int a[1000];
for(int i=0;i<n;i++) scanf("%d",&a[i]);
int m;scanf("%d",&m);
for(int i=0;i<n;i++){
int idx=(i+m)%n;
printf("%d",a[idx]);
if(i<n-1) printf(" ");
}
return 0;}
