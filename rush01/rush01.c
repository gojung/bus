#include <stdio.h>
#include <stdlib.h>

void print_board(int **sight)
{

}

int	main(int argc, char **argv)
{
	int i;
	int j;
	int **sight;

	sight = malloc(sizeof(int*) * 4);
	i = 0;
	j = -1;
	if(argc != 17)
		return (-1);
	while (argv[++i])
	{	if (i % 4 == 1)
		{
			sight[++j] = malloc(sizeof(int) * 5);
		}
		sight[j][(i % 4) - 1] = argv[i][0] - '0';
	}
	return (0);
}
