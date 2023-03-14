#include<stdio.h>

int main() {
	double score;
	scanf("%lf", &score);
	if(score >= 0 && score <= 10){
		printf("The score is valid %lf", score);
	}else{
		printf("The score is not valid %lf", score);
	}
	return 0;
}
