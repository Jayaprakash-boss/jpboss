#include <stdio.h>
#include<conio.h>
void main() 
{ 
	int num;
	printf("Enter the number num: "); 
	scanf("%d", &num);
	if(num > 0)
	printf("%d is positive.", num);
        else if (num < 0) 
        printf("%d is negative.", num); 
        else if (num == 0) 
        printf("%d is zero.", num); 
	return 0; 
} 
