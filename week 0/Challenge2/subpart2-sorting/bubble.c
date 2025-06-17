#include <stdio.h>
int main(){
    int a[]={5,2,8,1},n=4;
  int t;
    for(int i=0;i<n;i++)
        for(int j=0;j<n-i-1;j++)
            if(a[j]>a[j+1]){
                t=a[j];a[j]=a[j+1];a[j+1]=t;
            }
    for(int i=0;i<n;i++)
      printf("%d ",a[i]);
    return 0;
}
