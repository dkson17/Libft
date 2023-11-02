/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 11:50:59 by dakataso          #+#    #+#             */
/*   Updated: 2023/05/08 12:00:41 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	a;
	size_t	b;

	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	a = ft_strlen(dst);
	b = 0;
	while (src[b] != '\0' && a + 1 < size)
	{
		dst[a] = src[b];
		a++;
		b++;
	}
	dst[a] = '\0';
	return (a + ft_strlen(&src[b]));
}

/*#include <bsd/string.h>

int main()
{
    char    s[30] = "Hello";
    char    s1[100] = " world i love you";

    int i = strlcat(s, s1, sizeof(45));
    printf("src + dest %d, from real function\n", i);

    char    s2[30] = "Hello";
    char    s3[100] = " world i love you";

    int d = ft_strlcat(s2, s3, sizeof(45));
    printf("src + dest %d, from my function\n", d);
}*/
