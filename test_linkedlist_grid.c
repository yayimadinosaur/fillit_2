#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct		s_list
{
	char			content;
	size_t			content_size;
	struct	s_list	*next;
}					t_list;

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;
	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

t_list	**ft_makegrid(void)
{
	t_list	**head;
	t_list	**buff;
	int		i;
	int		j;

	i = 0;
	j = 0;		//added j TESTING
	printf("start [makegrid]\n-----\n");
	if (!(buff = (t_list**)malloc(sizeof(t_list*) * 6)))
		return (0);
	head = buff;
	while (i < 5)
	{
		printf("created row %i\n", i);
		if (!(buff[i] = (t_list*)malloc(sizeof(t_list) * 6)))
			return (0);
		i++;
	}
	buff[i] = 0;
	printf("finished [makegrid]\n-----\n");
	return (head);
}

t_list	**ft_fillgrid(t_list **grid)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 65;
	printf("start [fillgrid]\n-----\n");
	while (i < 5)
	{
		while (j < 5)
		{
			printf("i is currently %i\n", j);
			(grid[i][j]).content = k;
			j++;
			k++;
		}
		if (j == 5)
			grid[i][j].content = 0;
		i++;
		j = 0;
	}
	printf("i is now %i\n", i);
//	printf("test\n");			code breaks here
//	grid[i]->content = '\0';				this breaks the code
	printf("end [fillgrid]\n-----\n");
	return (grid);
}

void	ft_print_grid(t_list **grid)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	printf("start [print_grid]\n-----\n");
	while (grid[i] != 0)
	{
		while (j < 5)
		{
			printf("[%c]", grid[i][j].content);
			j++;
		}
		printf("\n");
		i++;
		j = 0;
	}
/*	while (grid[i] != 0)
	{
		ft_putchar('[');
		ft_putchar(grid[i]->content);
		ft_putchar(']');
	//	ft_putstr((char*)&grid[i] + 48);		//print address of linkedlist (type to char)
	//	ft_putchar('\n');
	//	printf("[%c][%p]\n", grid[i]->content, &grid[i]);
		i++;
	}
	if (grid[i] == 0)			//this causes x to print first
//		printf("[x]\n");			//removing printf to test putchar
	{
		ft_putchar('[');
		ft_putchar('\\');
		ft_putchar('0');
		ft_putchar(']');
		ft_putchar('\n');
	//	printf("%p\n", &grid[i]);
	//	ft_putchar('\n');
	}
*/	printf("-----\nend [print_grid]\n-----\n");
	return ;
}

int		main(void)
{
	ft_print_grid(ft_fillgrid(ft_makegrid()));
	return (0);
}
