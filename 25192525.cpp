#include<stdio.h>
#include<iostream>
int isprime(int n){
	int i;
	for(i = 2; i * i <= n; i++)	if(!(n % i))	return 0;
	return 1;
}

int main(){
	int t, n; scanf("%d", &t);
	while(t-- && scanf("%d", &n))	(isprime(n)) ? printf("yes\n") : printf("no\n");
	return 0;
}