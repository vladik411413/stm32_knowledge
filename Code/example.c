#include <stdio.h>
#include <time.h>
void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = number_of_seconds;
 
    // Storing start time
    clock_t start_time = clock();
 
    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds);
}
int tim = 0;
void segchar (int seg){
        switch (seg)
        {
                case 1:

                        printf("%d",seg);

                        break;

                case 2:

                        printf("%d",seg);

                        break;

                case 3:

                        printf("%d",seg);

                        break;

                case 4:

                        printf("%d",seg);

                        break;

                case 5:

                        printf("%d",seg);

                        break;

                case 6:

                        printf("%d",seg);

                        break;

                case 7:

                        printf("%d",seg);

                        break;

                case 8:

                        printf("%d",seg);

                        break;

                case 9:

                        printf("%d",seg);

                        break;

                case 0:

                        printf("%d",seg);

                        break;
        }
}
void segment_show(int n){
	switch(n){
		case 1:
			segchar(tim%10);
		break;
		case 2:
			segchar((tim/10)%10);
		break;
		case 3:
			segchar((tim/100)%10);
		break;
		case 4:
			segchar((tim/1000)%10);
		break;
	}
}
int main(void){
	while(1){
		tim++;
		for (int i = 4; i >=1; i--){
			segment_show(i);
		}
		delay(10);
		printf("\e[1;1H\e[2J");
	}
	
	return(0);
	}
