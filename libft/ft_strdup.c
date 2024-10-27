#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	size;
	char	*dest;

	size = ft_strlen(src);
	dest = (char *)malloc(size * sizeof(char) + 1);
	if (dest == NULL)
		return (0);
	ft_memcpy(dest, src, size);
	dest[size] = '\0';
	return (dest);
}

// #include <stdio.h>

// int main()
// {
//   char *src = "kimochi";
//   char des[sizeof src];

//   printf("%s", ft_strdup(src));
//   return (0);
  
// }
