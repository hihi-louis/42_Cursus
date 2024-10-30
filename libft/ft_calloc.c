#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    unsigned char *ptr;
    size_t  i;

    i = 0;
    ptr = (unsigned char *)malloc(count * size);
    if (!ptr)
        return (NULL);
    while (i < count * size)
    {
        ptr[i++] = 0;
    }
    return (ptr);
}
// int main()
// {
//     int *number = (int *)ft_calloc(5, sizeof(int));
//     if(number == NULL)
//         return (1);
//     for(int i = 0; i < 5; i++)
//         printf("number[%d] = [%d]\n", i, number[i]);
//     for(int i = 0; i < 5; i++)
//         {
//             number[i] = i + 1;
//         }
//     for(int i = 0; i < 5; i++)
//         printf("number[%d] = [%d]\n", i, number[i]);
//     free(number);
//     return 0;
// }
// calloc :  contigous allocation
//void    *ft_calloc(size_t count, size_t size)
// ---count: the number of elements
// ---size: the size of each element
// ---ptr: the poter point to the memory allocated
// ---malloc: allocat the memory with size of count * size
// ---unsigned char *: to access each byte
// ---ptr[i++] = 0: access each byte and assigned each element to 0