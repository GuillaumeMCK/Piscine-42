
#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int));

int	ft_intcmp(int a, int b)
{
	return (a - b);
}

int	main(void)
{
	int tab[] = {4, 3, 2, 1};
	printf("%d\n", ft_is_sort(tab, 4, &ft_intcmp));
	int tab2[] = {1, 2, 3, 4};
	printf("%d\n", ft_is_sort(tab2, 4, &ft_intcmp));
	int tab3[] = {1, 3, 2, 4};
	printf("%d\n", ft_is_sort(tab3, 4, &ft_intcmp));
}
