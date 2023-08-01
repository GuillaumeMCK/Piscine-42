# C02

## Exercise: ft_strcpy.c

```c
char *ft_strcpy(char *dest, char *src)
{
    int i;

    i = -1;
    while (src[++i])
    {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return (dest);
}
```

In this exercise, the `ft_strcpy` function copies the contents of the source string `src` into the destination string `dest` and returns `dest`. It iterates over each character in the source string and copies it to the corresponding index in the destination string until it encounters the null-terminator (`'\0'`), at which point it adds its own null-terminator to `dest`.

---

## Exercise: ft_strncpy.c

```c
char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (src[i] && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}
```

The `ft_strncpy` function copies up to `n` characters from the source string `src` to the destination string `dest`. It stops when it reaches either the end of the source string or when `n` characters have been copied. If `n` is greater than the length of the source string, the remaining bytes in `dest` are filled with null-terminators.

---

## Exercise: ft_str_is_alpha.c

```c
int ft_is_alpha(char c)
{
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int ft_str_is_alpha(char *str)
{
    while (*str)
    {
        if (!ft_is_alpha(*str))
            return (0);
        str++;
    }
    return (1);
}
```

The `ft_str_is_alpha` function checks if all characters in the given string `str` are alphabetic (either uppercase or lowercase letters). It uses the `ft_is_alpha` helper function to determine if a single character is an alphabetic letter.

---

## Exercise: ft_str_is_numeric.c

```c
int ft_is_numeric(char c)
{
    return (c >= '0' && c <= '9');
}

int ft_str_is_numeric(char *str)
{
    while (*str)
    {
        if (!ft_is_numeric(*str))
            return (0);
        str++;
    }
    return (1);
}
```

The `ft_str_is_numeric` function checks if all characters in the given string `str` are numeric digits. It uses the `ft_is_numeric` helper function to determine if a single character is a numeric digit.

---

## Exercise: ft_str_is_lowercase.c

```c
int ft_is_lowercase(char c)
{
    return (c >= 'a' && c <= 'z');
}

int ft_str_is_lowercase(char *str)
{
    while (*str)
    {
        if (!ft_is_lowercase(*str))
            return (0);
        str++;
    }
    return (1);
}
```

The `ft_str_is_lowercase` function checks if all characters in the given string `str` are lowercase letters. It uses the `ft_is_lowercase` helper function to determine if a single character is a lowercase letter.

---

## Exercise: ft_str_is_uppercase.c

```c
int ft_is_uppercase(char c)
{
    return (c >= 'A' && c <= 'Z');
}

int ft_str_is_uppercase(char *str)
{
    while (*str)
    {
        if (!ft_is_uppercase(*str))
            return (0);
        str++;
    }
    return (1);
}
```

The `ft_str_is_uppercase` function checks if all characters in the given string `str` are uppercase letters. It uses the `ft_is_uppercase` helper function to determine if a single character is an uppercase letter.

---

## Exercise: ft_str_is_printable.c

```c
int ft_is_printable(char c)
{
    return (c >= ' ' && c <= '~');
}

int ft_str_is_printable(char *str)
{
    while (*str)
    {
        if (!ft_is_printable(*str))
            return (0);
        str++;
    }
    return (1);
}
```

The `ft_str_is_printable` function checks if all characters in the given string `str` are printable ASCII characters. It uses the `ft_is_printable` helper function to determine if a single character is printable.

---

## Exercise: ft_strupcase.c

```c
int ft_is_lowercase(char c)
{
    return (c >= 'a' && c <= 'z');
}

void ft_to_uppercase(char *c)
{
    *c -= 32;
}

char *ft_strupcase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (ft_is_lowercase(str[i]))
            ft_to_uppercase(str + i);
        i++;
    }
    return (str);
}
```

The `ft_strupcase` function converts all lowercase letters in the given string `str` to uppercase letters using the `ft_to_uppercase` helper function. It iterates through the string and applies the conversion to each lowercase letter encountered.

---

## Exercise: ft_strlowcase.c

