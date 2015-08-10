/*
 * Areeb Jamal
 * A1A - 049 (First Year) COBT
 * 2014-15
 */

#include <stdio.h>
#include <conio.h>

int main(){
	int choice, i, n;
	float max, temp, tot, perc;

	clrscr();
	printf("Enter choice:\n1. Calculation using for loop\n2. Calculation using while loop\n3. Calculation using do-while loop\n");
	scanf("%d", &choice);
	clrscr();

	switch(choice){
		case 1:
			printf("Calculation using 'for loop':\n\nEnter number of subjects:\n");
			scanf("%d", &n);

			for(i=1; i<=n; i++){
				printf("\n\nEnter marks of Subject %d:\n", i);

				scanf("%f", &temp);
				tot = tot + temp;

			}
			break;
		case 2:

			printf("Calculation using 'while loop':\n\nEnter number of subjects:\n");
			scanf("%d", &n);

			i=1;
			while(i<=n){
				printf("\n\nEnter marks of Subject %d:\n", i);

				scanf("%f", &temp);
				tot = tot + temp;

				i++;
			}
			break;
		case 3:

			printf("Calculation using 'do-while loop':\n\nEnter number of subjects:\n");
			scanf("%d", &n);

			i=1;

			do{
				printf("\n\nEnter marks of Subject %d:\n", i);

				scanf("%f", &temp);
				tot = tot + temp;
				i++;
			}while(i<=n);
			break;
		default:
			printf("\n\nPlease enter valid value between 1 and 3...");

	}
	max= 100 * n;
	if(choice<=3&&choice>=1){
		if(tot>max||tot<0)
			printf("\n\nTotal should be between 0 and %.0f.Total = %.0f", max, tot);
		else {
			perc = (tot/max)*100;
			printf("\n\nTotal marks = %.0f\tPercentage = %.2f%%", tot, perc);

		}
	}
	getch();
}