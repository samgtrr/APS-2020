#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int cmp(const void *a, const void *b) {
 return (*(int*)a - *(int*)b);
}

int main() {
 int t, n, min, s[5005];
 scanf("%d", &t);
 while(t--) {
  min=1000000000;
  scanf("%d", &n);
  for(int i=0; i<n; i++) scanf("%d", &s[i]);
  qsort(s, n, sizeof(int), cmp);
  for(int i=1; i<n; i++) if(s[i]-s[i-1]<min) min=s[i]-s[i-1];
  printf("%d\n", min);
 }
 return 0;
}