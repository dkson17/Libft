/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:55:41 by dakataso          #+#    #+#             */
/*   Updated: 2023/05/08 15:12:48 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char) c)
			return ((char *) s);
		s++;
	}
	if (!(char) c)
		return ((char *) s);
	return (NULL);
}

/*int main(void)
{
    char str[] = "Hello, world!";
    char *result = ft_strchr(str, 'g');
    if (result) {
        printf("Found '%c' at index %ld: %s\n", *result, result - str, result);
    } else {
        printf("Could not find '%c'\n", 'g');
    }
    return 0;
}*/
