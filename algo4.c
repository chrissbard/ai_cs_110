#include <stdio.h>
#include <locale.h>
int main()
{
	int arr [50];
	int maxSize = 10;
	int k;
	int *parr;
	parr = &arr[0];
	printf("Перелік елементів\n");
	for(int i = 0; i < maxSize; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\nНомер з якого почнемо виводити масив:\nK = ");
	scanf("%d", &k);
	int count = maxSize - 1;
	printf("Елементи вивели по колу вліво з K до K - 1:\n");
	for(int i = k - 1; i>= -maxSize + k ; i--)
	{
		if(i < 0)
		{
			printf("%d\t", *(parr+count));
			count--;
			continue;
		}
		printf("%d\t", *(parr+i));
	}
   printf("\nМасив після того як знищили перший і останній елементи:\n");
	maxSize -= 2;
	for(int i = 0; i < maxSize ; i++)
	{
		arr[i] = arr[i+1];
		printf("%d\t", arr[i]);
	}

	count = 0;
	printf("\nВивели елементи по колу вправо з K до K + 1:\n");
	for(int i = k - 1; i < maxSize + k +1; i++)
	{
		if(i >= maxSize)
		{
			printf("%d\t", *(parr+count));
			count ++;
			continue;
		}
		printf("%d\t", arr[i]);
	}
}