#include <stdio.h>

typedef struct AUTO
{
	char name[10];
	char color[10];
	int year;
	int price;
}AUTO;

int main()
{
	FILE* fl;
	int num;
	printf("Enter number of cars\n");
	scanf("%d",&num);
	fl = fopen("Testlab8.txt","w");
	if(fl == NULL)
	{
		printf("Error");
		return -1;
	}
	AUTO n;
	AUTO arr[num];

	for(int i = 1; i <=num;i++)
	{
		printf("Name="); scanf("%s",n.name);
  		printf("Color="); scanf("%s",n.color);
  		printf("Year="); scanf("%d",&n.year);
  		printf("Price="); scanf("%d",&n.price);
	  	printf("\n");

  		fwrite(&n, sizeof(AUTO),1,fl);
	}

	freopen("Testlab8.txt","r",fl);
	int i = 0;
	while(!feof(fl) && i < num)
	{
		fread(&arr[i],sizeof(AUTO),1,fl);
		printf("%s\t, %s\t, %d\t, %d\n",arr[i].name,arr[i].color, arr[i].year, arr[i].price);
		i++;
	}

	printf("KILLING ELEMENTS\n\n");
	freopen("Testlab8.txt","w",fl);
	printf("Enter year\n\n");
	int yearAft;
	scanf("%d",&yearAft);
	int count = 0;
	for(i = 0; i < num;i++)
	{
		if(arr[i].year < yearAft)
		{
			count++;
			continue;
		}

		fwrite(&arr[i],sizeof(AUTO),1,fl);
	}
	freopen("Testlab8.txt","r",fl);
	AUTO car1[num - count];
	i = 0;
	while(!feof(fl) && i < num-count)
	{
		fread(&car1[i],sizeof(AUTO),1,fl);
		printf("%s\t, %s\t, %d\t, %d\n",car1[i].name,car1[i].color, car1[i].year, car1[i].price);
		i++;
    }

printf("ADDING ELEMENTS:\n\n");
	freopen("Testlab8.txt","w",fl);
	AUTO addElement;

		printf("Name=");
		scanf("%s",addElement.name);
  		printf("Color=");
  		scanf("%s",addElement.color);
  		printf("Year=");
  		scanf("%d",&addElement.year);
  		printf("Price=");
  		scanf("%d",&addElement.price);
	  	printf("\n");
		fwrite(&addElement,sizeof(AUTO),1,fl);
		for(i = 0; i < num-count;i++)
		{
			fwrite(&car1[i],sizeof(AUTO),1,fl);
		}

	freopen("Testlab8.txt","r",fl);
	i = 0;
	AUTO car2[num-count+1];
	while(!feof(fl) && i < num-count +1)
	{
		fread(&car2[i],sizeof(AUTO),1,fl);
		printf("%s\t, %s\t, %d\t, %d\n",car2[i].name,car2[i].color, car2[i].year, car2[i].price);
		i++;
    }
	fclose(fl);
}