/*
 * Areeb Jamal
 * A1A - 049 (First Year) COBT
 * 2014-15
 */

 /*
   Output:

*	*	*	*	*
	*	*	*	*
		*	*	*
			*	*
				*
				
 */



 void main(){
	int i,j;
	clrscr();
	
	for(i=5;i>0;i--){
	
		for(j=i;j<5;j++)
			printf("\t");
		   
		for(j=i;j>0;j--)
			printf("*\t");

		printf("\n");

	}

	getch();
 }
