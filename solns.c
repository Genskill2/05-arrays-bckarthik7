/* Enter your solutions in this file */
#include <stdio.h>
#include <limits.h>

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
