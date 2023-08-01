# C03

### `ft_strcmp.c`

```c
int ft_strcmp(char *s1, char *s2)
{
    while (*s1 || *s2)
    {
        if (*s1 != *s2)
            return (*s1 - *s2);
        s1++;
        s2++;
    }
    return (0);
}
```

This function compares two strings `s1` and `s2`. It iterates through each character in the strings and compares them. If a character in `s1` is not equal to the corresponding character in `s2`, the difference between their ASCII values is returned. If both strings are equal, the function returns 0.

---

### `ft_strncmp.c`

```c
int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (i < n)
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (0);
}
```

This function is similar to `ft_strcmp`, but it compares at most the first `n` characters of the strings `s1` and `s2`. It compares characters up to the given limit `n` or until a difference is encountered. It returns the difference between the ASCII values of the differing characters, or 0 if both strings are equal within the specified limit.

---

### `ft_strcat.c`

```c
char *ft_strcat(char *dest, char *src)
{
    char *dest_origin;

    dest_origin = dest;
    while (*dest)
        dest++;
    while (*src)
    {
        *dest++ = *src++;
    }
    *dest = '\0';
    return (dest_origin);
}
```

This function appends the characters from the string `src` to the end of the string `dest`. It first iterates through the `dest` string to find its end, and then appends the characters from `src`. It returns a pointer to the beginning of the concatenated string `dest`.

---

### `ft_strncat.c`

```c
char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    char *origin;
    int remaining_space;

    origin = dest;
    while (*dest)
        dest++;
    remaining_space = nb;
    while (remaining_space > 0 && *src)
    {
        *dest++ = *src++;
        remaining_space--;
    }
    *dest = '\0';
    return (origin);
}
```

This function is similar to `ft_strcat`, but it appends at most `nb` characters from the `src` string to the `dest` string. It keeps track of the remaining space in the destination string and the number of characters to be appended. The function returns a pointer to the beginning of the concatenated string `dest`.

---

### `ft_strstr.c`

```c
#include <stddef.h>

char *ft_strstr(char *src, char *to_find)
{
    char *s;
    char *n;

    if (src == NULL || to_find == NULL)
        return (NULL);
    if (*to_find == '\0')
        return (src);
    while (*src)
    {
        s = src;
        n = to_find;
        while (*n && *s == *n)
        {
            s++;
            n++;
        }
        if (*n == '\0')
            return (src);
        src++;
    }
    return (NULL);
}
```

This function searches for the first occurrence of the string `to_find` within the string `src`. It uses two pointers, `s` and `n`, to iterate through both strings while comparing their characters. If the entire `to_find` string is found within `src`, a pointer to the beginning of the match is returned. If no match is found, the function returns `NULL`.

---

### `ft_strlcat.c`

```c
unsigned int ft_len(char *str)
{
    unsigned int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int src_len;
    unsigned int dest_len;
    unsigned int i;

    src_len = ft_len(src);
    dest_len = ft_len(dest);
    if (size <= dest_len)
        return (src_len + size);
    i = 0;
    while (i < size - dest_len - 1 && src[i])
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';
    return (src_len + dest_len);
}
```

This function appends the characters from the string `src` to the end of the string `dest` with a size limit of `size`. It calculates the lengths of both strings and ensures that the concatenated result fits within the provided size. The function returns the total length of the concatenated string.