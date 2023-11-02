/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 11:14:23 by dakataso          #+#    #+#             */
/*   Updated: 2023/05/08 11:33:56 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *) dest;
	s = (const unsigned char *) src;
	if (s < d)
	{
		while (n--)
			d[n] = s[n];
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}
/*int main()
{
    char str1[] = "Hello, world!";
    char str2[20];

	ft_memmove(str2, str1, ft_strlen(str1));
    printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
}*/
