#include "libft.h"

static int is_in_set(char c, const char *set)
{
    while (*set)
    {
        if (c == *set)
            return (1);
        set++;
    }
    return 0;
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t start, end;
    char *new;

    if (!s1 || !set)
        return (NULL);

    start = 0;
    while (s1[start] && is_in_set(s1[start], set))
        start++;

    end = ft_strlen(s1);
    while (end > start && is_in_set(s1[end - 1], set))
        end--;
    end = end + 1;
    new = ft_calloc(end - start, sizeof(char));
    if (!new)
        return (NULL);

    ft_strlcpy(new, s1 + start, end - start);
    return (new);
}

// int main()
// {
//     char *s1 = "ababaaawhat the fuckbbaaabba";
//     char *set = "ab";
//     char *res = ft_strtrim(s1, set);
//     if (res)
//     {
//         printf("%s\n", res);
//         free(res);
//     }
//     return 0;
// }