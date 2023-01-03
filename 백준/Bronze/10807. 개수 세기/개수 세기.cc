//2번째 방식
#include<cstdio>

int arr[201];

int main()
{
	int n;
	int target;
	int input;
	int count = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &input);
		arr[100 + input] += 1;
	}

	scanf("%d", &target);

	count = arr[target + 100];
	printf("%d\n", count);

	return 0;
}