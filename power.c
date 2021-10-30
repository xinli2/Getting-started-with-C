#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
 *Filename:power.c
 *Purpose:Read three numbers and print count number of powers of num
 *
 */
int main(){
	int counter=0;
	int number,count,modulo;
	if(scanf("%d %d %d",&number,&count,&modulo)!=3){
		fprintf(stderr,"Cannot read 3 numbers!!!\n");
		return -1;
	}
	if(number<2 ||modulo<2){
		fprintf(stderr,"number or modulo is less than 2!!\n");
		return -1;
	}
	int i;
	int base=1;
	printf("%d\n",base);
	for(i=1;i<count;i++){
		base=base*number;
		if(base%modulo==0){
			printf("%d is a multiple of %d\n",base,modulo);
			counter=counter+1;
		}
		else{
			printf("%d\n",base);
		}
	}
	printf("TOTAL: %d multiples of %d\n",counter,modulo);
	return 0;
}
