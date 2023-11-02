/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 12:52:27 by dakataso          #+#    #+#             */
/*   Updated: 2023/05/15 13:22:47 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	sublen;
	char	*substr;

	if (!s)
		return (NULL);
	sublen = ft_strlen(s);
	if (start >= sublen)
		len = 0;
	if (len > sublen - start)
		len = sublen - start;
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	ft_memmove(substr, s + start, len);
	substr[len] = '\0';
	return (substr);
}

/*int main(void)
{
	const char *str = "Hello, world!";
	unsigned int start = 7;
	size_t len = 5;

	char *substr = ft_substr(str, start, len);
	if (substr)
	{
		printf("Substring: %s\n", substr);
		free(substr);
	}
	else
	{
		printf("Failed to allocate memory for substring.\n");
	}

	return 0;
}*/
