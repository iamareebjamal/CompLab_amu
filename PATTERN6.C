/*
 * Areeb Jamal
 * A1A - 049 (First Year) COBT
 * 2014-15
 */

 /*
   Output:

				1
			1	2	1
		1	2	3	2	1
	1	2	3	4	3	2	1
1 	2	3	4	5	4	3	2	1

 */



 void main(){
	int i,j;
	clrscr();
	
	for(i=1;i<=5;i++){
	
		for(j=5;j>i;j--)
			printf("\t");
		   
		for(j=1;j<=i;j++)
			printf("%d\t", j);
			
		for(j=j-2;j>=1;j--)
			printf("%d\t", j);

		printf("\n");

	}

	getch();
 }