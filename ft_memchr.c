/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 12:49:29 by dakataso          #+#    #+#             */
/*   Updated: 2023/05/09 17:45:20 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;

	p = (const unsigned char *) s;
	while (n--)
	{
		if (*p == (unsigned char) c)
			return ((void *)p);
		p++;
	}
	return (NULL);
}

/*int main()
{
    char str[] = "hello world";
    char *p;

    p = ft_memchr(str, 'o', 20);
    if (p != NULL) {
        printf("My ft: Found 'o' at position %ld\n", p - str);
    } else {
        printf("My ft: Did not find 'o'\n");
    }

    p = ft_memchr(str, 'z', 20);
    if (p != NULL) {
        printf("My ft: Found 'z' at position %ld\n", p - str);
    } else {
        printf("My ft: Did not find 'z'\n");
    }
    
    p = memchr(str, 'o', 20);
    if (p != NULL) {
        printf("Org ft: Found 'o' at position %ld in original ft\n", p - str);
    } else {
        printf("Org ft: Did not find 'o'\n");
    }

    p = memchr(str, 'z', 20);
    if (p != NULL) {
        printf("Org ft: Found 'z' at position %ld\n", p - str);
    } else {
        printf("Org ft: Did not find 'z'\n");
    }

    return 0;
}*/	
