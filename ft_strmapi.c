/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 10:11:11 by dakataso          #+#    #+#             */
/*   Updated: 2023/05/17 10:16:36 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*result;
	size_t	i;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*char uppercase(unsigned int index, char c)
{
	if(index % 2 == 1)
		return ft_toupper(c);
	return (c);
}

int main()
{
	char *s = "Hello, World!";
	char *result = ft_strmapi(s, uppercase);

	printf("Original string: %s\n", s);
	printf("Uppercase string: %s\n", result);
	free(result);
}*/
