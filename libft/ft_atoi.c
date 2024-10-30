#include "libft.h"

int ft_atoi(const char *str)
{
    size_t  i;
    int flag;
    int result = 0;

    flag = 1;
    i = 0;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    while (str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
            flag = 0;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    if(flag == 0)
    {
        result *= -1;
    }
    return (result);
}
// int main()
// {
//     char *str = "-1542kjaasd";

//     int res = ft_atoi(str);
//     printf("%d", res);
//     return 0;
// }