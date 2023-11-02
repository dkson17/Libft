/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 11:43:44 by dakataso          #+#    #+#             */
/*   Updated: 2023/05/08 11:49:24 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	res;

	i = 0;
	res = 0;
	while (src[res])
		res++;
	if (size < 1)
		return (res);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (res);
}

/*#include <bsd/string.h>

int		main(void)
{
	char	dest[50];
	char	*src;
	int		size;

	src = "Hello? Is it you I'm looking for?";
	size = 1;
	printf("%zu\n", ft_strlcpy(dest, src, size));
	//printf("%s\n\n", dest);
	printf("%zu", strlcpy(dest, src, size));
}*/
