#include "libft.h"

static size_t ft_countword(const char *s, char c)
{
    size_t count;

    count = 0;
    if(!s || )
        return (NULL);
    while(*s)
    {
        while(*s == c && *s)
            s++;
        if(*s)
            count++;
        while(*s != c && *s)
            s++;
    }
    return (count);
}
static char *ft_extract_word(char const *s, char c)
{
    char *word;
    size_t  len;

    len = 0;
    while(s[len] && s[len] != c)
        len++;
    word = ft_substr(s, 0, len);
    return (0);
}
static void ft_free_word(char **split, size_t count)
{
    size_t  i;

    i = 0;
    while(i < count)
    {
        free(split[i]);
        i++;
    }
    free(split);
}
char	**ft_split(char const *s, char c)
{
	char	**lst;
	size_t	word_len;
	int		i;

	lst = (char **)malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!s || !lst)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			lst[i++] = ft_substr(s, 0, word_len);
			s += word_len;
		}
	}
	lst[i] = NULL;
	return (lst);
}

int main()
{
    char *s = "Hello What The hell MAn";
    char **v = ft_split(s, ' ');
    while(*v)
    {
        printf("%s\n", *v++);
    }
    return 0;
}


// char **ft_split(char const *s, char c)
// {
//     char **result;
//     size_t word_count;
//     size_t i;

//     if (!s)
//         return (NULL);
//     word_count = ft_countword(s, c);
//     result = (char **)malloc((word_count + 1) * sizeof(char *));
//     if (!result)
//         return (NULL);
//     i = 0;
//     while (*s)
//     {
//         while (*s == c)
//             s++;
//         if (*s)
//         {
//             result[i] = ft_extract_word(s, c);
//             if (!result[i])
//             {
//                 ft_free_split(result, i);
//                 return (NULL);
//             }
//             i++;
//             while (*s && *s != c)
//                 s++;
//         }
//     }
//     result[i] = NULL;
//     return (result);
// }