```c
int ft_is_upcase(char c)
{
    return (c >= 'A' && c <= 'Z');
}

void ft_to_lowcase(char *c)
{
    *c += 32;
}

char *ft_strlowcase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (ft_is_upcase(str[i]))
            ft_to_lowcase(str + i);
        i++;
    }
    return (str);
}
```

The `ft_strlowcase` function converts all uppercase letters in the given string `str` to lowercase letters using the `ft_to_lowcase` helper function. It iterates through the string and applies the conversion to each uppercase letter encountered.

---

## Exercise: ft_strcapitalize.c

```c
int ft_is_alpha_numeric(char c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= 48 && c <= 57));
}

void ft_to_lowcase(char *c)
{
    if (*c >= 'A' && *c <= 'Z')
        *c += 32;
}

void ft_to_upcase(char *c)
{
    if (*c >= 'a' && *c <= 'z')
        *c -= 32;
}

char *ft_strcapitalize(char *str)
{
    int i;
    unsigned int on_word;

    i = -1;
    on_word = 0;
    while (str[++i])
    {
        if (ft_is_alpha_numeric(str[i]))
        {
            if (!on_word)
            {
                ft_to_upcase(str + i);
                on_word = 1;
            }


            else
                ft_to_lowcase(str + i);
        }
        else
            on_word = 0;
    }
    return (str);
}
```

The `ft_strcapitalize` function capitalizes the first letter of each word in the given string `str`. It iterates through the string, identifying words based on spaces and applying capitalization rules using the `ft_to_upcase` and `ft_to_lowcase` helper functions.

---

## Exercise: ft_strlcpy.c

```c
unsigned int ft_len(char *str)
{
    unsigned int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int src_len;
    unsigned int i;

    src_len = ft_len(src);
    if (size == 0)
        return (src_len);
    i = 0;
    while (i < size - 1 && src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (src_len);
}
```

The `ft_strlcpy` function copies up to `size - 1` characters from the source string `src` to the destination string `dest`. It ensures that the destination string is null-terminated and returns the length of the source string. If `size` is zero, it still calculates the length of the source string.

---

## Exercise: ft_putstr_non_printable.c

```c
void	ft_char_to_hex(char c, char *hex)
{
	char	*base;

	if (hex == NULL)
		return ;
	base = "0123456789abcdef";
    // example: c = 'a' = 97
	hex[0] = base[c / 16]; // 97 / 16 = 6
    // hex[0] = '6'
	hex[1] = base[c % 16]; // 97 % 16 = 1
    // hex[1] = '1'
}

void	ft_putstr_non_printable(char *str)
{
	char	hex[2];
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] < ' ' || str[i] > '~')
		{
			ft_char_to_hex(str[i], hex);
			write(1, "\\", 1);
			write(1, hex, 2);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
```

The `ft_putstr_non_printable` function prints a given string `str` to the standard output, replacing non-printable characters with their hexadecimal representations. It uses the `ft_char_to_hex` helper function to convert non-printable characters into hexadecimal format.

---

## Exercise: ft_print_memory.c

```c
#include <unistd.h>

void ft_write_hexa(char c)
{
    char *base;

    base = "0123456789abcdef";
    write(1, &base[c / 16], 1);
    write(1, &base[c % 16], 1);
}

void ft_display_addr(unsigned long long addr)
{
    // TODO: Implement this function to display the address
}

void ft_display_hexa(unsigned char *str, unsigned int size)
{
    // TODO: Implement this function to display hexadecimal values
}

void *ft_print_memory(void *addr, unsigned int size)
{
    unsigned int i;
    unsigned char *str;
    unsigned int bytes_to_write;

    str = (unsigned char *)addr;
    i = 0;

    // TODO: Implement the main logic of printing memory

    return (addr);
}
```

The `ft_print_memory` function aims to print the memory content starting from the given address `addr` with the specified `size`. It's intended to display memory addresses, hexadecimal values, and printable characters. The helper functions `ft_write_hexa`, `ft_display_addr`, and `ft_display_hexa` are provided to aid in the implementation of the main logic of printing memory.
