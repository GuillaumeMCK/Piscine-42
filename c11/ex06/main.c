
#include <stdio.h>

void	ft_sort_string_tab(char **tab);

int	main(void)
{
	char	*tab[] = {"ZXC", "qd", "Aello World", 0};
	int		i;
	i = -1;
	ft_sort_string_tab(tab);
	while (tab[++i] != 0)
		printf("%s\n", tab[i]);
}

