#include <stdio.h>
#include <conio.h>
void main(){
	int arr[10] = {1,5,2,8,4,10,3,7,3,9};
	int i;
	for(i = 0 ; i< 10 ; i++){
		printf("%d\n" , arr[i]);
	}
	
	printf("\n\n-----------BUBBLE SORT-----------\n\n");
	
	int j;
	int temp;
	for(i=0;i<10;i++){
		for(j=0;j<9;j++){
			if(arr[j] > arr[j + 1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	for(i = 0 ; i<10 ; i++){
		printf("%d \n" , arr[i]);
	}
}

