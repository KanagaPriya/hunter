#include<stdio.h>
#include<conio.h>
void main(){
	int a[10], n, i,j;
	clrscr();
	printf("Enter the numbers");
	scanf("%d", &n);
	printf("Enter the array elements:");
	for (i = 0; i<n; i++){
		scanf("\n%d", &a[i]);
	}
	for (i = 0; i<n; i++){
		for (j = 1; j<i; j++){
			if (a[i] == a[j]){
				printf("the repeated register number is %d", a[i]);
			}
		}

	}
getch();
}
