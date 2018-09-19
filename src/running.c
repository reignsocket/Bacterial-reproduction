
#include<stdio.h>
int month[]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
void main()
{
	int times;
	scanf("%d", &times);
	int mon1, date1, mon2, date2, num1;
	while(times --){
		scanf("%d%d%d%d%d", &mon1, &date1, &num1, &mon2, &date2);
		int days = date2 - date1;
		for(int i = mon1; i < mon2; i++){
			days += month[i];
		}
		long num = num1;
		for(int j = 0; j < days; j++){
			num *= 2;
		}
		printf( "%d\n", num );
	}
}
