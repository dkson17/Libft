/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:28:06 by dakataso          #+#    #+#             */
/*   Updated: 2023/05/08 15:32:27 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n - 1)
		i++;
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

/*#include <string.h>

int	main(void)
{
	char a[] = "";
    char b[] = "hello";
	char c[] = "";
	char d[] = "hello";
	size_t k = 1;

	printf("%d\n", ft_strncmp(a, b, k));
	printf("%d\n", strncmp(c, d, k));
}*/
