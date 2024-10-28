#include "libft.h"

int ft_isalpha(int c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
// int main()
// {
//     char  c = '*';
//     char result = ft_isalpha(c);
//     printf("The result is %d\n", result);
//     return 0;
// }