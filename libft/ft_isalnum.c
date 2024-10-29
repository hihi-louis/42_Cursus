#include "libft.h"

int ft_isalnum(int c)
{
    if (c >= 48 && c <= 57 
    || c >= 65 && c <= 90 
    || c >= 97 && c <= 122 )
    {
        return (1);
    }
    return (0);
}

// int main()
// {
//     char  c = '9';
//     char result = ft_isalnum(c);
//     printf("The result is %d\n", result);
//     return 0;
// }