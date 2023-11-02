/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 10:40:24 by dakataso          #+#    #+#             */
/*   Updated: 2023/05/04 11:03:07 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}

/*#include <stdio.h>

int	main()
{
	char a = 'H';
	printf("%d\n", ft_isalpha(a));

	char b = '?';
	printf("%d\n", ft_isalpha(b));
	
	char c = ' ';
	printf("%d\n", ft_isalpha(c));
}*/
