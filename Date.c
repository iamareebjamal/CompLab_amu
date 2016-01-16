#include <stdio.h>

int main() {
	char *days[7] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
	int d,m,y;
	scanf("%d/%d/%d",&d,&m,&y);
	if(m==1||m==2)
		y--,m+=12;
	int day = (d + 13*(m+1)/5 + (y%100) + (y%100)/4 + y/400 + 5*(y/100))%7;
	printf("%s\n",days[day]);
}
