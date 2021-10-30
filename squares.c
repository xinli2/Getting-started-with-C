#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

/*
 *Filename:squares.c
 *Purpose:draw a square according to the stdin
 */
void drawSquare(int,char);
int main(){
	int len;
	int unuse;
	char digit;
	scanf("%d%d",&len,&unuse);
	if(len<=0){
		fprintf(stderr,"the length is less or equal to zero,terminating..\n");
		return 1;
	}
	printf("The input character is not a printable character.  Hex=0x0a\n\n");
	//scanf("%d",&unuse);
	//printf("%d",len);
	drawSquare(len,' ');
	while(scanf("%c",&digit)==1){
		if(isprint(digit)!=0){
			drawSquare(len,digit);
		}
		else{
			printf("The input character is not a printable character.  Hex=0x0%x\n",digit);
		}
	}
	return 0;
}


//The function that draw the square
void drawSquare(int n,char digit)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
	    if(i==j){
		printf("\\");
	    }
	    else if(j==(n-i+1)){
		printf("/");
	    }
            else if (i==1 || i==n){
		printf("-"); 
	    }

	    else if(j==1 ||j==n){ 
                printf("|"); 
	    }          
            else           
                printf("%c",digit);           
        }
        printf("\n");
    }
	printf("\n");
}
