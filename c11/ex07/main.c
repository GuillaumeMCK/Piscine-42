
#include <stdio.h>

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *));

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	if (!s1 || !s2)
		return (-1);
	i = 0;
	while (s1[i] && s2[i] && ((unsigned char)s1[i] == (unsigned char)s2[i]))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
int	main(void)
{
	char	*tab[] = {"ZXC", "qd", "Aello World", 0};
	int		i;
	i = -1;
	ft_advanced_sort_string_tab(tab, &ft_strcmp);
	while (tab[++i] != 0)
		printf("%s\n", tab[i]);
}

