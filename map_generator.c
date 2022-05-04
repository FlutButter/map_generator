#include <stdio.h>

int main(int argc, char **argv)
{
	int x;
	int y;
	int i;
	int j;
	FILE *fd;

	x = 0;
	y = 0;
	printf("Введите размер карты по горизонтали: ");
	scanf("%d", &i);
	printf("Введите размер карты по вертикали: ");
	scanf("%d", &j);
	fd = fopen("map.ber", "w");
	while (x < j)
	{
		y = 0;
		while (y < i)
		{
			if (x == 0 || x == (j - 1))
				fprintf(fd, "%d", 1);
			else if (x != 0 && (y == 0 || y == (i - 1)))
				fprintf(fd, "%d", 1);
			else 
				fprintf(fd, "%d", 0);
			y++;
		}
		fprintf(fd, "\n");
		x++;
	}
	fclose(fd);
	return (0);
}