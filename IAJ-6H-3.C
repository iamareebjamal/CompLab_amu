/*
 * Areeb Jamal
 * A1A - 049 (First Year) COBT
 * 2014-15
 */

#include <stdio.h>
#include <conio.h>

void main(){
	int array[15], i, j, count;
	clrscr();

	for(i=0; i<15; i++){
		printf("Enter element for array[%d]\n", i);
		scanf("%d", &array[i]);
	}

	for(i=0; i<15; i++){
		count=0;
		for(j=i+1; j<15; j++){
		      if(array[i]==array[j] && array[j]!='\o'){ //This is not 'slash zero', the '\0' is string terminator
				count++;                                //This is just a random number we replace already counted number with. \o (slash O as in Owl) = 2896(Any random number)
				array[j]='\o';
		      }
		}
		if(count!=0 && array[i]!='\o')
			printf("\n\n%d repeats %d times", array[i], count+1);
	}


	getch();
}