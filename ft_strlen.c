/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:35:38 by dakataso          #+#    #+#             */
/*   Updated: 2023/05/08 10:42:03 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}

/*int main()
{
	char a[] = "Hello!";
	char b[] = " ";
	char c[] = "42 school Berlin";
	printf("%zu\n%zu\n%zu\n", ft_strlen(a), ft_strlen(b), ft_strlen(c));
}*/
