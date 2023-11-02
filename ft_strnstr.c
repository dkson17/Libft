/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:23:09 by dakataso          #+#    #+#             */
/*   Updated: 2023/05/10 13:24:28 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] && big[i + j] && big[i + j] == little[j]
			&& (i + j) < len)
			j++;
		if (little[j] == '\0')
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}

/*#include <bsd/string.h>

int main()
{
	printf("ft_: %s, str: %s\n", ft_strnstr("", "", 1),
	 strnstr("", "", 1));
	printf("ft_: %s, str: %s\n", ft_strnstr("e", "ef", 2), 
	strnstr("e", "ef", 2));
	printf("ft_: %s, str: %s\n", ft_strnstr("ef", "e", 2), 
	strnstr("ef", "e", 2));
printf("ft_: %s, str: %s\n", ft_strnstr("abcd", "cd", 4),
 strnstr("abcd", "cd", 4));
printf("ft_: %s, str: %s\n", ft_strnstr("a", "abcd", 4), 
strnstr("a", "abcd", 4));
printf("ft_: %s, str: %s\n", ft_strnstr("abccd", "cd", 5), 
strnstr("abccd", "cd", 5));
printf("ft_: %s, str: %s\n", ft_strnstr("ace", "ab", 3),
 strnstr("ace", "ab", 3));
printf("ft_: %s, str: %s\n", ft_strnstr("abccdcd", "cd", 7), 
strnstr("abccdcd", "cd", 7));
}*/
