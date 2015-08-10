/*
 * Areeb Jamal
 * A1A - 049 (First Year) COBT
 * 2014-15
 */

 /*
   Output:

				*
			*	*	*
		*	*	*	*	*
	*	*	*	*	*	*	*
* 	*	*	*	*	*	*	*	*

 */



 void main(){
	int i,j;
	clrscr();
	
	for(i=1;i<=5;i++){
	
		for(j=5;j>i;j--)
			printf("\t");
		   
		for(j=2*i-1;j>0;j--)
			printf("*\t");

		printf("\n");

	}

	getch();
 }