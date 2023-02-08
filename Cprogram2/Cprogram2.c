/*
 * Cprogram2.c
 *
 *  Created on: Feb 8, 2023
 *      Author: n063a207
 */

#include <stdio.h>

void combinations(int arr[],int score, int index){
	if(score < 0){
		return;
	}

	if(score == 0){
		printf("\n\n");
		for (int i = 0; i < index; i++){
			if (i != index - 1){
				if (arr[i] == 8){
					printf("TD + 2pt, ");
				}
				if (arr[i] == 7){
					printf("TD + FG, ");
				}
				if (arr[i] == 6){
					printf("TD, ");
				}
				if (arr[i] == 3){
					printf("FG, ");
				}
				if (arr[i] == 2){
					printf("Safety, ");
				}
			}else{
				if (arr[i] == 8){
					printf("TD + 2pt \n");
				}
				if (arr[i] == 7){
					printf("TD + FG\n");
				}
				if (arr[i] == 6){
					printf("TD\n");
				}
				if (arr[i] == 3){
					printf("FG\n");
				}
				if (arr[i] == 2){
					printf("Safety\n");
				}
			}


		}
		return;
	}


	for(int i = 0; i < 5; i++){
		if (i == 0){
			arr[index] = 8;
			combinations(arr, score - 8, index + 1);
		}
		if (i == 1){
					arr[index] = 7;
					combinations(arr, score - 7, index + 1);
				}
		if (i == 2){
					arr[index] = 6;
					combinations(arr, score - 6, index + 1);
				}
		if (i == 3){
					arr[index] = 3;
					combinations(arr, score - 3, index + 1);
				}
		if (i == 4){
					arr[index] = 2;
					combinations(arr, score - 2, index + 1);
				}
	}

}


int main(){
	//int scores[5] = {8,7,6,3,2};
	int user  = 1;
	int combos[100];



	while (user != 0){
		printf("\n\nEnter 0 to STOP");
		printf("\n\nEnter the NFL score: ");
		scanf("%d", &user);

		combinations(combos, user, 0);


	}




	return 0;
}
