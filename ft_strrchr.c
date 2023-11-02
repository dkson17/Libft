/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:13:15 by dakataso          #+#    #+#             */
/*   Updated: 2023/05/08 15:26:15 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*result;

	result = 0;
	while (*s != '\0')
	{
		if (*s == (char) c)
			result = (char *) s;
		s++;
	}
	if (!(char) c)
		result = (char *) s;
	return (result);
}

/*int main(void)
{
    char str[] = "Hello, world!";
    char *result = ft_strrchr(str, 'o');
    if (result) {
        printf("Found '%c' at index %ld: %s\n", *result, result - str, result);
    } else {
        printf("Could not find '%c'\n", 'g');
    }
    return 0;
}*/
