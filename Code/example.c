#include <stdio.h>

int main(void){
	short int ans=0x11;
	ans|= 0x10 | 0x04;
	printf("%X\n",ans);
	return(0);
	}
