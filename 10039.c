#include <stdio.h>

int main(void)
{
	int score;
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &score);
		if (score < 40)
		score = 40;
		sum = sum + score;
	}
	

	printf("%d\n", sum / 5);
	return 0;



}