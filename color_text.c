#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void	ft_printcolor(char *str)
{
	int	color;
	int	format;

	srandom(time(NULL));
	while(*str)
	{
		color = (random() % 7) + 31;
		format = random() % 5;
		printf("\033[%d;%dm", format, color);
		printf("%c", *str);
		str++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Syntax: ./a.out <string>\n");
		exit (0);
	}
	ft_printcolor(argv[1]);
	printf("\n");
	
}
