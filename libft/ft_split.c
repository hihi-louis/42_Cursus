#include "libft.h"

static size_t ft_countword(const char *s, char c)
{
    size_t count;

    count = 0;
    if(!s || !*s)
        return (0);
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
    return (word);
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
char **ft_split(char const *s, char c)
{
    char **result;
    size_t word_count;
    size_t i;

    if (!s)
        return (NULL);
    word_count = ft_countword(s, c);
    result = (char **)malloc((word_count + 1) * sizeof(char *));
    if (!result)
        return (NULL);
    i = 0;
    while (*s)
    {
        while (*s == c)
            s++;
        if (*s)
        {
            result[i] = ft_extract_word(s, c);
            if (!result[i])
            {
                ft_free_word(result, i);
                return (NULL);
            }
            i++;
            while (*s && *s != c)
                s++;
        }
    }
    result[i] = NULL;
    return (result);
}

int main()
{
    char *s = "Hello What The hell MAn";
    char **v = ft_split(s, ' ');
    char **temp = v;  // Lưu con trỏ gốc để giải phóng sau này

    if (v)
    {
        while(*v)
        {
            printf("%s\n", *v);
            v++;
        }
        ft_free_word(temp, ft_countword(s, ' '));  // Giải phóng bộ nhớ
    }
    return 0;
}

// static int process_word(char **result, const char *s, char c, size_t *i)
// {
//     char *word;

//     word = ft_extract_word(s, c);
//     if (!word)
//     {
//         ft_free_word(result, *i);
//         return (0);
//     }
//     result[(*i)++] = word;
//     return (1);
// }

// char **ft_split(char const *s, char c)
// {
//     char **result;
//     size_t word_count, i;

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
//             if (!process_word(result, s, c, &i))
//                 return (NULL);
//             while (*s && *s != c)
//                 s++;
//         }
//     }
//     result[i] = NULL;
//     return (result);
// }