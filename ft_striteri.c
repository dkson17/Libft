/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:40:36 by dakataso          #+#    #+#             */
/*   Updated: 2023/05/16 15:44:58 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			(*f)(i, &s[i]);
			i++;
		}
	}
}

/*void uppercase(unsigned int index, char *c)
{
	if(index % 2 == 1)
		*c = ft_toupper(*c);
}

int main()
{
	char s[] = "Hello, World!";

	printf("Original string: %s\n", s);
	ft_striteri(s, uppercase);
	printf("Uppercase string: %s\n", s);
}*/
