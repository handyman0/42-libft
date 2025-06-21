#include "libft.h"

int ft_isalpha(char *str)
{
	if((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z'))
		return(1);
	else
		return (0);
}