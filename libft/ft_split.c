#include "libft.h"

size_t  count_tokens(char const *s, char delimeter)
{
    size_t tokens;
    bool inside_tokens;

    tokens = 0;
    while(*s)
    {
        inside_tokens = false;

        while(*s ==  delimeter && *s)
            s++;
        while(*s != delimeter && *s)
        { 
            if(!inside_tokens)
            {
                tokens++;
                inside_tokens = true;
            }
            s++;
        }
    }
    return (tokens);
}

char **ft_split(const char *s, char c)
{
    // 1) Count the words or tokens in str
    // 2) Allocated memory for the array of strings
    // 3)cpy the token in the correct position
    size_t tokens;
    tokens = 0;
    tokens = count_tokens(s, c);
}