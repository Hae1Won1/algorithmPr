#include <stdio.h>

int main()
{
	int row = 0, column = 0, tmp;
	int arr[9][9] = { 0 };

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	tmp = arr[0][0];
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (tmp < arr[i][j]) {
				tmp = arr[i][j];
				row = i;
				column = j;
			}
		}
	}
	printf("%d\n", tmp);
	printf("%d %d\n", row + 1, column + 1);
	return 0;
}

