#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
 int n, x1, y1, x2, y2, x3, y3, cnt;
 scanf("%d", &n); 
 cnt=0;
 while(n--) {
  scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);
  if (((y2-y1)*(y3-y2))==-((x2-x1)*(x3-x2)))
   cnt++;
  else if (((y1-y2)*(y3-y1))==-((x1-x2)*(x3-x1)))
   cnt++;
  else if (((y3-y1)*(y2-y3))==-((x3-x1)*(x2-x3)))
   cnt++;
 }
 printf("%d", cnt);
 return 0;
}