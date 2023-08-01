# C01

### ft_ft.c

```c
void	ft_ft(int *nbr)
{
	*nbr = 42;
}
```

The `ft_ft` function takes a pointer to an integer as an argument and sets the value of that integer to 42.

---

### ft_ultimate_ft.c

```c
void	ft_ultimate_ft(int *********nbr)
{
    if (!*nbr || !**nbr || !***nbr || !****nbr || !*****nbr || !******nbr
        || !*******nbr || !********nbr || !*********nbr)
        return ;
    *********nbr = 42;
}
```

The `ft_ultimate_ft` function takes a pointer to a pointer to a pointer to a pointer to a pointer to a pointer to a pointer to a pointer to a pointer to a pointer to an integer, and sets the value of the integer to 42. It performs multiple levels of dereferencing to access and modify the value of the integer.

---

### ft_swap.c

```c
void	ft_swap(int *a, int *b)
{
    int	tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}
```

The `ft_swap` function takes two integer pointers as arguments and swaps the values of the integers they point to, effectively swapping the values of two integers.

---

### ft_div_mod.c

```c
void	ft_div_mod(int a, int b, int *div, int *mod)
{
    if (b != 0)
    {
        *div = a / b;
        *mod = a % b;
    }
}
```

The `ft_div_mod` function takes two integers `a` and `b`, as well as two integer pointers `div` and `mod`. It calculates the integer division and remainder of `a` divided by `b`, storing the results in the `div` and `mod` pointers, respectively.

---

### ft_ultimate_div_mod.c

```c
void	ft_ultimate_div_mod(int *a, int *b)
{
    int	tmp;

    if (*b != 0)
    {
        tmp = *a;
        *a = *a / *b;
        *b = tmp % *b;
    }
}
```

The `ft_ultimate_div_mod` function takes two integer pointers `a` and `b`, and performs division and modulo operations on the integers they point to. It updates the value of `a` with the result of integer division, and the value of `b` with the remainder.

---

### ft_putstr.c

```c
#include <unistd.h>

void	ft_putstr(char *str)
{
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
}
```

The `ft_putstr` function takes a pointer to a null-terminated string and outputs the string's characters to the standard output (usually the console) using the `write` system call from the `<unistd.h>` library.

---

### ft_strlen.c

```c
int	ft_strlen(char *str)
{
    int	length;

    length = 0;
    while (*str)
    {
        length++;
        str++;
    }
    return (length);
}
```

The `ft_strlen` function takes a pointer to a null-terminated string and calculates and returns the length of the string by iterating through its characters until it reaches the null terminator.

---

### ft_rev_int_tab.c

```c
void	ft_rev_int_tab(int *tab, int size)
{
    int	i;
    int	tmp;

    i = 0;
    while (i < size / 2)
    {
        tmp = tab[i];
        tab[i] = tab[size - 1 - i];
        tab[size - 1 - i] = tmp;
        i++;
    }
}
```

The `ft_rev_int_tab` function takes an array of integers (`tab`) and its size as arguments, and reverses the order of elements in the array by swapping elements symmetrically around the center.

---

### ft_sort_int_tab.c

```c
void	ft_swap(int *a, int *b)
{
    int	tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
    int	i;
    int	j;

    i = 0;
    while (i < size)
    {
        j = i + 1;
        while (j < size)
        {
            if (tab[i] > tab[j])
            {
                ft_swap(tab + i, tab + j);
            }
            j++;
        }
        i++;
    }
}
```

The `ft_sort_int_tab` function takes an array of integers (`tab`) and its size as arguments, and sorts the elements in ascending order using the bubble sort algorithm. It uses the `ft_swap` function to swap elements in the array when necessary.
