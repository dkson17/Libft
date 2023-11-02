/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 09:36:35 by dakataso          #+#    #+#             */
/*   Updated: 2023/05/08 09:42:58 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

/*int	main()
{
	char a = '5';
	char b = 'b';
	char c = ' ';
	printf("%d\n, %d\n, %d\n", ft_isdigit(a), ft_isdigit(b), ft_isdigit(c));
}*/
