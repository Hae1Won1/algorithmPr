#include <stdio.h>
void input(int a[], int N){
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
	}
}

void sort(int a[], int N) {
	int i, j;
	int temp;
	for(i=0; i<N-1; i++){
		for(j=1+i;j<N;j++){
			if(a[i] < a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	
	}
}

int main()
{
	int N, k, i;
	int a[1000] = { 0 };

	scanf("%d %d", &N, &k);	
	input(a,N);
	sort(a,N);

	printf("%d\n", a[k-1]);

	return 0;




}

