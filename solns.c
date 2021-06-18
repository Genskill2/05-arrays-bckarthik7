/* Enter your solutions in this file */
#include <stdio.h>
#include <limits.h>


int prime(int);


float average(int x[], int n){
float s = 0.0,avg;
for(int i=0;i<n;i++)
  s=s+x[i];
  avg=s/n;
return avg;
}


int max(int x[], int n){
  int m=INT_MIN;
  for(int i=0;i<n;i++)
    if (x[i]>m)
      m=x[i];
  return m;
}


int min(int x[], int n){
  int m=INT_MAX;
  for(int i=0;i<n;i++)
    if (x[i]<m)
      m=x[i];
  return m;
}


int mode(int x[], int n){

  int c[n],k=0;
  for(int i=0;i<n;i++)
    c[i]=0;
  for(int i=0;i<n;i++)
    for(int j=i;j<n;j++)
    {
      if(x[i]=x[j])
        c[i]++;
    }
  int m=INT_MIN;
  for(int i=0;i<n;i++)
    if (c[i]>m){
      m=c[i];
      k++;
    }
  return x[k-1];
}


int factors(int n, int a[]){
  int j=0,k=0,m=n;
  for(int i=2;i<=m/2;i++){
    if(prime(i)==1)
      while(n%i==0){
        a[j]=i;
        n=n/i;
        j++;
      }
  }
  return j;
}

int prime(int i){
  int c=0;
  for(int j=1;j<=i;j++)
    if(i%j==0)
      c++;
  if(c==2)
  return 1;
  else return 0;
}
